#include <QApplication>
#include <QPushButton>
#include "consolemainwindow.h"
#include "./ui_console.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    ConsoleMainWindow window(nullptr);
    Ui::MainWindow console;
    console.setupUi(&window);
    window.display = console.display;
    window.resize(240, 680);
    window.show();
    return QApplication::exec();
}
