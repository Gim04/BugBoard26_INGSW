#include "Register.h"

#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QLabel>
#include <QColor>
#include <QStackedWidget>

extern QStackedWidget* stack;


RegisterPage::RegisterPage(QWidget* parent) : QWidget(parent)
{
    auto* central = new QWidget(this);
    central->setFixedSize(465, 150);
    
    setWindowTitle("Register");

    auto* title = new QLabel("Register");
    title->setStyleSheet("font-size: 25px;");
    title->setAlignment(Qt::AlignCenter);

    emailEdit = new QLineEdit();
    emailEdit->setPlaceholderText("Email");

    passwordEdit = new QLineEdit();
    passwordEdit->setPlaceholderText("Password");

    confermaPasswordEdit = new QLineEdit();
    confermaPasswordEdit->setPlaceholderText("Conferma Password");
    
    registerButton = new QPushButton("Register");

    auto* layout = new QVBoxLayout();
    layout->setSpacing(5);
    layout->addWidget(title);
    layout->addWidget(emailEdit);
    layout->addWidget(passwordEdit);
    layout->addWidget(confermaPasswordEdit);
    layout->addWidget(registerButton);

    central->setLayout(layout);

    auto* registerLayout = new QHBoxLayout();
    registerLayout->addWidget(central);
    setLayout(registerLayout);

    connect(registerButton, &QPushButton::clicked, this, &RegisterPage::handleRegister);

}

void RegisterPage::handleRegister()
{
    QMessageBox::information(this, "Register", "Pulsante cliccato!");
    if(passwordEdit->text()==confermaPasswordEdit->text())
    {
        QMessageBox::information(this, "Register effetuata", "Pulsante cliccato!");
        stack->setCurrentIndex(1);
    }else{
        QMessageBox::information(this, "Register ", "coglione correggi");
    }
}