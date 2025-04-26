#ifndef NOTE_H
#define NOTE_H
#include <QString>
#include <QVector>

struct Data {
    QVector<int> data;
};

class Note {
    public:
        QString name;
        QString lastname;
        Data data;
        QString phone;
        QString operater;
};

#endif // NOTE_H
