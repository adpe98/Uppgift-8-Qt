#include <QApplication>
#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent), clickCounter(0) {
    setFixedSize(300, 150);  // Ställer in storleken på huvudfönstret

    // Skapar och konfigurerar toggle-knappen
    toggleButton = new QPushButton("Click Me", this);
    toggleButton->setGeometry(50, 50, 100, 30);
    toggleButton->setCheckable(true);

    // Skapar och konfigurerar quit-knappen
    quitButton = new QPushButton("Quit", this);
    quitButton->setGeometry(160, 50, 100, 30);

    // Ansluter signaler till slots
    connect(toggleButton, SIGNAL(clicked(bool)), this, SLOT(slotButtonClicked(bool)));
    connect(quitButton, SIGNAL(clicked()), this, SLOT(updateCounter()));
}

void Window::slotButtonClicked(bool checked) {
    // Ändrar texten på toggle-knappen beroende på dess status
    if (checked) {
        toggleButton->setText("Checked");
    } else {
        toggleButton->setText("Click Me");
    }
}

void Window::updateCounter() {
    // Ökar klickräknaren och stänger applikationen efter 10 klick
    clickCounter++;
    if (clickCounter == 10) {
        QApplication::quit();
    }
}
