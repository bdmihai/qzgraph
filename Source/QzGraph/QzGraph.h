#ifndef QZGRAPH_H
#define QZGRAPH_H

#include "QzGraphGlobal.h"

class QZGRAPH_EXPORT QzGraph : public QLabel
{
  Q_OBJECT

  public:
    QzGraph();
    virtual ~QzGraph();

  signals:
    void testsig();

  private:

};

#endif // QZGRAPH_H
