#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Demos/DemoModel.h"
#include "Demos/DemoSelectionModel.h"

class MainWindow : public QMainWindow
{
  Q_OBJECT

  public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

  protected:
    virtual void showEvent(QShowEvent *event);
    virtual void closeEvent(QCloseEvent *event);

  private:
    void createLayout();
    void createActions();
    void createMenus();
    void createStatusBar();
    void readSettings();
    void writeSettings();

  private slots:
    void showAbout();
    void onDemoSelected(DemoBase *demo);

  private:
    QAction *exitAct;
    QAction *aboutAct;
    QAction *aboutQtAct;

    QSplitter *vSplitter;
    QSplitter *hSplitter;
    QTreeView *demosView;
    QTextEdit *demoDescr;
    QWidget   *demoBox;
    
    DemoModel *demoModel;
    DemoSelectionModel *demoSelectionModel;
};

#endif // MAINWINDOW_H
