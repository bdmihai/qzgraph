#include "Stable.h"
#include "QzGapLabel.h"
#include "QzGapLabelPrivate.h"

QzGapLabel::QzGapLabel() : QzLabel(new QzGapLabelPrivate())
{

}

QzGapLabel::QzGapLabel(QzGapLabelPrivate *const d): QzLabel(d)
{

}

QzGapLabel::~QzGapLabel()
{

}
