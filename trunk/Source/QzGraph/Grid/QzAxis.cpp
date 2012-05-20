#include "Stable.h"
#include "QzAxis.h"
#include "QzAxisPrivate.h"

QzAxis::QzAxis() : d_ptr(new QzAxisPrivate())
{

}

QzAxis::QzAxis(QzAxisPrivate *const d): d_ptr(d)
{

}

QzAxis::~QzAxis()
{
  delete d_ptr;
}

QzAxisLabel *QzAxis::title()
{
  Q_D(QzAxis);
  return d->title;
}
