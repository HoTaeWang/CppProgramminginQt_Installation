#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *pMyLabel = new QLabel("Hello Qt");
    pMyLabel->show();

    return app.exec();
}
