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
    void addNod(Node *n);
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
    QString pathname;
};

#endif // FILELIST_H
