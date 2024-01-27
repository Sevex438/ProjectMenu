    #include "mainwindow.h"
    #include "ui_mainwindow.h"
#include <QGraphicsDropShadowEffect>
#include <QGraphicsBlurEffect>
#include <QGraphicsOpacityEffect>
#include <QListView>
#include <QFileDialog>
    MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
    {
        this->showMaximized();
for(int i=0;i<32;i++)
{
    counters[i]=0;
}

        QString styleSheet = this->styleSheet();
        ui->setupUi(this);
ui->stackedWidget_2->setStyleSheet("background-image: url(:new/prefix1/MENU.jpeg");
        scrollWidget->setLayout(layout);
        ui->scrollArea_6->setWidget(scrollWidget);
                ui->scrollArea->setVisible(0);
ui->label_4->setVisible(0);
        ui->stackedWidget->setCurrentIndex(0);
        ui->RateSlider->setMaximum(10);
           QPixmap pixmap0(":/new/prefix1/reservation_bck.jpg");
ui->lbl->setPixmap(pixmap0);
QPixmap pixmap1(":/new/prefix1/MENU.jpeg");
ui->lbl_2->setPixmap(pixmap1);
QPixmap pixmap2(":/new/prefix1/forPovar.jpg");
ui->lbl_3->setPixmap(pixmap2);
        QMap<int, QString> imagePaths = {
               {0,":/new/prefix1/1.jpg"},
               {1, ":/new/prefix1/2.jpg"},
               {2, ":/new/prefix1/3.jpg"},
            {3,":/new/prefix1/4.jpg"},
            {4, ":/new/prefix1/5.jpg"},
            {5, ":/new/prefix1/6.jpg"},
            {6,":/new/prefix1/7.jpg"},
            {7, ":/new/prefix1/8.jpg"},
            {8, ":/new/prefix1/9.jpg"},
             {9,":/new/prefix1/10.jpg"},
             {10,":new/prefix1/11.jpg"}
               // и т.д.

           };
        //=====================ДЛЯ ОКНА ЗАКАЗА==================================================
        QGraphicsDropShadowEffect* shadowEffect = new QGraphicsDropShadowEffect();
        shadowEffect->setBlurRadius(10);
        shadowEffect->setColor(QColor(0, 0, 0, 50));
         shadowEffect->setOffset(0, 0);
         //=====================ДЛЯ ОКНА ЗАКАЗА==================================================

        // устанавливаем тень для списка
       ui->scrollArea->setGraphicsEffect(shadowEffect);
     ui->toolButton->setIcon(QIcon(":/new/prefix1/back.png"));
     ui->toolButton->setIconSize(QSize(80, 80));
     ui->toolButton_2->setIcon(QIcon(":/new/prefix1/next.png"));
     ui->toolButton_2->setIconSize(QSize(60, 60));
        QPixmap pixmap(":/new/prefix1/gallery.jpeg");
       QPixmap Plider1(":/new/prefix1/line1.png");
         QPixmap Plider2(":/new/prefix1/line2.png");
           QPixmap Plider3(":/new/prefix1/line3.png");
      //ИЗОБРАЖЕНИЕ СУПОВ============================================
QPixmap soupe(":/new/prefix1/soupe.jpg");
QPixmap soupe2(":/new/prefix1/borth.jpg");
QPixmap soupe3(":/new/prefix1/soupluc.jpg");
QPixmap soupe4(":/new/prefix1/soupn.jpg");
QPixmap soupe5(":/new/prefix1/soupegr.jpg");
QPixmap soupe6(":/new/prefix1/soupeyel.jpg");
QPixmap soupe7(":/new/prefix1/soupepir.jpg");
 QPixmap soupe1 = soupe.scaled(350, 350, Qt::KeepAspectRatio);
  QPixmap soupeb = soupe2.scaled(320, 320, Qt::KeepAspectRatio);
    QPixmap soupel = soupe3.scaled(460, 460, Qt::KeepAspectRatio);
     QPixmap soupen = soupe4.scaled(460, 460, Qt::KeepAspectRatio);
       QPixmap soupegr = soupe5.scaled(460, 460, Qt::KeepAspectRatio);
        QPixmap soupeyel = soupe6.scaled(460, 460, Qt::KeepAspectRatio);
                QPixmap soupm = soupe7.scaled(460, 460, Qt::KeepAspectRatio);
     //ИЗОБРАЖЕНИЕ СУПОВ============================================
                 //ИЗОБРАЖЕНИЕ ВТОРЫХ БЛЮД============================================
                QPixmap SecondFoodV(":/new/prefix1/vegeterian.jpg");
                QPixmap SecondFoodR(":/new/prefix1/RussiaFood.jpg");
                QPixmap SecondFoodA(":/new/prefix1/American.jpg");
                QPixmap SecondFoodE(":/new/prefix1/ExpensiveFood.jpg");
                QPixmap SecondFoodG(":/new/prefix1/eggs.jpg");
                QPixmap SecondFoodF(":/new/prefix1/FeanceKotleta.jpg");
                QPixmap SecondFoodM(":/new/prefix1/miniburg.jpg");
                 QPixmap SecondFood1 = SecondFoodV.scaled(350, 350, Qt::KeepAspectRatio);
                  QPixmap SecondFood2= SecondFoodR.scaled(320, 320, Qt::KeepAspectRatio);
                    QPixmap SecondFood3= SecondFoodA.scaled(460, 460, Qt::KeepAspectRatio);
                     QPixmap SecondFood4= SecondFoodE.scaled(460, 460, Qt::KeepAspectRatio);
                       QPixmap SecondFood5=  SecondFoodG.scaled(460, 460, Qt::KeepAspectRatio);
                        QPixmap SecondFood6 =  SecondFoodF.scaled(460, 460, Qt::KeepAspectRatio);
                                QPixmap SecondFood7 = SecondFoodM.scaled(460, 460, Qt::KeepAspectRatio);
                //ИЗОБРАЖЕНИЕ ВТОРЫХ БЛЮД============================================
                                 //ИЗОБРАЖЕНИЕ ДЕСЕРТОВ============================================
                                QPixmap DesertP(":/new/prefix1/punk.jpg");
                                QPixmap DesertS(":/new/prefix1/straw.jpg");
                                QPixmap DesertO(":/new/prefix1/orex.jpg");
                                QPixmap DesertC(":/new/prefix1/cake.jpg");
                                QPixmap DesertCH(":/new/prefix1/Chocolate.jpg");
                                QPixmap DesertRB(":/new/prefix1/Cherbet.jpg");
                                QPixmap DesertMix(":/new/prefix1/Mix.jpg");
                                 QPixmap Desert1 = DesertP.scaled(350, 350, Qt::KeepAspectRatio);
                                  QPixmap Desert2=  DesertS.scaled(320, 320, Qt::KeepAspectRatio);
                                    QPixmap Desert3=DesertO.scaled(460, 460, Qt::KeepAspectRatio);
                                     QPixmap Desert4=  DesertC.scaled(460, 460, Qt::KeepAspectRatio);
                                       QPixmap Desert5=  DesertCH.scaled(460, 460, Qt::KeepAspectRatio);
                                        QPixmap Desert6 =  DesertRB.scaled(460, 460, Qt::KeepAspectRatio);
                                                QPixmap Desert7 =DesertMix.scaled(460, 460, Qt::KeepAspectRatio);
                                 //ИЗОБРАЖЕНИЕ ДЕСЕРТОВ============================================
                                                   //ИЗОБРАЖЕНИЕ БАРБЕКЮ============================================
                                                QPixmap BarbekuS(":/new/prefix1/Stack.jpg");
                                                QPixmap BarbekSo(":/new/prefix1/sosiska.jpg");
                                                QPixmap BarbekMix(":/new/prefix1/Barbekueat.jpg");
                                                QPixmap BarbekuSa(":/new/prefix1/Sashluk.jpg");
                                                QPixmap BarbekuBar(":/new/prefix1/Baranina.jpg");

                                                 QPixmap Barbeku1 =BarbekuS.scaled(350, 350, Qt::KeepAspectRatio);
                                                  QPixmap  Barbeku2=   BarbekSo.scaled(320, 320, Qt::KeepAspectRatio);
                                                    QPixmap  Barbeku3=BarbekMix.scaled(460, 460, Qt::KeepAspectRatio);
                                                     QPixmap Barbeku4=  BarbekuSa.scaled(460, 460, Qt::KeepAspectRatio);
                                                      QPixmap  Barbeku5 =BarbekuBar.scaled(460, 460, Qt::KeepAspectRatio);
                                                //ИЗОБРАЖЕНИЕ БАРБЕКЮ============================================
                                                       //ИЗОБРАЖЕНИЕ НАПИТКОВ============================================
                                                      QPixmap drinkB(":/new/prefix1/Berry.jpg");
                                                      QPixmap drinkL(":/new/prefix1/Lime.jpg");
                                                      QPixmap drinkK(":/new/prefix1/kislyu.jpg");
                                                      QPixmap drinkM(":/new/prefix1/malina.jpg");
                                                      QPixmap drinkI(":/new/prefix1/Island.jpg");
                                                        QPixmap drinkS(":/new/prefix1/Sunny.jpg");

                                                       QPixmap drink1 =drinkB.scaled(350, 350, Qt::KeepAspectRatio);
                                                        QPixmap  drink2=   drinkL.scaled(320, 320, Qt::KeepAspectRatio);
                                                          QPixmap  drink3=drinkK.scaled(460, 460, Qt::KeepAspectRatio);
                                                           QPixmap drink4= drinkM.scaled(460, 460, Qt::KeepAspectRatio);
                                                            QPixmap  drink5=drinkI.scaled(460, 460, Qt::KeepAspectRatio);
                                                            QPixmap  drink6=drinkS.scaled(460, 460, Qt::KeepAspectRatio);
                                                          //ИЗОБРАЖЕНИЕ НАПИТКОВ============================================
  //Установка супов=========================================
ui->soupe1->setPixmap(soupe1);
ui->soupe2->setPixmap(soupeb);
ui->soupe3->setPixmap(soupel);
ui->soupe4->setPixmap(soupen);
ui->soupe5->setPixmap(soupegr);
ui->soupe6->setPixmap(soupeyel);
ui->soupe7->setPixmap(soupm);
//Установка супов=========================================
//Установка вторых блюд=========================================
ui->SecondFood1->setPixmap(SecondFood1);
ui->SecondFood2->setPixmap(SecondFood2);
ui->SecondFood3->setPixmap(SecondFood3);
ui->SecondFood4->setPixmap(SecondFood4);
ui->SecondFood5->setPixmap(SecondFood5);
ui->SecondFood6->setPixmap(SecondFood6);
ui->SecondFood7->setPixmap(SecondFood7);
//Установка вторых блюд=========================================
//Установка десертов=========================================
ui->Desert1->setPixmap(Desert1);
ui->Desert2->setPixmap(Desert2);
ui->Desert3->setPixmap(Desert3);
ui->Desert4->setPixmap(Desert4);
ui->Desert5->setPixmap(Desert5);
ui->Desert6->setPixmap(Desert6);
ui->Desert7->setPixmap(Desert7);
//Установка десертов=========================================
//Установка Барбекю=========================================
 ui->Barbecu1->setPixmap(Barbeku1);
  ui->Barbecu2->setPixmap(Barbeku2);
   ui->Barbecu3->setPixmap(Barbeku3);
   ui->Barbecu4->setPixmap(Barbeku4);
    ui->Barbecu5->setPixmap(Barbeku5);
//Установка Барбекю=========================================
    //Установка Напитков=========================================
    ui->drink1->setPixmap(drink1);
     ui->drink2->setPixmap(drink2);
      ui->drink3->setPixmap(drink3);
       ui->drink4->setPixmap(drink4);
        ui->drink5->setPixmap(drink5);
         ui->drink6->setPixmap(drink6);
       //Установка Напитков=========================================
QPixmap scaledPixmap = pixmap.scaled(400, 300, Qt::KeepAspectRatio);
         QPixmap scaledPixmap1 = Plider1.scaled(500, 500, Qt::KeepAspectRatio);
          QPixmap scaledPixmap12 = Plider2.scaled(500, 500, Qt::KeepAspectRatio);
           QPixmap scaledPixmap13 = Plider3.scaled(500, 500, Qt::KeepAspectRatio);
        ui->image->setPixmap(scaledPixmap);
    ui->Lvl->setPixmap(scaledPixmap1);
       ui->Lvl_2->setPixmap(scaledPixmap12);
          ui->Lvl_3->setPixmap(scaledPixmap13);
         ui->Rate->setPixmap(QPixmap(imagePaths.value(0)).scaled(100, 100, Qt::KeepAspectRatio));
        connect(ui->RateSlider, &QSlider::valueChanged, this, [=](int value) {
               if (imagePaths.contains(value)) {

                   ui->Rate->setPixmap(QPixmap(imagePaths.value(value)).scaled(100, 100, Qt::KeepAspectRatio));


               }
               dev=value;
           });




    }

    MainWindow::~MainWindow()
    {
        delete ui;
    }

    void MainWindow::setLabelValue(int value)
    {
        ui->Rate->setText(QString::number(value));
    }

    void MainWindow::on_pushButton_2_clicked()
    {
         ui->stackedWidget->setCurrentIndex(3);
    }


    void MainWindow::on_pushButton_3_clicked()
    {
     ui->stackedWidget->setCurrentIndex(4);
    }
    void MainWindow::on_slider_valueChanged(int value)
    {
        connect(ui->RateSlider, &QSlider::valueChanged, this, &MainWindow::on_slider_valueChanged);

        int nt = value;
        // делайте с переменной nt то, что вам нужно
    }

    void MainWindow::on_pushButton_clicked()
    {
     ui->stackedWidget->setCurrentIndex(2);
    }


    void MainWindow::on_pushButton_42_clicked()
    {
    ui->stackedWidget->setCurrentIndex(1);
    }


    void MainWindow::on_pushButton_45_clicked()
    {
ui->stackedWidget->setCurrentIndex(5);
    }


    void MainWindow::on_exit1_clicked()
    {
        ui->stackedWidget->setCurrentIndex(0);
    }


    void MainWindow::on_exit2_clicked()
    {
        ui->stackedWidget->setCurrentIndex(0);
    }


    void MainWindow::on_exit3_clicked()
    {
         ui->stackedWidget->setCurrentIndex(0);
    }


    void MainWindow::on_send1_clicked()
    {
    QPixmap *pix = new QPixmap();
    QScrollArea *Area = new QScrollArea;
    QLabel *foul = new QLabel;
    QMap<int, QString> imagePaths = {
    {0, ":/new/prefix1/1.jpg"},
    {1, ":/new/prefix1/2.jpg"},
    {2, ":/new/prefix1/3.jpg"},
    {3, ":/new/prefix1/4.jpg"},
    {4, ":/new/prefix1/5.jpg"},
    {5, ":/new/prefix1/6.jpg"},
    {6, ":/new/prefix1/7.jpg"},
    {7, ":/new/prefix1/8.jpg"},
    {8, ":/new/prefix1/9.jpg"},
    {9, ":/new/prefix1/10.jpg"},
    {10, ":new/prefix1/11.jpg"}
    };

foul->setStyleSheet("border-raduis:150px;");

    QString text = ui->textEdit->toPlainText();
    for (int i = 0; i < 11; i++)
    {
        if (dev == i) {
            foul->setPixmap(QPixmap(devic.scaled(240, 240, Qt::KeepAspectRatio)));
           foul->setStyleSheet("border-radius:50px;");
            break;
        }
    }

    QLabel *Otziv = new QLabel(text);
    QFont font("Arial", 14);
    Otziv->setFont(font);
    Otziv->setAlignment(Qt::AlignHCenter | Qt::AlignTop);

QString FIO = ui->FIO->toPlainText();
 QLabel *Name=new QLabel;
 Name->setStyleSheet("font-size:30px;");
Name->setText(FIO);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(foul, 0, Qt::AlignHCenter);
    layout->addWidget(Name,0, Qt::AlignHCenter);
    layout->addWidget(Otziv, 0, Qt::AlignHCenter);

    QWidget *widget = new QWidget;
    widget->setLayout(layout);

    Area->setWidget(widget);
    Area->setWidgetResizable(true);
    Area->setContentsMargins(0, 10, 0, 0); // top=10, bottom=0, left=0, right=0
    Area->setStyleSheet("border:none; background:none; background:white; border-radius:40px;");

    ui->horizontalLayout->addWidget(Area);

    ui->stackedWidget->setCurrentIndex(0);

    }

    void MainWindow::on_exit5_clicked()
    {
         ui->stackedWidget->setCurrentIndex(0);
    }


    void MainWindow::on_pushButton_18_clicked()
    {
        ui->stackedWidget_2->setCurrentIndex(3);
    }


    void MainWindow::on_pushButton_20_clicked()
    {
          ui->stackedWidget_2->setCurrentIndex(2);
    }


    void MainWindow::on_pushButton_19_clicked()
    {
          ui->stackedWidget_2->setCurrentIndex(4);
    }


    void MainWindow::on_pushButton_27_clicked()
    {
         ui->stackedWidget_2->setCurrentIndex(3);
    }


    void MainWindow::on_pushButton_28_clicked()
    {
    ui->stackedWidget_2->setCurrentIndex(0);
    }


    void MainWindow::on_pushButton_33_clicked()
    {
        ui->stackedWidget_2->setCurrentIndex(4);
    }


    void MainWindow::on_pushButton_34_clicked()
    {
            ui->stackedWidget_2->setCurrentIndex(1);
    }


    void MainWindow::on_pushButton_40_clicked()
    {
        ui->stackedWidget_2->setCurrentIndex(0);
    }




    void MainWindow::on_toolButton_clicked()
    {

ui->slidercast->setCurrentIndex(ui->slidercast->currentIndex()-1);
}


    void MainWindow::on_toolButton_2_clicked()
    {
ui->slidercast->setCurrentIndex(ui->slidercast->currentIndex()+1);
    }


