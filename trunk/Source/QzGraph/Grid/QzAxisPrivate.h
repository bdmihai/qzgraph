#ifndef QZAXISPRIVATE_H
#define QZAXISPRIVATE_H

#include "QzAxisLabel.h"

class QzAxisPrivate
{
  public:
    QzAxisPrivate()
    {
      title = new QzAxisLabel();
    }
    virtual ~QzAxisPrivate()
    {
      delete title;
    }
    
    QzAxisLabel *title;
};

#endif // QZAXIS_H
