#ifndef QZCURVEITEM_H
#define QZCURVEITEM_H

class QzCurveItemPrivate;
class QZGRAPH_EXPORT QzCurveItem
{
  public:
    QzCurveItem();
    virtual ~QzCurveItem();

  protected:
    QzCurveItem(QzCurveItemPrivate *const d);
    QzCurveItemPrivate *const d_ptr;

  private:
    Q_DECLARE_PRIVATE(QzCurveItem);
};

#endif // QZCURVEITEM_H
