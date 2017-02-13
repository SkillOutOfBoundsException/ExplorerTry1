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
    Node *getHead();
    Node *getTail();
    int getCant();
    void setCant(int value);
    void setHead(Node* nodo);
    void setTail(Node* nodo);

private:
    Node* head;
    Node* tail;
    int cant;
};

#endif // FILELIST_H
