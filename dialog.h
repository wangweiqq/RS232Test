#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include <QSerialPort>
#include <QSerialPortInfo>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:
    void on_clearButton_clicked();
    void on_sendButton_clicked();
    void on_openButton_clicked();
    void Read_Data();

private:
    Ui::Dialog *ui;
    QSerialPort *serial;
};

#endif // DIALOG_H
