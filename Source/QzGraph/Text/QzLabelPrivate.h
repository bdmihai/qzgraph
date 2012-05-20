#ifndef QZLABELPRIVATE_H
#define QZLABELPRIVATE_H

class QzLabelPrivate
{
  public:
    QzLabelPrivate() 
    {
      text = "";
    }

    virtual ~QzLabelPrivate() {}

    QString text;
};

#endif // QZLABELPRIVATE_H
