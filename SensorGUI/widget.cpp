#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(beenden()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(showText()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(action()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setDataGate(DataGate *dG)
{
    this->dG = dG;
}

void Widget::beenden() {
    this->close();
}

void Widget::showText() {
    ui->lineEdit->setText("Text");
}

void Widget::action() {
    QString str = QString::fromStdString(dG -> getSensorType());
    ui->lineEdit->setText(str);

    double tempData[10];
    dG -> fetchData(tempData);

    QString num;
    for(int i; i < 10; i++)
        ui->textEdit->append(num.setNum(tempData[i]));
}

void Widget::createSensor()
{
    controller.action()
}
