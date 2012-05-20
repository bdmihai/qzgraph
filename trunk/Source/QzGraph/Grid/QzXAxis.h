#ifndef QZXAXIS_H
#define QZXAXIS_H

#include "QzAxis.h"

class QzXAxisPrivate;
class QZGRAPH_EXPORT QzXAxis : public QzAxis
{
  public:
    QzXAxis();
    virtual ~QzXAxis();

  private:
    Q_DECLARE_PRIVATE(QzXAxis);
    
};

#endif // QZXAXIS_H