void MainWindow::on_order_clicked()
{
    ui->scrollArea->setVisible(1);
    ui->label_4->setVisible(1);
    //====================БЛЮР ПРИ ЗАКАЗЕ=====================================================
QGraphicsBlurEffect *blurEffect = new QGraphicsBlurEffect;
QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect;
QPixmap kaspi(":/new/prefix1/kaspi.png");
QPixmap visa(":/new/prefix1/visa.png");
QPixmap MasterCard(":/new/prefix1/mastercard.png");
  QPixmap scaledPixmap = kaspi.scaled(50, 50, Qt::KeepAspectRatio);
   QPixmap scaledPixmap2 = MasterCard.scaled(50, 50, Qt::KeepAspectRatio);
  QPixmap scaledPixmap1 = visa.scaled(50, 50, Qt::KeepAspectRatio);
ui->LOKA->setPixmap(scaledPixmap);
ui->LOKA_2->setPixmap(scaledPixmap1);
ui->LOKA_3->setPixmap(scaledPixmap2);
ui->stackedWidget_2->setGraphicsEffect(blurEffect);
blurEffect->setBlurRadius(10);
//====================БЛЮР ПРИ ЗАКАЗЕ=====================================================
ui->scrollArea->setVisible(1);
ui->label_4->setVisible(1);
ui->order->setVisible(0);
ui->exit2->setVisible(0);
ui->scrollArea->move(200,64);

}

