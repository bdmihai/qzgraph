#include "Stable.h"
#include "QzPaneBase.h"
#include "QzPaneBasePrivate.h"

QzPaneBase::QzPaneBase() : d_ptr(new QzPaneBasePrivate())
{
  
}

QzPaneBase::QzPaneBase(QzPaneBasePrivate *const d): d_ptr(d)
{

}

QzPaneBase::~QzPaneBase()
{
  delete d_ptr;
}

QzLabel *QzPaneBase::title()
{
  Q_D(QzPaneBase);
  return d->title;
}