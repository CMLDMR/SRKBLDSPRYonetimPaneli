#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtGui/QGuiApplication>
#include <QtQml/QQmlApplicationEngine>
#else
#endif

int main(int argc, char *argv[])
{
QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

QGuiApplication app(argc, argv);

QQmlApplicationEngine engine;
engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
if (engine.rootObjects().isEmpty())
return -1;

return app.exec();
}