void MainWindow::PlusBut(int &counter)
{
counter++;

}

void MainWindow::MinusBut(int &counter)
{
counter--;
}



void MainWindow::Ultimate_method(QString name, int costs, QPushButton* &Products, QString Image, int &counter)
{
    if (counter == 0) {
        Products = nullptr;
                     Products->deleteLater();


                 }
    if (Products != nullptr)
    {

 int total_cost = counter * costs;
        Products->setText(name+QString(", КОЛ-ВО: %1, Стоимость: %2").arg(counter).arg(total_cost));
      counter++;




    }
    else
    {
        QPushButton *Plus = new QPushButton("+", this);
        QPushButton *Minus = new QPushButton("-", this);
        QPushButton *Clear = new QPushButton("Убрать", this);
        Plus->setStyleSheet("color: rgb(0, 0, 0); font-size: 20px;font-weight: bold;border:3px solid:black; background:none;");
        Minus->setStyleSheet("color: rgb(0, 0, 0); font-size: 20px;font-weight: bold;border:none; background:none;");
        QHBoxLayout *button_layout = new QHBoxLayout;
        button_layout->addWidget(Plus);
        button_layout->addWidget(Minus);
        button_layout->addWidget(Clear);

        counter++;
        Products = new QPushButton(name+QString(", КОЛ-ВО: %1, Стоимость: %2").arg(counter).arg(costs));
        Products->setStyleSheet("font-size: 16px; font-weight: bold; border:5px solid:black; border-radius: 5px; padding: 10px 20px; color: #FFFFFF; background-color: #D8C3A5; font-family: Arial, sans-serif; text-transform: uppercase; transition: background-color 0.3s ease;");
        QHBoxLayout *product_layout = new QHBoxLayout;
        QLabel *image_label = new QLabel;
        QPixmap Preview(Image);
        image_label->setPixmap(Preview.scaled(QSize(200, 200), Qt::KeepAspectRatio));
        product_layout->addWidget(image_label);
        QVBoxLayout *details_layout = new QVBoxLayout;
        details_layout->addWidget(Products);
        details_layout->addLayout(button_layout);
        product_layout->addLayout(details_layout);

        layout->addLayout(product_layout);
       connect(Plus,&QPushButton::clicked, this, [this, &counter,Products,name,costs](){
           PlusBut(counter);
           int total_cost = counter * costs;
           Products->setText(name+QString(", КОЛ-ВО: %1, Стоимость: %2").arg(counter).arg(total_cost));
            Order.insert(name,counter);
       });

              connect(Clear,&QPushButton::clicked, this, [this, &counter,Products,name,costs,Plus,Minus,product_layout,image_label,Clear](){

                  ClearF(counter);
                  layout->removeWidget(Products);  // удалить Products из компоновщика
                  delete Products;                 // освободить память, которую он занимает
                layout->removeWidget(Plus);
                 layout->removeWidget(Minus);
                      layout->removeWidget(Clear);
                      delete Clear;
                 delete Plus;
                 delete Minus;
                 product_layout->removeWidget(image_label);
                 delete image_label;

              });


       connect(Minus,&QPushButton::clicked, this, [this, &counter,Products,name,costs,Plus,Minus,product_layout,image_label,Clear](){
           MinusBut(counter);
           if (counter == 0) {
                  layout->removeWidget(Products);  // удалить Products из компоновщика
                  delete Products;                 // освободить память, которую он занимает
                layout->removeWidget(Plus);
                 layout->removeWidget(Minus);
                      layout->removeWidget(Clear);
                      delete Clear;
                 delete Plus;
                 delete Minus;
                 product_layout->removeWidget(image_label);
                 delete image_label;

              }
              else {
                  int total_cost = counter * costs;
                  Products->setText(name + QString(", КОЛ-ВО: %1, Стоимость: %2").arg(counter).arg(total_cost));
              }
       });

    }
 Order.insert(name,counter);
}





