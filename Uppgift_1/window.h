#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>

class Window : public QWidget {
    Q_OBJECT  // Nödvändig för att använda signaler och slots
public:
    explicit Window(QWidget *parent = 0);  // Konstruktor
private slots:
    void slotButtonClicked(bool checked);  // Hanterar klick på toggle-knappen
    void updateCounter();  // Uppdaterar klickräknaren
private:
    int clickCounter;  // Räknar antalet klick på quit-knappen
    QPushButton *toggleButton;  // Toggle-knapp
    QPushButton *quitButton;  // Quit-knapp
};

#endif // WINDOW_H
