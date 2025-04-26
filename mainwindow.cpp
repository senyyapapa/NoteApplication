#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <note.h>
#include <updatetable.h>
#include <readfile.h>
#include <QVector>
#include <QObject>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    notes = readFile::readNotes("/Users/senyapapa/Projects/Note/data.txt");
    updateTable(ui->tableWidget, notes);
    ui->comboBox->addItems(months.values());


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sotrNameBtn_clicked()
{
    std::sort(notes.begin(), notes.end(), [](const Note& a, const Note& b) {
        return a.lastname.toLower() < b.lastname.toLower();
    });
    updateTable(ui->tableWidget, notes);
}


void MainWindow::on_findOperator_clicked()
{
    QVector<Note> filteredNotes;
    QString searchText = ui->lineEdit->text().toLower();

    std::copy_if(notes.begin(), notes.end(), std::back_inserter(filteredNotes),
                 [&searchText](const Note& note) {
                     return note.operater.toLower() == searchText;
                 });

    updateTable(ui->tableWidget, filteredNotes);
}



void MainWindow::on_findForMonths_clicked()
{
    QVector<Note> filteredNotes;
    QString currentMonth = ui->comboBox->currentText();
    int monthKey = months.key(currentMonth, -1);

    if (monthKey == -1) {
        qDebug() << "Месяц не найден";
        return;
    }
    std::copy_if(notes.begin(), notes.end(), std::back_inserter(filteredNotes), [&monthKey](const Note& note){
        return  note.data.data[1] == monthKey ;
    });

    updateTable(ui->tableWidget, filteredNotes);
}


void MainWindow::on_sortPhone_clicked()
{
    std::sort(notes.begin(), notes.end(), [](const Note& a, const Note& b){
        qDebug() << a.phone.mid(2, 3);
        return a.phone.mid(2, 3) < b.phone.mid(2, 3);
    });

    updateTable(ui->tableWidget, notes);
}

