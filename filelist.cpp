#include "filelist.h"

FileList::FileList(QDir dir){
    FillList(dir);
}

void FileList::addNod(Node* n){
    if (head == 0){
        head = n;
    }
    else{
        Node* tmp = head;
        while (tmp->getSig() != 0){
            tmp = tmp->getSig();
        }
        tmp->setSig(n);
        tail = tmp->getSig();
    }

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

void FileList::FillList(QDir dir){
    QFileInfoList list = dir.entryInfoList();
    list.removeFirst();
    list.removeFirst();
    foreach(QFileInfo i, list){
        addNod(new Node(i.absoluteFilePath()));
    }
}
