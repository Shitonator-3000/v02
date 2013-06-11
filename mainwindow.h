#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString filenameKey;
    QString filenameVector;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void openInput();
    void openKey();
    void openOutput();
    void openVector();
    void encrypt();
    void decrypt();
    void display();
    void hide();
    void changedAlgorithm();
    void generateVector();
    void generateKey();
    void about();
    void aboutabout();
    void claerInput();
    void claerOutput();
    void update();
    unsigned int lengthblock();
    unsigned int lengthkey();
};


void MD5        (const QString, const QString);
void GOSTHASH   (const QString, const QString);
void SHA1       (const QString, const QString);
void RIPEMD     (const QString, const QString);

QString FileToQString(QString);
QString FileToQString16(QString);
QString gen(unsigned int);
void generate(unsigned int);
char * QStringToCharStr(QString);

#endif // MAINWINDOW_H
