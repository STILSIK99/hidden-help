#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

struct Task {
    QString ask;
    QString ans;
    Task (QString a, QString b): ask (a), ans (b) {}
    Task () {};
};

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
        Q_OBJECT
    public:
        MainWindow (QWidget *parent = nullptr);
        ~MainWindow();
        QVector<Task>mas;

        void append_data();
        bool eventFilter (QObject *obj, QEvent *event);
        int cur = 0;
        int opacity;
        void search();
        void search_up();
        void search_down();

    private:
        Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H


