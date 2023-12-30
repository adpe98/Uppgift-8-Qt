#include <QApplication>
#include "window.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);  // Initierar QApplication

    Window window;  // Skapar ett fönster
    window.show();  // Visar huvudfönstret

    return app.exec();  // Startar loopen
}
