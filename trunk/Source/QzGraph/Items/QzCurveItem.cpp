#include "Stable.h"
#include "QzCurveItem.h"
#include "QzCurveItemPrivate.h"

QzCurveItem::QzCurveItem() : d_ptr(new QzCurveItemPrivate())
{

}

QzCurveItem::QzCurveItem(QzCurveItemPrivate *const d): d_ptr(d)
{

}

QzCurveItem::~QzCurveItem()
{
  delete d_ptr;
}