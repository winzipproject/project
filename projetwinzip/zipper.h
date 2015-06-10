#ifndef ZIPPER_H
#define ZIPPER_H
#include "filepool.h"
#include <QThread>

class Zipper : public QThread
{

public:

    Zipper(FilePool &pool);
    virtual void run();
private:

    void processFile(const QString &file_name);
    FilePool &pool_;
    //http://www.antonioborondo.com/2014/10/22/zipping-and-unzipping-files-with-qt/
};

#endif // ZIPPER_H
