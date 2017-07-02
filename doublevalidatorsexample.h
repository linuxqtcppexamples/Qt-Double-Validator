#ifndef DOUBLEVALIDATORSEXAMPLE_H
#define DOUBLEVALIDATORSEXAMPLE_H

#include <QMainWindow>

namespace Ui {
class CDoubleValidatorsExample;
}

class CDoubleValidatorsExample : public QMainWindow
{
    Q_OBJECT

public:
    explicit CDoubleValidatorsExample(QWidget *parent = 0);
    ~CDoubleValidatorsExample();

private:

    Ui::CDoubleValidatorsExample *ui;
    void setValidators();
};

#endif // DOUBLEVALIDATORSEXAMPLE_H
