#ifndef QZGAPLABEL_H
#define QZGAPLABEL_H

#include "QzLabel.h"

class QzGapLabelPrivate;
class QZGRAPH_EXPORT QzGapLabel : public QzLabel
{
  public:
    QzGapLabel();
    virtual ~QzGapLabel();

  protected:
    QzGapLabel(QzGapLabelPrivate *const d);

  private:
    Q_DECLARE_PRIVATE(QzGapLabel);
};

#endif // QZGAPLABEL_H