void MainWindow::on_Coctail_Lime_clicked()
{
    Ultimate_method("Коктель Лайм",1200,Lime,":/new/prefix1/Lime.jpg",counters[0]);
}


void MainWindow::on_otmena_Order_clicked()
{
    QGraphicsBlurEffect *blurEffect = new QGraphicsBlurEffect;
    ui->stackedWidget_2->setGraphicsEffect(blurEffect);
    blurEffect->setBlurRadius(0);
    ui->scrollArea->setVisible(0);
    ui->label_4->setVisible(0);
    ui->order->setVisible(1);
    ui->exit2->setVisible(1);


}

void MainWindow::ClearF(int &counter)
{
counter=0;
}

void MainWindow::on_Coctail_straw_clicked()
{
     Ultimate_method("Коктель Клубника",1400,straw,":/new/prefix1/Berry.jpg",counters[1]);
}


void MainWindow::on_Coctail_Limon_clicked()
{
    Ultimate_method("Коктель Лимон",1600,Limon,":/new/prefix1/kislyu.jpg",counters[2]);
}


void MainWindow::on_Coctail_Malina_clicked()
{
      Ultimate_method("Коктель Малина",1900,Malina,":/new/prefix1/malina.jpg",counters[3]);
}


void MainWindow::on_Coctail_Vishenka_clicked()
{
    Ultimate_method("Коктель Вишенка",1280,Vihenka,":/new/prefix1/Island.jpg",counters[4]);
}


