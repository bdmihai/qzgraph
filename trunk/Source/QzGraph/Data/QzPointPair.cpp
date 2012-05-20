#include "Stable.h"
#include "QzPointPair.h"
#include "QzPointPairPrivate.h"

QzPointPair::QzPointPair() : QzPointPairBase(new QzPointPairPrivate())
{

}

QzPointPair::QzPointPair(double x, double y) : QzPointPairBase(x, y, new QzPointPairPrivate())
{

}

QzPointPair::~QzPointPair()
{

}
