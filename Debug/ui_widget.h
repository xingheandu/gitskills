/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *automatic;
    QPushButton *Manual;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *CPU_100;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QDateTimeEdit *start_time;
    QLineEdit *CPU_20;
    QDateTimeEdit *end_time;
    QLineEdit *CPU_10;
    QRadioButton *net;
    QCheckBox *checkBox;
    QRadioButton *choose_fold;
    QLineEdit *fold_path;
    QPushButton *choose;
    QTextEdit *textEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *out_fold;
    QComboBox *priority;
    QCheckBox *if_Preprocessing;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QComboBox *signal_detect;
    QCheckBox *checkBox_2;
    QCheckBox *MARK;
    QCheckBox *MARKS;
    QCheckBox *signal_source;
    QCheckBox *radar;
    QCheckBox *if_marking;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QComboBox *quality;
    QPushButton *choose_weight;
    QLabel *label_11;
    QLineEdit *feature_file;
    QCheckBox *checkBox_4;
    QGroupBox *groupBox_4;
    QRadioButton *last_time;
    QRadioButton *choose_dataset_path;
    QLineEdit *dataset_path;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit;
    QComboBox *net_type;
    QCheckBox *memory_save;
    QCheckBox *HPFS;
    QCheckBox *TFrecord;
    QComboBox *save_style;
    QLabel *label_14;
    QLabel *label_15;
    QCheckBox *CNN;
    QCheckBox *DNN;
    QCheckBox *VGG;
    QPushButton *setting;
    QPushButton *para_setting;
    QLabel *label_16;
    QRadioButton *normalization;
    QRadioButton *standardization;
    QLabel *label_17;
    QComboBox *proportion;
    QPushButton *add;
    QCheckBox *checkBox_5;
    QGroupBox *groupBox_5;
    QRadioButton *last_time_2;
    QRadioButton *choose_dataset_path_2;
    QLineEdit *dataset_path_2;
    QLabel *label_18;
    QComboBox *merge;
    QLabel *label_19;
    QRadioButton *aotu_train;
    QRadioButton *manu_train;
    QPushButton *save_temp;
    QPushButton *start_work;
    QPushButton *cancel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(961, 534);
        automatic = new QPushButton(Widget);
        automatic->setObjectName(QStringLiteral("automatic"));
        automatic->setGeometry(QRect(390, 10, 75, 23));
        Manual = new QPushButton(Widget);
        Manual->setObjectName(QStringLiteral("Manual"));
        Manual->setGeometry(QRect(510, 10, 75, 23));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 441, 211));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 40, 54, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 40, 54, 16));
        CPU_100 = new QLineEdit(groupBox);
        CPU_100->setObjectName(QStringLiteral("CPU_100"));
        CPU_100->setGeometry(QRect(76, 38, 60, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 11, 48, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 38, 60, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 10, 48, 16));
        start_time = new QDateTimeEdit(groupBox);
        start_time->setObjectName(QStringLiteral("start_time"));
        start_time->setGeometry(QRect(76, 11, 151, 20));
        CPU_20 = new QLineEdit(groupBox);
        CPU_20->setObjectName(QStringLiteral("CPU_20"));
        CPU_20->setGeometry(QRect(220, 40, 60, 20));
        end_time = new QDateTimeEdit(groupBox);
        end_time->setObjectName(QStringLiteral("end_time"));
        end_time->setGeometry(QRect(300, 10, 124, 20));
        CPU_10 = new QLineEdit(groupBox);
        CPU_10->setObjectName(QStringLiteral("CPU_10"));
        CPU_10->setGeometry(QRect(360, 40, 60, 20));
        net = new QRadioButton(groupBox);
        net->setObjectName(QStringLiteral("net"));
        net->setGeometry(QRect(10, 70, 50, 16));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 70, 50, 16));
        choose_fold = new QRadioButton(groupBox);
        choose_fold->setObjectName(QStringLiteral("choose_fold"));
        choose_fold->setGeometry(QRect(110, 70, 83, 16));
        fold_path = new QLineEdit(groupBox);
        fold_path->setObjectName(QStringLiteral("fold_path"));
        fold_path->setGeometry(QRect(200, 70, 181, 20));
        choose = new QPushButton(groupBox);
        choose->setObjectName(QStringLiteral("choose"));
        choose->setGeometry(QRect(390, 70, 32, 23));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 100, 411, 71));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 180, 91, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 180, 41, 16));
        out_fold = new QLineEdit(groupBox);
        out_fold->setObjectName(QStringLiteral("out_fold"));
        out_fold->setGeometry(QRect(100, 180, 151, 20));
        priority = new QComboBox(groupBox);
        priority->setObjectName(QStringLiteral("priority"));
        priority->setGeometry(QRect(318, 180, 101, 22));
        label_5->raise();
        label_4->raise();
        CPU_100->raise();
        label->raise();
        label_3->raise();
        label_2->raise();
        start_time->raise();
        CPU_20->raise();
        end_time->raise();
        CPU_10->raise();
        net->raise();
        checkBox->raise();
        choose_fold->raise();
        fold_path->raise();
        choose->raise();
        textEdit->raise();
        label_6->raise();
        label_7->raise();
        out_fold->raise();
        priority->raise();
        if_Preprocessing = new QCheckBox(Widget);
        if_Preprocessing->setObjectName(QStringLiteral("if_Preprocessing"));
        if_Preprocessing->setGeometry(QRect(20, 260, 81, 16));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 280, 441, 80));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 54, 20));
        signal_detect = new QComboBox(groupBox_2);
        signal_detect->setObjectName(QStringLiteral("signal_detect"));
        signal_detect->setGeometry(QRect(70, 10, 251, 20));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 50, 53, 16));
        MARK = new QCheckBox(groupBox_2);
        MARK->setObjectName(QStringLiteral("MARK"));
        MARK->setGeometry(QRect(90, 50, 47, 16));
        MARKS = new QCheckBox(groupBox_2);
        MARKS->setObjectName(QStringLiteral("MARKS"));
        MARKS->setGeometry(QRect(170, 50, 59, 16));
        signal_source = new QCheckBox(groupBox_2);
        signal_source->setObjectName(QStringLiteral("signal_source"));
        signal_source->setGeometry(QRect(260, 50, 59, 16));
        radar = new QCheckBox(groupBox_2);
        radar->setObjectName(QStringLiteral("radar"));
        radar->setGeometry(QRect(370, 50, 47, 16));
        if_marking = new QCheckBox(Widget);
        if_marking->setObjectName(QStringLiteral("if_marking"));
        if_marking->setGeometry(QRect(20, 370, 81, 16));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 390, 441, 80));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 54, 20));
        quality = new QComboBox(groupBox_3);
        quality->setObjectName(QStringLiteral("quality"));
        quality->setGeometry(QRect(70, 10, 251, 20));
        choose_weight = new QPushButton(groupBox_3);
        choose_weight->setObjectName(QStringLiteral("choose_weight"));
        choose_weight->setGeometry(QRect(330, 10, 75, 23));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 50, 101, 16));
        feature_file = new QLineEdit(groupBox_3);
        feature_file->setObjectName(QStringLiteral("feature_file"));
        feature_file->setGeometry(QRect(110, 50, 291, 20));
        checkBox_4 = new QCheckBox(Widget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(510, 40, 71, 16));
        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(510, 60, 441, 211));
        last_time = new QRadioButton(groupBox_4);
        last_time->setObjectName(QStringLiteral("last_time"));
        last_time->setGeometry(QRect(20, 20, 121, 16));
        choose_dataset_path = new QRadioButton(groupBox_4);
        choose_dataset_path->setObjectName(QStringLiteral("choose_dataset_path"));
        choose_dataset_path->setGeometry(QRect(160, 20, 121, 16));
        dataset_path = new QLineEdit(groupBox_4);
        dataset_path->setObjectName(QStringLiteral("dataset_path"));
        dataset_path->setGeometry(QRect(280, 20, 151, 20));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 50, 91, 16));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(290, 50, 61, 16));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 50, 151, 20));
        net_type = new QComboBox(groupBox_4);
        net_type->setObjectName(QStringLiteral("net_type"));
        net_type->setGeometry(QRect(360, 50, 69, 22));
        memory_save = new QCheckBox(groupBox_4);
        memory_save->setObjectName(QStringLiteral("memory_save"));
        memory_save->setGeometry(QRect(20, 80, 71, 16));
        HPFS = new QCheckBox(groupBox_4);
        HPFS->setObjectName(QStringLiteral("HPFS"));
        HPFS->setGeometry(QRect(110, 80, 71, 16));
        TFrecord = new QCheckBox(groupBox_4);
        TFrecord->setObjectName(QStringLiteral("TFrecord"));
        TFrecord->setGeometry(QRect(180, 80, 71, 16));
        save_style = new QComboBox(groupBox_4);
        save_style->setObjectName(QStringLiteral("save_style"));
        save_style->setGeometry(QRect(328, 80, 100, 22));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(260, 80, 61, 16));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 110, 54, 12));
        CNN = new QCheckBox(groupBox_4);
        CNN->setObjectName(QStringLiteral("CNN"));
        CNN->setGeometry(QRect(80, 110, 71, 16));
        DNN = new QCheckBox(groupBox_4);
        DNN->setObjectName(QStringLiteral("DNN"));
        DNN->setGeometry(QRect(130, 110, 71, 16));
        VGG = new QCheckBox(groupBox_4);
        VGG->setObjectName(QStringLiteral("VGG"));
        VGG->setGeometry(QRect(180, 110, 71, 16));
        setting = new QPushButton(groupBox_4);
        setting->setObjectName(QStringLiteral("setting"));
        setting->setGeometry(QRect(240, 110, 75, 23));
        para_setting = new QPushButton(groupBox_4);
        para_setting->setObjectName(QStringLiteral("para_setting"));
        para_setting->setGeometry(QRect(330, 110, 100, 23));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 140, 91, 16));
        normalization = new QRadioButton(groupBox_4);
        normalization->setObjectName(QStringLiteral("normalization"));
        normalization->setGeometry(QRect(110, 140, 89, 16));
        standardization = new QRadioButton(groupBox_4);
        standardization->setObjectName(QStringLiteral("standardization"));
        standardization->setGeometry(QRect(180, 140, 89, 16));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 170, 91, 16));
        proportion = new QComboBox(groupBox_4);
        proportion->setObjectName(QStringLiteral("proportion"));
        proportion->setGeometry(QRect(110, 170, 121, 22));
        add = new QPushButton(groupBox_4);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(240, 170, 41, 23));
        checkBox_5 = new QCheckBox(Widget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(510, 280, 71, 16));
        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(510, 300, 441, 111));
        last_time_2 = new QRadioButton(groupBox_5);
        last_time_2->setObjectName(QStringLiteral("last_time_2"));
        last_time_2->setGeometry(QRect(20, 10, 121, 16));
        choose_dataset_path_2 = new QRadioButton(groupBox_5);
        choose_dataset_path_2->setObjectName(QStringLiteral("choose_dataset_path_2"));
        choose_dataset_path_2->setGeometry(QRect(160, 10, 121, 16));
        dataset_path_2 = new QLineEdit(groupBox_5);
        dataset_path_2->setObjectName(QStringLiteral("dataset_path_2"));
        dataset_path_2->setGeometry(QRect(280, 10, 151, 20));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 40, 141, 16));
        merge = new QComboBox(groupBox_5);
        merge->setObjectName(QStringLiteral("merge"));
        merge->setGeometry(QRect(160, 40, 271, 22));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(20, 70, 81, 16));
        aotu_train = new QRadioButton(groupBox_5);
        aotu_train->setObjectName(QStringLiteral("aotu_train"));
        aotu_train->setGeometry(QRect(110, 70, 89, 16));
        manu_train = new QRadioButton(groupBox_5);
        manu_train->setObjectName(QStringLiteral("manu_train"));
        manu_train->setGeometry(QRect(180, 70, 89, 16));
        save_temp = new QPushButton(Widget);
        save_temp->setObjectName(QStringLiteral("save_temp"));
        save_temp->setGeometry(QRect(340, 490, 75, 23));
        start_work = new QPushButton(Widget);
        start_work->setObjectName(QStringLiteral("start_work"));
        start_work->setGeometry(QRect(450, 490, 75, 23));
        cancel = new QPushButton(Widget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(580, 490, 75, 23));
        automatic->raise();
        Manual->raise();
        groupBox->raise();
        if_Preprocessing->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        if_marking->raise();
        groupBox_3->raise();
        checkBox_4->raise();
        groupBox_4->raise();
        checkBox_5->raise();
        groupBox_5->raise();
        save_temp->raise();
        start_work->raise();
        cancel->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        automatic->setText(QApplication::translate("Widget", "\350\207\252\345\212\250", 0));
        Manual->setText(QApplication::translate("Widget", "\346\211\213\345\212\250", 0));
        groupBox->setTitle(QString());
        label_5->setText(QApplication::translate("Widget", "CPU\357\274\21010\357\274\211", 0));
        label_4->setText(QApplication::translate("Widget", "CPU\357\274\21020\357\274\211", 0));
        label->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\346\227\266\351\227\264", 0));
        label_3->setText(QApplication::translate("Widget", "CPU\357\274\210100\357\274\211", 0));
        label_2->setText(QApplication::translate("Widget", "\347\273\223\346\235\237\346\227\266\351\227\264", 0));
        net->setText(QApplication::translate("Widget", "\347\275\221\347\273\234", 0));
        checkBox->setText(QApplication::translate("Widget", "\344\277\235\345\255\230", 0));
        choose_fold->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", 0));
        choose->setText(QApplication::translate("Widget", ">>>", 0));
        textEdit->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\200\211\346\213\251\351\205\215\347\275\256\346\226\207\344\273\266</p></body></html>", 0));
        label_6->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\347\273\223\346\236\234\346\226\207\344\273\266\345\244\271", 0));
        label_7->setText(QApplication::translate("Widget", "\344\274\230\345\205\210\347\272\247", 0));
        if_Preprocessing->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\351\242\204\345\244\204\347\220\206", 0));
        groupBox_2->setTitle(QString());
        label_8->setText(QApplication::translate("Widget", "\344\277\241\345\217\267\346\243\200\346\265\213", 0));
        checkBox_2->setText(QApplication::translate("Widget", "ADS-B", 0));
        MARK->setText(QApplication::translate("Widget", "MARK", 0));
        MARKS->setText(QApplication::translate("Widget", "MARK\\S", 0));
        signal_source->setText(QApplication::translate("Widget", "\344\277\241\345\217\267\346\272\220", 0));
        radar->setText(QApplication::translate("Widget", "\351\233\267\350\276\276", 0));
        if_marking->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\346\240\207\346\263\250", 0));
        groupBox_3->setTitle(QString());
        label_10->setText(QApplication::translate("Widget", "\350\264\250\351\207\217\350\257\204\344\274\260", 0));
        choose_weight->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\346\235\203\351\207\215", 0));
        label_11->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\347\211\271\345\276\201\351\205\215\347\275\256\346\226\207\344\273\266", 0));
        checkBox_4->setText(QApplication::translate("Widget", "\347\275\221\347\273\234\350\256\255\347\273\203", 0));
        groupBox_4->setTitle(QString());
        last_time->setText(QApplication::translate("Widget", "\344\270\212\346\254\241\346\225\260\346\215\256\346\240\207\346\263\250\345\276\227\345\210\260", 0));
        choose_dataset_path->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\346\225\260\346\215\256\351\233\206\345\234\260\345\235\200", 0));
        label_12->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\351\233\206\345\210\222\345\210\206\346\257\224\344\276\213", 0));
        label_13->setText(QApplication::translate("Widget", "\347\275\221\347\273\234\347\261\273\345\236\213", 0));
        memory_save->setText(QApplication::translate("Widget", "\345\206\205\345\255\230\344\277\235\345\255\230", 0));
        HPFS->setText(QApplication::translate("Widget", "HPFS", 0));
        TFrecord->setText(QApplication::translate("Widget", "TFrecord", 0));
        label_14->setText(QApplication::translate("Widget", "\344\277\235\345\255\230\345\275\242\345\274\217", 0));
        label_15->setText(QApplication::translate("Widget", "\347\275\221\347\273\234\350\256\276\347\275\256", 0));
        CNN->setText(QApplication::translate("Widget", "CNN", 0));
        DNN->setText(QApplication::translate("Widget", "DNN", 0));
        VGG->setText(QApplication::translate("Widget", "VGG", 0));
        setting->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", 0));
        para_setting->setText(QApplication::translate("Widget", "\350\266\205\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        label_16->setText(QApplication::translate("Widget", "\347\275\221\347\273\234\350\256\255\347\273\203\351\242\204\345\244\204\347\220\206", 0));
        normalization->setText(QApplication::translate("Widget", "\345\275\222\344\270\200\345\214\226", 0));
        standardization->setText(QApplication::translate("Widget", "\346\240\207\345\207\206\345\214\226", 0));
        label_17->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\351\233\206\345\210\222\345\210\206\346\257\224\344\276\213", 0));
        add->setText(QApplication::translate("Widget", "+", 0));
        checkBox_5->setText(QApplication::translate("Widget", "\346\216\250\347\220\206\350\257\206\345\210\253", 0));
        groupBox_5->setTitle(QString());
        last_time_2->setText(QApplication::translate("Widget", "\344\270\212\346\254\241\346\225\260\346\215\256\346\240\207\346\263\250\345\276\227\345\210\260", 0));
        choose_dataset_path_2->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\346\225\260\346\215\256\351\233\206\345\234\260\345\235\200", 0));
        label_18->setText(QApplication::translate("Widget", "\345\244\232\346\240\267\346\234\254\345\210\244\346\226\255\347\273\223\346\236\234\350\236\215\345\220\210\347\256\227\346\263\225", 0));
        label_19->setText(QApplication::translate("Widget", "\346\267\261\345\272\246\345\255\246\344\271\240\347\275\221\347\273\234", 0));
        aotu_train->setText(QApplication::translate("Widget", "\350\207\252\345\212\250", 0));
        manu_train->setText(QApplication::translate("Widget", "\346\211\213\345\212\250\351\200\211\346\213\251", 0));
        save_temp->setText(QApplication::translate("Widget", "\346\232\202\345\255\230", 0));
        start_work->setText(QApplication::translate("Widget", "\345\220\257\345\212\250", 0));
        cancel->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
