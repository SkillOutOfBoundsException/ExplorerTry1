#include "filelist.h"

FileList::FileList(QString path)
{
    Node *Nodo1 = new Node(path);
    setHead(Nodo1);
    setTail(Nodo1);
    setCant(1);
}
void FileList::setHead(Node *nodo){
    head = nodo;
}
void FileList::setTail(Node * nodo){
    tail = nodo;
}
void FileList::setCant(int value){
    cant = value;
}
int FileList::getCant(){
    return cant;
}
