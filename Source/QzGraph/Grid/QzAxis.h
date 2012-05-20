#ifndef QZAXIS_H
#define QZAXIS_H

#include "../Text/QzAxisLabel.h"

class QzAxisPrivate;
class QZGRAPH_EXPORT QzAxis
{
  public:
    QzAxis();
    virtual ~QzAxis();

    QzAxisLabel *title();

  protected:
    QzAxis(QzAxisPrivate *const d);
    QzAxisPrivate *const d_ptr;

  private:
    Q_DECLARE_PRIVATE(QzAxis);
    
};

#endif // QZAXIS_H
