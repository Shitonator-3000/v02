/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 11. Jun 11:35:42 2013
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
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *pushButtonFileInput;
    QLabel *pushButtonFileOutput;
    QPushButton *pushButtonDisplay;
    QComboBox *comboBoxAlgorithm;
    QTextEdit *textEditInput;
    QTextEdit *textEditOutput;
    QLineEdit *lineEditInputFile;
    QPushButton *pushButtonOpenInput;
    QLineEdit *lineEditOutputFile;
    QPushButton *pushButtonOpenOutput;
    QPushButton *pushButtonEncrypt;
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
        pushButtonFileInput = new QLabel(centralWidget);
        pushButtonFileInput->setObjectName(QString::fromUtf8("pushButtonFileInput"));
        pushButtonFileInput->setGeometry(QRect(70, 10, 61, 16));
        QFont font1;
        font1.setPointSize(10);
        pushButtonFileInput->setFont(font1);
        pushButtonFileOutput = new QLabel(centralWidget);
        pushButtonFileOutput->setObjectName(QString::fromUtf8("pushButtonFileOutput"));
        pushButtonFileOutput->setGeometry(QRect(430, 10, 51, 16));
        pushButtonFileOutput->setFont(font1);
        pushButtonDisplay = new QPushButton(centralWidget);
        pushButtonDisplay->setObjectName(QString::fromUtf8("pushButtonDisplay"));
        pushButtonDisplay->setGeometry(QRect(240, 40, 71, 31));
        comboBoxAlgorithm = new QComboBox(centralWidget);
        comboBoxAlgorithm->setObjectName(QString::fromUtf8("comboBoxAlgorithm"));
        comboBoxAlgorithm->setGeometry(QRect(230, 10, 85, 20));
        comboBoxAlgorithm->setFont(font);
        textEditInput = new QTextEdit(centralWidget);
        textEditInput->setObjectName(QString::fromUtf8("textEditInput"));
        textEditInput->setGeometry(QRect(10, 90, 231, 101));
        textEditInput->setReadOnly(true);
        textEditOutput = new QTextEdit(centralWidget);
        textEditOutput->setObjectName(QString::fromUtf8("textEditOutput"));
        textEditOutput->setGeometry(QRect(310, 90, 231, 101));
        textEditOutput->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(8);
        textEditOutput->setFont(font2);
        textEditOutput->setReadOnly(true);
        lineEditInputFile = new QLineEdit(centralWidget);
        lineEditInputFile->setObjectName(QString::fromUtf8("lineEditInputFile"));
        lineEditInputFile->setEnabled(false);
        lineEditInputFile->setGeometry(QRect(40, 30, 131, 21));
        pushButtonOpenInput = new QPushButton(centralWidget);
        pushButtonOpenInput->setObjectName(QString::fromUtf8("pushButtonOpenInput"));
        pushButtonOpenInput->setGeometry(QRect(10, 30, 23, 23));
        pushButtonOpenInput->setMaximumSize(QSize(23, 16777215));
        lineEditOutputFile = new QLineEdit(centralWidget);
        lineEditOutputFile->setObjectName(QString::fromUtf8("lineEditOutputFile"));
        lineEditOutputFile->setEnabled(false);
        lineEditOutputFile->setGeometry(QRect(380, 30, 151, 21));
        pushButtonOpenOutput = new QPushButton(centralWidget);
        pushButtonOpenOutput->setObjectName(QString::fromUtf8("pushButtonOpenOutput"));
        pushButtonOpenOutput->setGeometry(QRect(350, 30, 23, 23));
        pushButtonOpenOutput->setMaximumSize(QSize(23, 16777215));
        pushButtonEncrypt = new QPushButton(centralWidget);
        pushButtonEncrypt->setObjectName(QString::fromUtf8("pushButtonEncrypt"));
        pushButtonEncrypt->setGeometry(QRect(230, 200, 91, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonEncrypt->sizePolicy().hasHeightForWidth());
        pushButtonEncrypt->setSizePolicy(sizePolicy1);
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
        pushButtonFileInput->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265:", 0, QApplication::UnicodeUTF8));
        pushButtonFileOutput->setText(QApplication::translate("MainWindow", "\320\245\321\215\321\210:", 0, QApplication::UnicodeUTF8));
        pushButtonDisplay->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0, QApplication::UnicodeUTF8));
        comboBoxAlgorithm->clear();
        comboBoxAlgorithm->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "MD5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "SHA1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "RIPEMD-160", 0, QApplication::UnicodeUTF8)
        );
        pushButtonOpenInput->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        pushButtonOpenOutput->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        pushButtonEncrypt->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\265\321\205\320\260\320\273\320\270!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
