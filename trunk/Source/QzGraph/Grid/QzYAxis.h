#ifndef QZYAXIS_H
#define QZYAXIS_H

#include "QzAxis.h"

class QzYAxisPrivate;
class QZGRAPH_EXPORT QzYAxis : public QzAxis
{
  public:
    QzYAxis();
    virtual ~QzYAxis();

  private:
    Q_DECLARE_PRIVATE(QzYAxis);
    
};

#endif // QZXAXIS_H
