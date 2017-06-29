#ifndef MYTEXTOK_H
#define MYTEXTOK_H

#include <QGraphicsSimpleTextItem>
#include <QFont>
#include <QBrush>
#include <QObject>
#include <QPropertyAnimation>

class MyTextOk : public QObject, public QGraphicsSimpleTextItem
{
    Q_PROPERTY(QPointF localisation READ localisation WRITE setLocalisation)
    Q_PROPERTY(QFont sizePolicy READ sizePolicy WRITE setSizePolicy)
public:
    explicit MyTextOk(QGraphicsObject *parent = 0);
    ~MyTextOk();

    QPointF localisation() const;
    void setLocalisation(const QPointF &value);

    QFont sizePolicy() const;
    void setSizePolicy(const QFont &value);

private:
    QRectF boundingRect() const;

protected :
    QPointF point;
    QFont font;
};

#endif // MYTEXTOK_H
