#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextStream>
#include <QRegExp>
#include <QMessageBox>
#include <string>

using namespace std;

MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow( parent ),
    ui( new Ui::MainWindow )
{
    ui->setupUi( this );

    display();
    connect(ui->pushFile, SIGNAL( clicked() ), SLOT( openInput() ));
    connect(ui->pushMD5, SIGNAL( clicked() ), SLOT( clickedMD5() ));
    connect(ui->pushSHA1, SIGNAL( clicked() ), SLOT( clickedSha1() ));
    connect(ui->push160, SIGNAL( clicked() ), SLOT( clickedRipemd() ));
}


void MainWindow::display()
{
    ui->pushFile->setVisible( true );
    ui->lineEdit->setVisible( false );
    ui->label->setVisible( false );
    ui->pushMD5->setVisible( false );
    ui->pushSHA1->setVisible( false );
    ui->push160->setVisible( false );
    ui->textBrowser->setVisible( false );

}



void MainWindow::openInput()
{
    QString str = QFileDialog::getOpenFileName( this, QString::fromLocal8Bit( "Выберите файл с данными" ) );
    if ( !str.isEmpty() ) {
        ui->lineEdit->setText( str );

        ui->lineEdit->setText( QString::fromLocal8Bit( QStringToCharStr( str ), str.size() ) );
        ui->lineEdit->setVisible( true );
        ui->label->setVisible( true );
        ui->pushMD5->setVisible( true );
        ui->pushSHA1->setVisible( true );
        ui->push160->setVisible( true );
    }
}


void MainWindow::clickedMD5()
{
    ui->textBrowser->setVisible( true );
    QString str;
    str = MD5( ui->lineEdit->text());

    ui->textBrowser->setText( str );
}

void MainWindow::clickedSha1()
{
    ui->textBrowser->setVisible( true );
    QString str;
    str = Sha1( ui->lineEdit->text());

    ui->textBrowser->setText( str );

}

void MainWindow::clickedRipemd()
{
    ui->textBrowser->setVisible( true );
    QString str;
    str = Ripemd160( ui->lineEdit->text());

    ui->textBrowser->setText( str );

}

MainWindow::~MainWindow()
{
    delete ui;
}












