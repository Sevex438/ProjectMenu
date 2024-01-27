#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPushButton>
#include <QMainWindow>
#include <QVBoxLayout>
#include  <Qlabel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
int dev=0;
QPixmap devic;
         QVBoxLayout *layout = new QVBoxLayout();
         QWidget *scrollWidget = new QWidget();
QMap<QString,int> Order;
  int counters[32];

      QPushButton* Lime = nullptr;
        QPushButton* straw = nullptr;
          QPushButton* Limon = nullptr;
            QPushButton* Malina = nullptr;
              QPushButton* Vihenka = nullptr;
               QPushButton* Mix = nullptr;
                QPushButton* Stack= nullptr;
                   QPushButton* Sosiska= nullptr;
                      QPushButton* Mix_barbeku= nullptr;
                         QPushButton* Barbecu= nullptr;
                            QPushButton* Barbecu_Baranina= nullptr;
                               QPushButton* soup_cheese= nullptr;
                               QPushButton* soup_Borth= nullptr;
                               QPushButton* soup_luc= nullptr;
                               QPushButton* soup_more= nullptr;
                               QPushButton* soup_green= nullptr;
                               QPushButton* soup_Alloxa= nullptr;
                               QPushButton* soup_pire= nullptr;
                               QPushButton* vegetarian= nullptr;
                               QPushButton* Russia= nullptr;
                                QPushButton* America= nullptr;
                                 QPushButton* mini= nullptr;
                                  QPushButton* eggs= nullptr;
                                   QPushButton* cotlet= nullptr;
                                    QPushButton* Bul= nullptr;
                                     QPushButton* Puncakes= nullptr;
                                      QPushButton* Vanil= nullptr;
                                       QPushButton* Orex= nullptr;
                                        QPushButton* Chocolate_cake= nullptr;
                                          QPushButton* Chocolate_cake2= nullptr;
                                            QPushButton* Zherbet= nullptr;
                                              QPushButton* cake_mix= nullptr;
    int index=0;
    QPixmap images[4]{
        QPixmap(":/new/prefix1/line.png"),
   QPixmap(":/new/prefix1/line1.png"),
  QPixmap(":/new/prefix1/line2.png"),
   QPixmap(":/new/prefix1/line3.png")};
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();
void setLabelValue(int value);
private slots:
void on_pushButton_2_clicked();

void on_pushButton_3_clicked();

void on_pushButton_clicked();

void on_pushButton_42_clicked();

void on_pushButton_45_clicked();

void on_exit1_clicked();

void on_exit2_clicked();

void on_exit3_clicked();

void on_send1_clicked();

void on_exit5_clicked();

void on_pushButton_18_clicked();

void on_pushButton_20_clicked();

void on_pushButton_19_clicked();

void on_pushButton_27_clicked();

void on_pushButton_28_clicked();

void on_pushButton_33_clicked();

void on_pushButton_34_clicked();

void on_pushButton_40_clicked();

void on_toolButton_clicked();

void on_toolButton_2_clicked();

void on_order_clicked();

void PlusBut(int &counter);
void MinusBut(int &counter);
void Ultimate_method(QString,int,QPushButton* &button,QString,int&);

void on_Coctail_Lime_clicked();

void on_otmena_Order_clicked();

void on_Coctail_straw_clicked();

void on_Coctail_Limon_clicked();

void on_Coctail_Malina_clicked();

void on_Coctail_Vishenka_clicked();

void on_Coctail_Mix_clicked();

void on_Steak_clicked();

void on_sosiska_clicked();

void on_Mix_Barbeku_clicked();

void on_Barbeku_clicked();

void on_Barbeku_Banana_clicked();

void on_Soup_Cheese_clicked();

void on_Soup_Borzh_clicked();

void on_Lukovyi_soup_clicked();

void on_Soup_MoreProducts_clicked();

void on_Soup_Green_clicked();

void on_Soup_alloxa_clicked();

void on_soup_pire_clicked();

void on_Vegeterian_salad_clicked();

void on_Dinner_Russia_clicked();

void on_Dinner_America_clicked();

void on_Mini_Burgers_clicked();

void on_eggs_clicked();

void on_Kotlet_po_Zherski_clicked();

void on_Bylozka_sMakom_clicked();

void on_Punckaes_clicked();

void on_StawBerry_Desert_clicked();

void on_Nutts_puding_clicked();

void on_Chocolate_cake_clicked();

void on_Chocolate_pirozhae_clicked();

void on_Zherbet_clicked();

void on_Desert_Mix_clicked();
void ClearF(int &counter);

void on_order_zakaz_clicked();

void on_pushButton_4_clicked();

void on_pushButton_5_clicked();
    void on_slider_valueChanged(int value);

    void on_Avatar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
