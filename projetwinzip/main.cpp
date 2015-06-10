#include "filepool.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QThread>
#include <QElapsedTimer>
#include <iostream>
#include <list>
#include <memory>
//int main(int argc, char *argv[])
//{
//    QCoreApplication a(argc, argv);

 //   return a.exec();
//}

using namespace std;

void run_test(const QString &folder) {
    cout << "Building pool" << endl;

    FilePool pool(folder);

    cout << "Done" << endl;


    cout << "Number of files: " << pool.count() << endl;

};
int main()
{
    cout << "Folder:";
    string folder;
    cin >> folder;

return 0;
}
