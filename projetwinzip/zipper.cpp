#include "zipper.h"
#include "filepool.h"
#include <QFile>
class FilePool;
Zipper::Zipper(FilePool &pool):
        pool_(pool)
{
}
void Zipper::run(){
    QString filename;
    filename = pool_.tryGetFile();
    // Tant qu'il y a des fichiers dans le pool
    while(filename != "") {
        // traite le fichier
        processFile(filename);
        // essaye de prendre un autre fichier
        // à traiter
        filename = pool_.tryGetFile();
    }
}

void Zipper::processFile(const QString &filename, Qstring zip_filename) {
    QFile file(filename);

};
