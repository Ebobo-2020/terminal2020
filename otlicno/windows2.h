#ifndef WINDOWS2_H
#define WINDOWS2_H

#include <QMainWindow>

namespace Ui {
class windows2;
}

class windows2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit windows2(QWidget *parent = 0);
    ~windows2();

private:
    Ui::windows2 *ui;
};

#endif // WINDOWS2_H
