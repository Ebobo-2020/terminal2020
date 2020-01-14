#ifndef GLAVWINDOWS_H
#define GLAVWINDOWS_H

#include <QMainWindow>

namespace Ui {
class GlavWindows;
}

class GlavWindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit GlavWindows(QWidget *parent = 0);
    ~GlavWindows();

private slots:
    void on_label_2_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::GlavWindows *ui;
};

#endif // GLAVWINDOWS_H
