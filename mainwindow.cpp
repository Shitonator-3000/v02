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

    changedAlgorithm();
    hide();
    aboutabout();

    connect(ui->pushButtonOpenInput,    SIGNAL( clicked() ),                        SLOT( openInput() ));

    connect(ui->pushButtonOpenOutput,   SIGNAL( clicked() ),                        SLOT( openOutput() ));

    connect(ui->pushButtonEncrypt,      SIGNAL( clicked() ),                        SLOT( encrypt() ));



    connect(ui->pushButtonDisplay,      SIGNAL( clicked() ),                        SLOT( display() ));
    //connect(ui->pushButtonHide,         SIGNAL( clicked() ),                        SLOT( hide() ));
    //connect(ui->pushButtonAbout,        SIGNAL( clicked() ),                        SLOT( aboutabout() ));
    connect(ui->pushButtonFileInput,    SIGNAL( clicked() ),                        SLOT( claerInput() ));
    connect(ui->pushButtonFileOutput,   SIGNAL( clicked() ),                        SLOT( claerOutput() ));
    connect(ui->comboBoxAlgorithm,      SIGNAL( currentIndexChanged( QString )),    SLOT( changedAlgorithm() ));


}



void MainWindow::openInput()
{
    QString str = QFileDialog::getOpenFileName( this, QString::fromLocal8Bit( "Открыть файл с данныими" ) );
    if ( !str.isEmpty() ) {
        ui->lineEditInputFile->setText( str );
        str = FileToQString( str );
        ui->textEditInput->setText( QString::fromLocal8Bit( QStringToCharStr( str ), str.size() ) );
    }
}



void MainWindow::openOutput()
{
    QString str = QFileDialog::getOpenFileName( this, QString::fromLocal8Bit( "Открыть файл для результата" ) );
    if ( !str.isEmpty() ) {
        ui->lineEditOutputFile->setText( str );
    }
}

void MainWindow::display()
{




    // display
    ui->pushButtonDisplay->     setVisible( false );
    //ui->pushButtonHide->        setVisible( true );

    // about
    //ui->pushButtonAbout->       setVisible( false );
    //ui->textEditAbout->         setVisible( false );
    // input
    //ui->pushButtonInput->       setVisible( true );
    ui->textEditInput->         setVisible( true );
    // output
    //ui->pushButtonOutput->      setVisible( true );
    ui->textEditOutput->        setVisible( true );

    QString algorithm = ui->comboBoxAlgorithm->currentText();
    QString mode;
    about();





    }








void MainWindow::hide()
{
    ui->pushButtonDisplay-> setVisible( true );
    //ui->pushButtonHide->    setVisible( false );
    //ui->pushButtonAbout->   setVisible( true );
    //ui->textEditAbout->     setVisible( true );
    //ui->pushButtonInput->   setVisible( false );
    ui->textEditInput->     setVisible( false );
    //ui->pushButtonOutput->  setVisible( false );
    ui->textEditOutput->    setVisible( false );
}

void MainWindow::changedAlgorithm()
{
    bool flag = ui->pushButtonDisplay->isVisible();
    display();
    if ( flag ) {
        hide();
    }
}

void MainWindow::encrypt()
{
    QString algorithm = ui->comboBoxAlgorithm->currentText();
    QString mode;
    QString filenameInput = ui->lineEditInputFile->text();
    QString filenameOutput = ui->lineEditOutputFile->text();
    QString str;
    if ( filenameInput.isEmpty() ) {
        QMessageBox::information(this, QString::fromLocal8Bit("Ошибка"), QString::fromLocal8Bit("Не задан файл с данными"));
        return;
    }
    if ( filenameOutput.isEmpty() ) {
        QMessageBox::information(this, QString::fromLocal8Bit("Ошибка"), QString::fromLocal8Bit("Не задан файл для результата"));
        return;
    }




    if ( algorithm == "MD5" )         MD5           ( filenameInput, filenameOutput );


    if ( algorithm == "SHA1" )        SHA1        ( filenameInput, filenameOutput );




    if ( algorithm == "RIPEMD" )      RIPEMD      ( filenameInput, filenameOutput );



    if (algorithm == "SHA1")
             ui->textEditOutput->setText( FileToQString(filenameOutput) );
         else
             ui->textEditOutput->setText( FileToQString16( filenameOutput ));



}







void MainWindow::about()
{
    QString algorithm = ui->comboBoxAlgorithm->currentText();
    QFile file( "about/" + algorithm + ".txt" );
    file.open( QIODevice::ReadOnly );
    QString str = file.readAll().constData();
    file.close();
    //ui->textEditAbout->setText( QString::fromLocal8Bit( QStringToCharStr( str ), str.size() ));
}

void MainWindow::aboutabout()
{
    QFile file( "about/about.txt" );
    file.open( QIODevice::ReadOnly );
    QString str = file.readAll().constData();
    file.close();
    //ui->textEditAbout->setText( QString::fromLocal8Bit( QStringToCharStr( str ), str.size() ));
}

void MainWindow::claerInput()
{
    ui->lineEditInputFile-> setText( "" );
    ui->textEditInput->     setText( "" );
}

void MainWindow::claerOutput()
{
    ui->lineEditOutputFile->    setText( "" );
    ui->textEditOutput->        setText( "" );
}





void MainWindow::update()
{
}

MainWindow::~MainWindow()
{
    delete ui;
}
