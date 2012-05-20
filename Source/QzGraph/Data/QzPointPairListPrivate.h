#ifndef QZPOINTPAIRLISTPRIVATE_H
#define QZPOINTPAIRLISTPRIVATE_H

class QzPointPairListPrivate
{
  public:
    QzPointPairListPrivate()
    {
      sorted = false;
    }

    virtual ~QzPointPairListPrivate()
    {

    }

  bool sorted;
};

#endif // QZPOINTPAIRLISTPRIVATE_H