void MainWindow::on_Coctail_Mix_clicked()
{
     Ultimate_method("Коктель Микс",2080,Mix,":/new/prefix1/Sunny.jpg",counters[5]);
}


void MainWindow::on_Steak_clicked()
{
       Ultimate_method("Стейк",3200,Stack,":/new/prefix1/Stack.jpg",counters[6]);
}


void MainWindow::on_sosiska_clicked()
{
     Ultimate_method("Сосиски",2300,Sosiska,":/new/prefix1/sosiska.jpg",counters[7]);
}


void MainWindow::on_Mix_Barbeku_clicked()
{
    Ultimate_method("Микс барбекю",10000,Mix_barbeku,":/new/prefix1/Barbekueat.jpg",counters[8]);
}


void MainWindow::on_Barbeku_clicked()
{
        Ultimate_method("Шашлык Говядина",2000,Barbecu,":/new/prefix1/Sashluk.jpg",counters[9]);
}


void MainWindow::on_Barbeku_Banana_clicked()
{
     Ultimate_method("Шашлык Баранина",2000,Barbecu_Baranina,":/new/prefix1/Baranina.jpg",counters[10]);
}


void MainWindow::on_Soup_Cheese_clicked()
{
     Ultimate_method("Суп с Плавленным сыром",1200,soup_cheese,":/new/prefix1/soupe.jpg",counters[11]);
}


