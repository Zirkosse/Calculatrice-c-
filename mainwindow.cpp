#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calculBouton_clicked()
{
    float nbr2, calculNbr;
    nbr2=ui->resultatLine->text().toFloat();
    if(action==diviser)
        if(nbr2!=0)
        {
            calculNbr=nbr1/nbr2;

        }else
        {
            calculNbr=0;
            ui->resultatLine->setText("Erreur Division");
        }else if (action==additionner)
        {
            calculNbr=nbr1+nbr2;

        }else if(action==soustraire)
        {
            calculNbr=nbr1-nbr2;
        }else if(action == multiplier)
        {
            calculNbr=nbr1*nbr2;
        }
    ui->resultatLine->setText(QString::number(calculNbr));
    ansNombre=QString::number(calculNbr);
    nbr1=0;

}

void MainWindow::on_diviserBouton_clicked()
{
    if(ui->resultatLine->text()!="0")
    {
        nbr1=ui->resultatLine->text().toFloat();
        action=diviser;
        ui->resultatLine->setText("0");
    }
}
void MainWindow::on_additionnerBouton_clicked()
{
    if(ui->resultatLine->text()!="0")
    {
        nbr1=ui->resultatLine->text().toFloat();
        action=additionner;
        ui->resultatLine->setText("0");
    }
}
void MainWindow::on_soustraireBouton_clicked()
{
    if(ui->resultatLine->text()!="0")
    {
        nbr1=ui->resultatLine->text().toFloat();
        action=soustraire;
        ui->resultatLine->setText("0");
    }
}
void MainWindow::on_multiplierBouton_clicked()
{
    if(ui->resultatLine->text()!="0")
    {
        nbr1=ui->resultatLine->text().toFloat();
        action=multiplier;
        ui->resultatLine->setText("0");
    }
}
void MainWindow::on_number0_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("0");
    } else if(ui->resultatLine->text() == "0" and not nbr1) {
        ui->resultatLine->setText("0");
    } else if(ui->resultatLine->text() != "0") {
        ui->resultatLine->setText(ui->resultatLine->text() + "0");
    }
}
void MainWindow::on_number1_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("1");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("1");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"1");
    }
}

void MainWindow::on_number2_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("2");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("2");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"2");
    }
}
void MainWindow::on_number3_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("3");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("3");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"3");
    }
}
void MainWindow::on_number4_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("4");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("4");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"4");
    }
}
void MainWindow::on_number5_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("5");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("5");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"5");
    }
}
void MainWindow::on_number6_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("6");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("6");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"6");
    }
}
void MainWindow::on_number7_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("7");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("7");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"7");
    }
}
void MainWindow::on_number8_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("8");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("8");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"8");
    }
}
void MainWindow::on_number9_clicked()
{
    if(ui->resultatLine->text()=="0")
    {
        ui->resultatLine->setText("9");
    }else if(ui->resultatLine->text()=="0" and not nbr1)
    {
       ui->resultatLine->setText("9");
    }else if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ui->resultatLine->text()+"9");
    }
}
void MainWindow::on_ansBouton_clicked()
{
    if(ui->resultatLine->text()!="0")
    {
        ui->resultatLine->setText(ansNombre);
    }
}
void MainWindow::on_clearBouton_clicked()
{
    ui->resultatLine->setText("0");
    nbr1 = 0;
}
void MainWindow::on_virguleBouton_clicked()
{
    ui->resultatLine->setText(ui->resultatLine->text()+".");
}
