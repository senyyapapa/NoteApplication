#ifndef UPDATETABLE_H
#define UPDATETABLE_H
#include <note.h>
#include <QTableWidget>
#include <QVector>

class updateTable
{
public:
    updateTable(QTableWidget* table, const QVector<Note>& notes);
};

#endif // UPDATETABLE_H
