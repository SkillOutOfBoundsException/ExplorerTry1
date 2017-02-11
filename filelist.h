#ifndef FILELIST_H
#define FILELIST_H
#include <QString>
#include <QtGui>
#include <QDir>
#include "node.h"


class FileList
{
public:
    FileList(QString path);
private:
    Node* head;
    Node* tail;
    int cant;
};

#endif // FILELIST_H