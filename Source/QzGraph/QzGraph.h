#ifndef QZGRAPH_H
#define QZGRAPH_H

#include "Pane/QzGraphPane.h"
#include "Pane/QzMasterPane.h"

class QzGraphPrivate;
class QZGRAPH_EXPORT QzGraph : public QGraphicsView
{
  Q_OBJECT

  public:
    QzGraph(QWidget *parent = 0);
    virtual ~QzGraph();

    QzGraphPane *graphPane();

    virtual void axisChange();

  signals:
    void testsig();

  protected:
    QzGraphPrivate *const d_ptr;

  private:
    Q_DISABLE_COPY(QzGraph)
    Q_DECLARE_PRIVATE(QzGraph);
};

#endif // QZGRAPH_H
