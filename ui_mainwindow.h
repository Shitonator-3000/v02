/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 13. Jun 11:03:52 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushFile;
    QPushButton *pushMD5;
    QPushButton *pushSHA1;
    QPushButton *push160;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLineEdit *lineEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(551, 295);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(362, 295));
        MainWindow->setMaximumSize(QSize(16777215, 32432));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushFile = new QPushButton(centralWidget);
        pushFile->setObjectName(QString::fromUtf8("pushFile"));
        pushFile->setGeometry(QRect(10, 20, 141, 31));
        pushMD5 = new QPushButton(centralWidget);
        pushMD5->setObjectName(QString::fromUtf8("pushMD5"));
        pushMD5->setGeometry(QRect(140, 140, 81, 23));
        pushSHA1 = new QPushButton(centralWidget);
        pushSHA1->setObjectName(QString::fromUtf8("pushSHA1"));
        pushSHA1->setGeometry(QRect(140, 170, 81, 23));
        push160 = new QPushButton(centralWidget);
        push160->setObjectName(QString::fromUtf8("push160"));
        push160->setGeometry(QRect(140, 200, 81, 23));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(260, 100, 271, 131));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 110, 171, 31));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 20, 311, 31));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 551, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Crypto", 0, QApplication::UnicodeUTF8));
        pushFile->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\204\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        pushMD5->setText(QApplication::translate("MainWindow", "MD5", 0, QApplication::UnicodeUTF8));
        pushSHA1->setText(QApplication::translate("MainWindow", "SHA1", 0, QApplication::UnicodeUTF8));
        push160->setText(QApplication::translate("MainWindow", "RIPEMD-160", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\274\320\265\321\202\320\276\320\264:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
