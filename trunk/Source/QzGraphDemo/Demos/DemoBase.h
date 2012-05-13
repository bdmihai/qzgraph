#ifndef DEMOBASE_H
#define DEMOBASE_H

class DemoBase : public QStandardItem
{
  public:
    DemoBase(const QString &path, const QString &description);
    virtual ~DemoBase();

    QString getPath() { return path; }
    QString getDescription() { return description; }
    QzGraph *getGraph() { return graph; }

  protected:
    QString path;
    QString description;
    QzGraph *graph;
};

#endif // DEMOBASE_H
