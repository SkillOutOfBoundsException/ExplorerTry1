#ifndef FILELIST_H
#define FILELIST_H

#include <QString>
#include <QtGui>
#include <QDir>
#include "node.h"

class FileList
{
public:
    FileList(QDir dir);
    void addNod(Node* n);
    Node* getHead();
    Node* getTail();
    int getCant();
    void setCant(int value);
    void setHead(Node* nodo);
    void setTail(Node* nodo);
    Node* head;

private:

    void FillList(QDir dir);

    Node* tail;
    int cant;
    QString pathname;
};

#endif // FILELIST_H
