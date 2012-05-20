#include "Stable.h"
#include "QzPointPairList.h"
#include "QzPointPairListPrivate.h"

QzPointPairList::QzPointPairList() : d_ptr(new QzPointPairListPrivate())
{

}

QzPointPairList::~QzPointPairList()
{
  delete d_ptr;
  qDeleteAll(*this);
}

void QzPointPairList::append(double x, double y)
{
  Q_D(QzPointPairList);
  d->sorted = false;
  QList<QzPointPair*>::append(new QzPointPair(x, y));
}
