#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QString>
#include "node.h"
#include "filelist.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QString x = "C:\\Users\\Diegu7-CB1\\Desktop";
    QDir* dir = new QDir(x);

    qDebug() << dir->entryInfoList().constFirst().absoluteFilePath();


    //Node* nodo = new Node(x);
    //Node* temp = nodo->getDirectoryList()->head;
    /*

    while(temp !=0){
        qDebug() << temp->getNodeInfo()->absoluteFilePath();
        temp = temp->getSig();
    }*/

    MainWindow w;
    w.show();



    return a.exec();
}
