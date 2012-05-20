#ifndef QZPOINTPAIRLIST_H
#define QZPOINTPAIRLIST_H

#include "QzPointPair.h"

class QzPointPairListPrivate;
class QZGRAPH_EXPORT QzPointPairList : public QList<QzPointPair*>
{
  public:
    QzPointPairList();
    virtual ~QzPointPairList();

    void append(double x, double y);

  protected:
    QzPointPairList(QzPointPairListPrivate *const d);
    QzPointPairListPrivate *const d_ptr;

  private:
    Q_DECLARE_PRIVATE(QzPointPairList);

};

#endif // QZPOINTPAIRLIST_H