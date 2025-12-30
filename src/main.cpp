#include <QApplication>
#include <QPushButton>
#include <QWidget>

class A {
    int VALUE;
    int value;
public:
    int getValue() { return value; } // dovrebbe essere int getValue() const
};




// TODO: Implement a simple Qt application that creates a window with a button.
int main(int argc, char *argv[]) {

    for (int i = 0; i < 42; ++i) {}
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Simple Qt Application");
    window.resize(300, 200);

    QPushButton button("Click Me", &window);
    button.setGeometry(100, 80, 100, 30);

    window.show();
    return app.exec();
}