#include "Stable.h"
#include "QzPointPairBase.h"
#include "QzPointPairBasePrivate.h"

QzPointPairBase::QzPointPairBase() : d_ptr(new QzPointPairBasePrivate())
{

}

QzPointPairBase::QzPointPairBase(QzPointPairBasePrivate *const d) : d_ptr(d)
{

}

QzPointPairBase::QzPointPairBase(double x, double y, QzPointPairBasePrivate *const nd) : d_ptr(nd)
{
  Q_D(QzPointPairBase);
  d->x = x;
  d->y = y;
}

QzPointPairBase::~QzPointPairBase()
{
  delete d_ptr;
}