void MainWindow::on_Soup_Borzh_clicked()
{
     Ultimate_method("Суп Борщ",1550,soup_Borth,":/new/prefix1/borth.jpg",counters[12]);
}


void MainWindow::on_Lukovyi_soup_clicked()
{
     Ultimate_method("Суп Луковый",1500,soup_luc,":/new/prefix1/soupluc.jpg",counters[13]);
}


void MainWindow::on_Soup_MoreProducts_clicked()
{
     Ultimate_method("Суп с море продуктами",1540,soup_more,":/new/prefix1/soupn.jpg",counters[14]);
}


void MainWindow::on_Soup_Green_clicked()
{

        Ultimate_method("Суп с зеленью",1300,soup_green,":/new/prefix1/soupegr.jpg",counters[15]);
}


void MainWindow::on_Soup_alloxa_clicked()
{
      Ultimate_method("Суп Аллоха",1540,soup_Alloxa,":/new/prefix1/soupeyel.jpg",counters[16]);
}


void MainWindow::on_soup_pire_clicked()
{
     Ultimate_method("Суп пюре",1340,soup_pire,":/new/prefix1/soupeyel.jpg",counters[17]);
}


void MainWindow::on_Vegeterian_salad_clicked()
{
     Ultimate_method("Вегетерианский салат",1200,vegetarian,":/new/prefix1/vegeterian.jpg",counters[18]);
}


