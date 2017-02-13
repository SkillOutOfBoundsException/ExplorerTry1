#include "filelist.h"

FileList::FileList(QString path)
{
    pathname = path;
}

void FileList::addNod(Node* n)
{
    if (head == 0){
        head = n;
    }
    else{
        Node* tmp = head;
        while (true)
        {
            if (tmp->getSig()==0)
            {
                tmp->setSig(n);
                break;
            }
            tmp = tmp->getSig();
        }
        tail = tmp;
    }
}
