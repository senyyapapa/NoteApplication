#include "readfile.h"
#include <QString>
#include <QFile>
#include <QVector>
#include <note.h>
#include <QTextStream>
#include <QDebug>
#include <QStringList>

QVector<Note> readFile::readNotes(const QString &filename) {
    QFile file(filename);
    QVector<Note> notes;

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Не удалось открыть файл" << filename;
        return notes;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList parts = line.split(',');
        if (parts.size() != 5) continue;

        Note note;
        note.lastname = parts[0].trimmed();
        note.name = parts[1].trimmed();
        note.data.data.resize(3);
        QStringList dateParts = parts[2].split('.');
        if (dateParts.size() == 3){
            note.data.data[0] = dateParts[0].toInt();
            note.data.data[1] = dateParts[1].toInt();
            note.data.data[2] = dateParts[2].toInt();
        }
        note.phone = parts[3].trimmed();
        note.operater = parts[4].trimmed();

        notes.append(note);
    }
    file.close();
    return notes;
}
