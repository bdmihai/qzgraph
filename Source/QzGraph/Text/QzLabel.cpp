#include "Stable.h"
#include "QzLabel.h"
#include "QzLabelPrivate.h"

QzLabel::QzLabel() : d_ptr(new QzLabelPrivate())
{

}

QzLabel::QzLabel(QzLabelPrivate *const d): d_ptr(d)
{

}

QzLabel::~QzLabel()
{
  delete d_ptr;
}

QString QzLabel::text()
{
  Q_D(QzLabel);
  return d->text;
}

void QzLabel::setText(const QString &value)
{
  Q_D(QzLabel);
  d->text = value;
}