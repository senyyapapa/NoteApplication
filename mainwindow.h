#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <note.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QApplication app(int argc, char argv);

private slots:
    void on_sotrNameBtn_clicked();

    void on_findOperator_clicked();

    void on_findForMonths_clicked();

    void on_sortPhone_clicked();

private:

    Ui::MainWindow *ui;
    QVector<Note> notes;
    QMap<int, QString> months = {{1, "Январь"},
                                 {2, "Февраль"},
                                 {3, "Март"},
                                 {4, "Апрель"},
                                 {5, "Май"},
                                 {6, "Июнь"},
                                 {7, "Июль"},
                                 {8, "Август"},
                                 {9, "Сентябрь"},
                                 {10, "Октябрь"},
                                 {11, "Ноябрь"},
                                 {12, "Декабрь"}};
};
#endif // MAINWINDOW_H
