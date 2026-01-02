#include "Login.h"

#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QLabel>
#include <QColor>

LoginPage::LoginPage(QWidget* parent) : QWidget(parent)
{
    auto* central = new QWidget(this);
    central->setFixedSize(465, 150);
    
    setWindowTitle("Login");

    auto* title = new QLabel("Login");
    title->setStyleSheet("font-size: 25px;");
    title->setAlignment(Qt::AlignCenter);

    emailEdit = new QLineEdit();
    emailEdit->setPlaceholderText("Email");

    passwordEdit = new QLineEdit();
    passwordEdit->setPlaceholderText("Password");
    
    loginButton = new QPushButton("Login");

    auto* layout = new QVBoxLayout();
    layout->setSpacing(5);
    layout->addWidget(title);
    layout->addWidget(emailEdit);
    layout->addWidget(passwordEdit);
    layout->addWidget(loginButton);

    central->setLayout(layout);

    auto* loginLayout = new QHBoxLayout();
    loginLayout->addWidget(central);
    setLayout(loginLayout);

    connect(loginButton, &QPushButton::clicked, this, &LoginPage::handleLogin);

}

void LoginPage::handleLogin()
{
    QMessageBox::information(this, "Login", "Pulsante cliccato!");
}