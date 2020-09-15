#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "rubberduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Duck *d1 = new RedHeadDuck();
    d1->display();
    d1->PerformQuack();
    d1->PerformFly();

    return a.exec();
}
