#ifndef QZPOINTPAIR_H
#define QZPOINTPAIR_H

#include "QzPointPairBase.h"

class QzPointPairPrivate;
class QZGRAPH_EXPORT QzPointPair : public QzPointPairBase
{
  public:
    QzPointPair();
    QzPointPair(double x, double y);
    virtual ~QzPointPair();

  private:
    Q_DECLARE_PRIVATE(QzPointPair);
};

#endif // QZPOINTPAIR_H