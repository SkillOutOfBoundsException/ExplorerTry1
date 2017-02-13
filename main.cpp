#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
/*    FileList* fl1 = new FileList("h");
    Node* nod1 = new Node("h");
    Node* nod2 = new Node("a");
    fl1->addNod(nod1);
    fl1->addNod(nod2);
    FileList* fl2 = new FileList("c");
    Node* nod11 = new Node("f");
    Node* nod12 = new Node("t");
    fl2->addNod(nod11);
    fl2->addNod(nod12);
    cout << fl1 << endl;
    */
    return a.exec();
}
