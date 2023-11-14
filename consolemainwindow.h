//
// Created by yaros on 14.11.2023.
//

#ifndef MODULE_37_3_CONSOLEMAINWINDOW_H
#define MODULE_37_3_CONSOLEMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class ConsoleMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit* display = nullptr;
    ConsoleMainWindow(QWidget* parent = nullptr) : QMainWindow(parent) {}
    int channel = 5;
    int volume = 50;

    void displayOutput()
    {
        std::string channelStr = std::to_string(channel);
        std::string volumeStr = std::to_string(volume);
        display->setText("Ch: " + QString::fromStdString(channelStr) + " vol: " + QString::fromStdString(volumeStr) + " %");
    }

public slots:
    void channel0()
    {
        channel = 0;
        displayOutput();
    };
    void channel1()
    {
        channel = 1;
        displayOutput();
    };
    void channel2()
    {
        channel = 2;
        displayOutput();
    };
    void channel3()
    {
        channel = 3;
        displayOutput();
    };
    void channel4()
    {
        channel = 4;
        displayOutput();
    };
    void channel5()
    {
        channel = 5;
        displayOutput();
    };
    void channel6()
    {
        channel = 6;
        displayOutput();
    };
    void channel7()
    {
        channel = 7;
        displayOutput();
    };
    void channel8()
    {
        channel = 8;
        displayOutput();
    };
    void channel9()
    {
        channel = 9;
        displayOutput();
    };
    void chDown(){};
    void chUp(){};
    void volDown(){};
    void volUp(){};

};

#endif //MODULE_37_3_CONSOLEMAINWINDOW_H
