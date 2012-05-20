#ifndef QZPANEBASE_H
#define QZPANEBASE_H

#include "../Text/QzLabel.h"

class QzPaneBasePrivate;
class QZGRAPH_EXPORT QzPaneBase
{
  public:
    QzPaneBase();
    virtual ~QzPaneBase();

    QzLabel *title();

  protected:
    QzPaneBase(QzPaneBasePrivate *const d);
    QzPaneBasePrivate *const d_ptr;

  private:
    Q_DECLARE_PRIVATE(QzPaneBase);
};

#endif // QZPANEBASE_H
