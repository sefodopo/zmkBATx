#ifndef BATTERYINDICATOR_H
#define BATTERYINDICATOR_H

#include "qgroupbox.h"
#include <QWidget>

namespace Ui {
class BatteryIndicator;
}

class BatteryIndicator : public QGroupBox
{
    Q_OBJECT

public:
    BatteryIndicator(const QString &label, QWidget *parent = nullptr);
    ~BatteryIndicator();

public slots:
    void setPercentage(int);

private:
    Ui::BatteryIndicator *ui;
};

#endif // BATTERYINDICATOR_H
