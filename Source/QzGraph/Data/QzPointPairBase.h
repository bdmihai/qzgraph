#ifndef QZPOINTPAIRBASE_H
#define QZPOINTPAIRBASE_H

class QzPointPairBasePrivate;
class QZGRAPH_EXPORT QzPointPairBase
{
  public:
    QzPointPairBase();
    virtual ~QzPointPairBase();

  protected:
    QzPointPairBase(QzPointPairBasePrivate *const d);
    QzPointPairBase(double x, double y, QzPointPairBasePrivate *const nd);
    QzPointPairBasePrivate *const d_ptr;

  private:
    Q_DECLARE_PRIVATE(QzPointPairBase);

};

#endif // QZPOINTPAIRBASE_H