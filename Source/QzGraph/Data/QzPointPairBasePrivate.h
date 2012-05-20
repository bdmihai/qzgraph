#ifndef QZPOINTPAIRBASEPRIVATE_H
#define QZPOINTPAIRBASEPRIVATE_H

class QzPointPairBasePrivate
{
  public:
    QzPointPairBasePrivate()
    {
      x = 0;
      y = 0;
    }

    virtual ~QzPointPairBasePrivate()
    {

    }

    double x;
    double y;
};

#endif // QZPOINTPAIRBASEPRIVATE_H

