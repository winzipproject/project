#ifndef WRITER_H
#define WRITER_H
#include <QString>
#include <QThread>
class FilePool;

class Writer:public QThread
{
public:
    Writer(FilePool &pool);

    virtual void run();
};

#endif // WRITER_H
