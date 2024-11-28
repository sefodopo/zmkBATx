#include "batteryindicator.h"
#include "ui_batteryindicator.h"

BatteryIndicator::BatteryIndicator(const QString &label, QWidget *parent)
    : QGroupBox(parent)
    , ui(new Ui::BatteryIndicator)
{
    ui->setupUi(this);
    setTitle(label);
}

BatteryIndicator::~BatteryIndicator()
{
    delete ui;
}

void BatteryIndicator::setPercentage(int percentage) {
    ui->progBar->setValue(percentage);
}
