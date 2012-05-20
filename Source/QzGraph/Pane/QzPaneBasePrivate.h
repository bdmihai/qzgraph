#ifndef QZPANEBASEPRIVATE_H
#define QZPANEBASEPRIVATE_H

#include "../Text/QzGapLabel.h"

class QzPaneBasePrivate
{
  public:
    QzPaneBasePrivate() 
    { 
      title = new QzGapLabel(); 
    }

    virtual ~QzPaneBasePrivate() 
    {
      delete title;
    }

    QzGapLabel *title;
};

#endif // QZPANEBASEPRIVATE_H
