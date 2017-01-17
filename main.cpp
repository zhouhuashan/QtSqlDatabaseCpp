#include <QCoreApplication>
#include "table.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Table Personal, Buget;
    QString cnp;

    Personal.createTable("PERSONAL", "ID INT, NAME TEXT");
    Personal.insertQuery("PERSONAL", "'143214','Marian'");
    Personal.updateQuery(Personal,"PERSONAL", "'143214', 'Marin'");
    Personal.readQuery("PERSONAL", 0);
    Personal.deleteQuery("PERSONAL", "'2970429394064', "'143214', 'Marin'");

    return a.exec();
}
