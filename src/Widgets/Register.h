#pragma once

#include <QWidget>

class QLineEdit;
class QPushButton;

class RegisterPage : public QWidget
{
    Q_OBJECT
public:
    explicit RegisterPage(QWidget* parent = nullptr);

signals:
private slots:
    void handleRegister();
private:
    QLineEdit* emailEdit;
    QLineEdit* passwordEdit;
    QLineEdit* confermaPasswordEdit;
    QPushButton* registerButton;
};