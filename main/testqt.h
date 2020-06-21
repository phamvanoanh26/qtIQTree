#ifndef TESTQT_H
#define TESTQT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class testQT; }
QT_END_NAMESPACE

class testQT : public QMainWindow
{
    Q_OBJECT

public:
    testQT(QWidget *parent = nullptr);
    ~testQT();

private:
    Ui::testQT *ui;


private slots:
    void onOpenFile();
    void runFile();
    int mainIQTree(int argc, char *argv[]);

};
#endif // TESTQT_H

