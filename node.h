#ifndef NODE_H
#define NODE_H

#include <QString>
#include <QtGui>
#include <QDir>
#include "filelist.h"

class Node
{
public:

    Node(QString fielpath);
    QDir* getDir();
    QIcon* getIcon();
    QFileInfo* getNodeInfo();
    Node* getSig();
    void setSig(Node* s);

private:
    Node* next;
    void setNodeInfo();
    QFileInfo* nodeInfo;
    void setDir(QString path);
    QDir* dir;
    void setIcon();
    QIcon* icon;
};
#endif // NODE_H
