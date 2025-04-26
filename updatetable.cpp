#include "updatetable.h"
#include <QTableWidget>
#include <note.h>
#include <QDate>
#include <QStringList>
#include <QHeaderView>

int calculateage(const Data& birthDate);

updateTable::updateTable(QTableWidget* table, const QVector<Note>& notes) {
    table->clearContents();
    table->setRowCount(notes.size());
    table->setColumnCount(5);


    QStringList headers = {"Фамили", "Имя", "Дата рождения", "Номер телефона", "Оператор"};
    table->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < notes.size(); ++i){
        const Note& note = notes[i];

        table->setItem(i, 0, new QTableWidgetItem(note.lastname));
        table->setItem(i, 1, new QTableWidgetItem(note.name));

        QString date = QString("%1.%2.%3")
                           .arg(note.data.data[0], 2, 10, QChar('0'))
                           .arg(note.data.data[1], 2, 10, QChar('0'))
                           .arg(note.data.data[2]);
        QTableWidgetItem* dateItem = new QTableWidgetItem(date);
        int age = calculateage(note.data);
        QString ageText = QString("Возраст: %1 ").arg(age);

        if (age%100 >= 11 && age % 100 <= 19){
            ageText += "лет";
        } else {
            switch (age%10){
            case 1: ageText += "год"; break;
            case 2: case 3: case 4: ageText += "года"; break;
            default: ageText += "лет";
            }
        }

        dateItem->setToolTip(ageText);

        table->setItem(i, 2, dateItem);
        table->setItem(i, 3, new QTableWidgetItem(note.phone));
        table->setItem(i, 4, new QTableWidgetItem(note.operater));


    }

    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

int calculateage(const Data& birthDate){
    QDate today = QDate::currentDate();
    QDate bdate(birthDate.data[2], birthDate.data[1], birthDate.data[0]);
    return bdate.daysTo(today) / 365;
}
