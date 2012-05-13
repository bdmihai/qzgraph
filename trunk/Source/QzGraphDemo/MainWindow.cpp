#include "Stable.h"
#include "MainWindow.h"
#include "Defines.h"
#include "Settings.h"
#include "DemoList.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
  demoModel = new DemoModel(this);
  demoSelectionModel = new DemoSelectionModel(demoModel);
  connect(demoSelectionModel, SIGNAL(demoSelected(DemoBase *)),
          this, SLOT(onDemoSelected(DemoBase *)));

  createLayout();
  createActions();
  createMenus();
  createStatusBar();
}

MainWindow::~MainWindow()
{
  delete demoModel;
}

void MainWindow::showEvent(QShowEvent *event)
{
  readSettings();
  QMainWindow::showEvent(event);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
  writeSettings();
  QMainWindow::closeEvent(event);
}

void MainWindow::createLayout()
{
  vSplitter = new QSplitter(Qt::Horizontal, this);
  hSplitter = new QSplitter(Qt::Vertical, this);

  demosView = new QTreeView(this);
  demosView->setModel(demoModel);
  demosView->setSelectionModel(demoSelectionModel);
  demosView->setHeaderHidden(true);
  vSplitter->addWidget(demosView);

  demoBox = new QWidget(this);
  demoBox->setLayout(new QVBoxLayout());
  hSplitter->addWidget(demoBox);

  demoDescr = new QTextEdit(this);
  demoDescr->setReadOnly(true);
  hSplitter->addWidget(demoDescr);

  vSplitter->addWidget(hSplitter);

  setCentralWidget(vSplitter);
  setWindowTitle(APP_NAME);
  setWindowIcon(QIcon(":/Icon.png"));
}

void MainWindow::createActions()
{
  exitAct = new QAction(tr("E&xit"), this);
  exitAct->setShortcuts(QKeySequence::Quit);
  exitAct->setStatusTip(tr("Exit the application"));
  connect(exitAct, SIGNAL(triggered()), qApp, SLOT(closeAllWindows()));

  aboutAct = new QAction(tr("&About..."), this);
  aboutAct->setStatusTip(tr("About"));
  connect(aboutAct, SIGNAL(triggered()), this, SLOT(showAbout()));

  aboutQtAct = new QAction(tr("About &Qt..."), this);
  aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));
  connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

void MainWindow::createMenus()
{
  QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
  fileMenu->addAction(exitAct);

  QMenu *helpMenu = menuBar()->addMenu(tr("&Help"));
  helpMenu->addAction(aboutAct);
  helpMenu->addAction(aboutQtAct);
}

void MainWindow::createStatusBar()
{
  statusBar()->showMessage(tr("Ready"));
}

void MainWindow::readSettings()
{
  restoreGeometry(settings.getWindowGeometry());
  restoreState(settings.getWindowState());
  vSplitter->setSizes(settings.getVSplitSizes());
  hSplitter->setSizes(settings.getHSplitSizes());
}

void MainWindow::writeSettings()
{
  settings.setWindowGeometry(saveGeometry());
  settings.setWindowState(saveState());
  settings.setHSplitSizes(hSplitter->sizes());
}

void MainWindow::showAbout()
{
  QMessageBox::about(this, tr("About "),
    tr("<b>%1</b> version <b>%2</b>"
    "<p>Developed using the <a href=\"http://qt.nokia.com\">Qt framework</a>.</p>"
    "<p>E-mail : <a href=\"mailto:Mihai.Baneu@continental-corporation.com\">Mihai.Baneu@continental-corporation.com</a></p>")
    .arg(APP_NAME)
    .arg(APP_VERSION));
}

void MainWindow::onDemoSelected(DemoBase *demo)
{
  static QzGraph *lastShownGraph = 0;
  QzGraph *graphWidget = demo->getGraph();

  if (lastShownGraph)
  {
    demoBox->layout()->removeWidget(lastShownGraph);
    demoBox->layout()->addWidget(graphWidget);
    lastShownGraph->setVisible(false);
    graphWidget->setVisible(true);
  }
  else
  {
    demoBox->layout()->addWidget(graphWidget);
    graphWidget->setVisible(true);
  }
  lastShownGraph = graphWidget;

  demoDescr->setText(demo->getDescription());
}
