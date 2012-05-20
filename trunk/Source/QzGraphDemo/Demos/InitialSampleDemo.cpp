#include "Stable.h"
#include "InitialSampleDemo.h"

InitialSampleDemo::InitialSampleDemo() : DemoBase("Tutorial/Initial Sample", "Code Project Initial Sample")
{
  QzGraphPane *myPane = graph->graphPane();

  // Set the title and axis labels
  myPane->title()->setText("My Test Graph\n(For CodeProject Sample)");
  myPane->xAxis()->title()->setText("My X Axis");
  myPane->yAxis()->title()->setText("My Y Axis");

  // Make up some data arrays based on the Sine function
  QzPointPairList *list1 = new QzPointPairList();
  QzPointPairList *list2 = new QzPointPairList();
  for ( int i=0; i<36; i++ )
  {
    double x = (double) i + 5;
    double y1 = 1.5 + qSin( (double) i * 0.2 );
    double y2 = 3.0 * ( 1.5 + qSin( (double) i * 0.2 ) );
    list1->append( x, y1 );
    list2->append( x, y2 );
  }

  // Generate a red curve with diamond
  // symbols, and "Porsche" in the legend
  QzLineItem *myCurve = myPane->addCurve( "Porsche",
    list1, QColor("Red"), QzSymbolType::Diamond );

  // Generate a blue curve with circle
  // symbols, and "Piper" in the legend
  QzLineItem *myCurve2 = myPane->addCurve( "Piper",
    list2, QColor("Blue"), QzSymbolType::Circle );

  graph->axisChange();
}

InitialSampleDemo::~InitialSampleDemo()
{
}
