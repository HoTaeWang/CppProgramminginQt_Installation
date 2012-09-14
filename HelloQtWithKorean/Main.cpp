#include <QApplication>
#include <QLabel>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QLabel win(QObject::tr("처음으로 맞이하는 Qt 한글"));
    win.show();

    return app.exec();
}
