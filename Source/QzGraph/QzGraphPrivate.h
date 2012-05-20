#ifndef QZGRAPHPRIVATE_H
#define QZGRAPHPRIVATE_H

#include "Pane/QzMasterPane.h"

class QzGraphPrivate
{
  public:
    QzGraphPrivate()
    {
      masterPane = new QzMasterPane();
    }

    virtual ~QzGraphPrivate()
    {
      delete masterPane;
    }

    QzMasterPane *masterPane;
};

#endif // QZGRAPHPRIVATE_H
