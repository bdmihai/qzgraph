#ifndef QZMASTERPANE_H
#define QZMASTERPANE_H

#include "QzPaneBase.h"
#include "QzGraphPane.h"

class QzMasterPanePrivate;
class QZGRAPH_EXPORT QzMasterPane : public QzPaneBase, public QList<QzGraphPane*>
{
  public:
    QzMasterPane();
    virtual ~QzMasterPane();

  private:
    Q_DECLARE_PRIVATE(QzMasterPane);
};

#endif // QZMASTERPANE_H
