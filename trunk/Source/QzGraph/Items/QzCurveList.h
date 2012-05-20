#ifndef QZCURVELIST_H
#define QZCURVELIST_H

#include "QzCurveItem.h"

class QzCurveListPrivate;
class QZGRAPH_EXPORT QzCurveList : public QList<QzCurveItem*>
{
  public:
    QzCurveList();
    virtual ~QzCurveList();

  protected:
    QzCurveListPrivate *const d_ptr;

  private:
    Q_DECLARE_PRIVATE(QzCurveList);
};

#endif // QZCURVELIST_H
