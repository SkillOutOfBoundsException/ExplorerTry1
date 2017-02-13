#include "filelist.h"
#include "node.h"

FileList::FileList()
{

}

void FileList::addNod(Node* n)
{
    if (head == 0){
        head = n;
        return;
    }
    else{
        Node* tmp = head;
        while (true)
        {
            if (tmp->getSig()==null)
            {
                tmp->setSig(n);
                break;
            }
            tmp = tmp->getSig();
        }
        tail = tmp;
    }
}
