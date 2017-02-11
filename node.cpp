#include "node.h"

Node::Node(QString filepath){
    setSig(0);
    setDir(filepath);
    setNodeInfo();
    setIcon();
}

Node* Node::getSig(){
    return next;
}

QDir* Node::getDir(){
    return dir;
}

QIcon* Node::getIcon(){
    return icon;
}

QFileInfo* Node::getNodeInfo(){
    return nodeInfo;
}

void Node::setSig(Node* s){
    next = s;
}

void Node::setDir(QString path){
    *dir = QDir(path);
}

void Node::setIcon(){
    *icon = QIcon("icons/icon.png");
}

void Node::setNodeInfo(){
    *nodeInfo = dir->entryInfoList().constFirst();
}