void MainWindow::on_Dinner_Russia_clicked()
{
     Ultimate_method("Обде Россия",2200,Russia,":/new/prefix1/RussiaFood.jpg",counters[19]);
}


void MainWindow::on_Dinner_America_clicked()
{
    Ultimate_method("Обде Америка",2200,America,":/new/prefix1/American.jpg",counters[20]);
}



void MainWindow::on_Mini_Burgers_clicked()
{
    Ultimate_method("Мини Бургеры",1400,mini,":/new/prefix1/ExpensiveFood.jpg",counters[21]);
}


void MainWindow::on_eggs_clicked()
{
     Ultimate_method("Яищница",1850,eggs,":/new/prefix1/eggs.jpg",counters[22]);
}


void MainWindow::on_Kotlet_po_Zherski_clicked()
{
     Ultimate_method("Котлеты по Чершзки",3200,cotlet,":/new/prefix1/FeanceKotleta.jpg",counters[23]);
}


void MainWindow::on_Bylozka_sMakom_clicked()
{
       Ultimate_method("Булочки с маком",1340,Bul,":/new/prefix1/miniburg.jpg",counters[24]);
}


void MainWindow::on_Punckaes_clicked()
{
      Ultimate_method("Панкейки",2400,Puncakes,":/new/prefix1/punk.jpg",counters[25]);
}


