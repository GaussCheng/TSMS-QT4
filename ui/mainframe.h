#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainFrame; }
QT_END_NAMESPACE

class MainFrame : public QWidget
{
    Q_OBJECT

public:
    MainFrame(QWidget *parent = NULL);
    ~MainFrame();

private:
    Ui::MainFrame *ui;
};
#endif // MAINFRAME_H
