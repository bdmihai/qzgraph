#include "Stable.h"
#include "QzCurveList.h"
#include "QzCurveListPrivate.h"

QzCurveList::QzCurveList() : d_ptr(new QzCurveListPrivate())
{

}

QzCurveList::~QzCurveList()
{
  delete d_ptr;
  qDeleteAll(*this);
}