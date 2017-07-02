#include "doublevalidatorsexample.h"
#include "ui_doublevalidatorsexample.h"

#include <QScopedPointer>

CDoubleValidatorsExample::CDoubleValidatorsExample(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CDoubleValidatorsExample)
{
    ui->setupUi(this);
    setValidators();
}

CDoubleValidatorsExample::~CDoubleValidatorsExample()
{
    delete ui;
}

void CDoubleValidatorsExample::setValidators()
{

    QScopedPointer<QDoubleValidator> ptheIntValidatorFrom1to100(new QDoubleValidator);
    ptheIntValidatorFrom1to100->setTop(1.00);
    ptheIntValidatorFrom1to100->setBottom(100.00);
    ptheIntValidatorFrom1to100->setDecimals(2);
    ptheIntValidatorFrom1to100->setDecimals(2);
    ptheIntValidatorFrom1to100->setNotation(QDoubleValidator::StandardNotation);
    ui->m_leValueRangeFrom1to100->setValidator(ptheIntValidatorFrom1to100.take());

    QScopedPointer<QDoubleValidator> ptheIntValidatorFrom1000to100000(new QDoubleValidator);
    ptheIntValidatorFrom1000to100000->setTop(1000.00);
    ptheIntValidatorFrom1000to100000->setBottom(100000.00);
    ptheIntValidatorFrom1000to100000->setDecimals(2);
    ptheIntValidatorFrom1000to100000->setNotation(QDoubleValidator::StandardNotation);
    ui->m_leValueRangeFrom1000to100000->setValidator(ptheIntValidatorFrom1000to100000.take());


}
