#include "Stable.h"
#include "QzLineItem.h"
#include "QzLineItemPrivate.h"

QzLineItem::QzLineItem() 
: QzCurveItem(new QzLineItemPrivate())
{

}

QzLineItem::QzLineItem(QString label, QzPointPairList *points, QColor color, QzSymbolType::QzSymbolType symbolType) 
: QzCurveItem(new QzLineItemPrivate())
{

}

QzLineItem::~QzLineItem()
{

}