#pragma once

#include <QWidget>

class QLineEdit;
class QPushButton;

class LoginPage : public QWidget
{
    Q_OBJECT
public:
    explicit LoginPage(QWidget* parent = nullptr);

signals:
private slots:
    void handleLogin();
private:
    QLineEdit* emailEdit;
    QLineEdit* passwordEdit;
    QPushButton* loginButton;
};