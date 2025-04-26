#ifndef READFILE_H
#define READFILE_H
#include <QString>
#include <QVector>
#include <note.h>

class readFile
{
    public:
        static QVector<Note> readNotes(const QString &filename);
};

#endif // READFILE_H
