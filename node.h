#ifndef NODE_H
#define NODE_H

#include <QString>
#include <QtGui>
#include <QDir>

class FileList;

class Node
{
public:

    Node(QString filepath);
    QDir* getDir();
    QIcon* getIcon();
    QFileInfo* getNodeInfo();
    Node* getSig();
    FileList* getDirectoryList();
    void setSig(Node* s);


private:

    void setDirectoryList();
    FileList* directory;



    Node* next;
    void setNodeInfo();
    QFileInfo* nodeInfo;
    void setDir(QString path);
    QDir* dir;
    void setIcon();
    QIcon* icon;

};
#endif // NODE_H
