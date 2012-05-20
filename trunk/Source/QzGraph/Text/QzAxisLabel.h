#ifndef QZAXISLABEL_H
#define QZAXISLABEL_H

#include "QzGapLabel.h"

class QzAxisLabelPrivate;
class QZGRAPH_EXPORT QzAxisLabel : public QzGapLabel
{
  public:
    QzAxisLabel();
    virtual ~QzAxisLabel();

  private:
    Q_DECLARE_PRIVATE(QzAxisLabel);
    
};

#endif // QZAXISLABEL_H
