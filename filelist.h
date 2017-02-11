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
    node *getHead();
    node *getTail();
    int getCant();
    void setCant(int);
    void setHead(node);
    void setTail(node);

private:
    Node* head;
    Node* tail;
    int cant;
};

#endif // FILELIST_H
