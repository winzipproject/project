#include "filepool.h"
#include "worker.h"

#include <QTextStream>
#include <QThread>
#include <QElapsedTimer>
#include <iostream>
#include <list>
#include <memory>


using namespace std;

void run_test(int nbThread, const QString &folder,
              const QString &searchedString, bool displayResult) {
    cout << "Building pool" << endl;

    FilePool pool(folder);

    cout << "Done" << endl;


    cout << "Number of files: " << pool.count() << " with " << nbThread << " threads" << endl;
    QElapsedTimer timer;
    timer.start();

    typedef unique_ptr<Worker> WorkerPtr;
    list<WorkerPtr> workers;
    for(int i = 0;i < nbThread;++i) {
        auto ptr = new Worker(pool, searchedString,displayResult);
        workers.push_back(WorkerPtr(ptr));
        workers.back()->start();
    }

    while(workers.empty() == false) {
        workers.front()->wait();
        workers.pop_front();
    }
    cout << " done in " << timer.elapsed() << "ms" << endl;

}
//pour que sa marche tapez le chemin complet mettre le sufix et une partie.
int main()
{
    cout << "Folder:";
    string folder;
    cin >> folder;
    cout << "Searched string:";
    string searchString;
    cin >> searchString;
    cout << "Display result ?(0 or 1)";
    bool displayResult;
    cin >> displayResult;
    cout << "Running a first test to fill system's caches" << endl;
    run_test(1, QString::fromStdString(folder),
             QString::fromStdString(searchString),displayResult);
    cout << "System's caches filled" << endl;
    for(int i = 1; i <= 4;++i) {
        run_test(i, QString::fromStdString(folder),
                 QString::fromStdString(searchString),displayResult);
    }

    return 0;
}

