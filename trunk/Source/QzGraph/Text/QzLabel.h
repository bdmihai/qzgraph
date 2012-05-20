#ifndef QZLABEL_H
#define QZLABEL_H

class QzLabelPrivate;
class QZGRAPH_EXPORT QzLabel
{
  public:
    QzLabel();
    virtual ~QzLabel();

    QString text();
    void setText(const QString &value);

  protected:
    QzLabel(QzLabelPrivate *const d);
    QzLabelPrivate *const d_ptr;

  private:
    Q_DECLARE_PRIVATE(QzLabel);
};

#endif // QZLABEL_H
