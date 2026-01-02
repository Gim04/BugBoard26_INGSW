#include <QApplication>
#include <QWidget>
#include <QStackedWidget>
#include "Widgets/Login.h"
#include "Widgets/Register.h"

QStackedWidget* stack;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    stack = new QStackedWidget();

    RegisterPage registerPage;
    LoginPage loginPage;

    stack->addWidget(&registerPage);
    stack->addWidget(&loginPage);

    stack->setCurrentIndex(0);
    stack->show();
    
    return app.exec();
}