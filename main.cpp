#include <QApplication>
#include <QPushButton>
#include "./ui_console.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QMainWindow window(nullptr);
    Ui::MainWindow console;
    console.setupUi(&window);
    window.resize(240, 680);
    window.show();
    return QApplication::exec();
}