void MainWindow::on_StawBerry_Desert_clicked()
{
    Ultimate_method("Клубника с ванилью",2000,Vanil,":/new/prefix1/straw.jpg",counters[26]);
}



void MainWindow::on_Nutts_puding_clicked()
{
      Ultimate_method("Ореховый пудинг",1800,Orex,":/new/prefix1/orex.jpg",counters[27]);
}


void MainWindow::on_Chocolate_cake_clicked()
{
     Ultimate_method("Шоколадный торт",2300,Chocolate_cake,":/new/prefix1/cake.jpg",counters[28]);
}


void MainWindow::on_Chocolate_pirozhae_clicked()
{
     Ultimate_method("Шоколадный пирожные",2800,Chocolate_cake2,":/new/prefix1/Chocolate.jpg",counters[29]);
}


void MainWindow::on_Zherbet_clicked()
{
     Ultimate_method("Щербет",3000,Zherbet,":/new/prefix1/Cherbet.jpg",counters[30]);
}


void MainWindow::on_Desert_Mix_clicked()
{
    Ultimate_method("Приожные Mix",2200,cake_mix,":/new/prefix1/Mix.jpg",counters[31]);
}



void MainWindow::on_order_zakaz_clicked()
{
    QGraphicsBlurEffect *blurEffect = new QGraphicsBlurEffect;
    ui->stackedWidget_2->setGraphicsEffect(blurEffect);
    blurEffect->setBlurRadius(0);
    ui->scrollArea->setVisible(0);
    ui->label_4->setVisible(0);
    ui->order->setVisible(1);
    ui->exit2->setVisible(1);
    for (auto it = Order.begin(); it != Order.end(); ++it) {
        QString key = it.key();
        int value = it.value();
        QLabel *Ord=new QLabel(key+QString(" Количество:%1").arg(value));

       ui->verticalLayout->addWidget(Ord);

    }
    Order.clear();
}


void MainWindow::on_pushButton_4_clicked()
{

    QLayoutItem *child;
    while ((child = ui->verticalLayout->takeAt(0)) != nullptr)
    {
        if (child->widget())
        {
            delete child->widget();
        }
        delete child;
    }
}


void MainWindow::on_pushButton_5_clicked()
{
      ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Avatar_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Выберите изображение"), "", tr("Изображения (*.png *.jpg)"));

      // проверяем, что пользователь выбрал файл
      if (!imagePath.isEmpty()) {
          // проверяем, что выбранный файл является изображением
          if (imagePath.endsWith(".png") || imagePath.endsWith(".jpg")) {
              // загружаем выбранное изображение в QPixmap
              devic=(imagePath);
              // устанавливаем изображение в качестве пиктограммы в QLabel
              ui->Rate->setPixmap(devic.scaled(100, 100, Qt::KeepAspectRatio));
          }
      }
}

