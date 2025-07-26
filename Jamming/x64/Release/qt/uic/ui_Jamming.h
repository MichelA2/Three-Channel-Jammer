/********************************************************************************
** Form generated from reading UI file 'Jamming.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAMMING_H
#define UI_JAMMING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JammingClass
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QPushButton *pushButton_Graph;
    QPushButton *pushButton_Operational;
    QPushButton *pushButton_Tecnical;
    QLabel *label_backGround;
    QPushButton *pushButton_Information;
    QWidget *page;
    QPushButton *pushButton_StopTransmissionGPS;
    QPushButton *pushButton_StartTransmissionGPS;
    QPushButton *pushButton_StopTransmissionWIFI24;
    QPushButton *pushButton_StartTransmissionWIFI24;
    QPushButton *pushButton_EXIT;
    QPushButton *pushButton_StopTransmissionWIFI58;
    QPushButton *pushButton_StartTransmissionWIFI58;
    QLabel *label_StartTransmissionGPS;
    QLabel *label_StartTransmissionWIFI24;
    QLabel *label_StartTransmissionWIFI58;
    QLabel *label_transmissionGPS;
    QLabel *label_transmission24;
    QLabel *label_transmission58;
    QWidget *page_3;
    QPushButton *pushButton_ConfigureLime;
    QPushButton *pushButton_ConnectLimeSDR;
    QPushButton *pushButton_ConfigureLMX2492EVM24;
    QPushButton *pushButton_ConnectLMX2492EVM24;
    QPushButton *pushButton_EXIT_2;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_LMX2492EVM;
    QLabel *label_LimeSDR;
    QLabel *label_Diagram;
    QLabel *label_LMX2492EVM58;
    QFrame *line_4;
    QPushButton *pushButton_ConnectLMX2492EVM58;
    QLabel *label_3;
    QSpinBox *spinBox_LIME_StopFreq;
    QSpinBox *spinBox_LIME_StartFreq;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinBox_StartFrequencyVCO;
    QSpinBox *spinBox_StopFrequencyVCO;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinBox_SweepDuration;
    QSpinBox *spinBox_StartFrequencyVCO58;
    QLabel *label_8;
    QSpinBox *spinBox_SweepDuration58;
    QSpinBox *spinBox_StopFrequencyVCO58;
    QPushButton *pushButton_ConfigureLMX2492EVM58;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_tipGPS;
    QPushButton *pushButton_tip24;
    QPushButton *pushButton_tip58;
    QLabel *label_tipGPS;
    QLabel *label_tip24;
    QLabel *label_tip58;
    QWidget *page_4;
    QPushButton *pushButton_EXIT_3;
    QPushButton *pushButton_TriangleSweep24;
    QPushButton *pushButton_TriangleSweep58;
    QPushButton *pushButton_FFT24;
    QPushButton *pushButton_FFT58;
    QPushButton *pushButton_FFTGPS;
    QPushButton *pushButton_noiseGPS;
    QStackedWidget *stackedWidgetGraph;
    QWidget *page_11;
    QFrame *horizontalFrameTriangle24;
    QHBoxLayout *horizontalLayout;
    QWidget *page_12;
    QFrame *horizontalFrameFFT24;
    QHBoxLayout *horizontalLayout_3;
    QWidget *page_13;
    QFrame *horizontalFrameTriangle58;
    QHBoxLayout *horizontalLayout_4;
    QWidget *page_14;
    QFrame *horizontalFrameFFT58;
    QHBoxLayout *horizontalLayout_5;
    QWidget *page_6;
    QFrame *horizontalFrameNoiseGPS;
    QHBoxLayout *horizontalLayout_6;
    QWidget *page_7;
    QFrame *horizontalFrameFFTGPS;
    QHBoxLayout *horizontalLayout_7;
    QWidget *page_5;
    QLabel *label_info;
    QPushButton *pushButton_EXIT_4;
    QLabel *label_info_2;
    QLabel *label_info_3;
    QLabel *label_info_4;
    QLabel *label_info_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JammingClass)
    {
        if (JammingClass->objectName().isEmpty())
            JammingClass->setObjectName("JammingClass");
        JammingClass->setEnabled(true);
        JammingClass->resize(1417, 831);
        JammingClass->setAutoFillBackground(false);
        JammingClass->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        centralWidget = new QWidget(JammingClass);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1401, 781));
        stackedWidget->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_Graph = new QPushButton(page_2);
        pushButton_Graph->setObjectName("pushButton_Graph");
        pushButton_Graph->setGeometry(QRect(900, 500, 200, 70));
        pushButton_Graph->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        pushButton_Graph->setIcon(icon);
        pushButton_Operational = new QPushButton(page_2);
        pushButton_Operational->setObjectName("pushButton_Operational");
        pushButton_Operational->setGeometry(QRect(300, 500, 200, 70));
        pushButton_Operational->setAutoFillBackground(false);
        pushButton_Operational->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::NetworkWireless));
        pushButton_Operational->setIcon(icon1);
        pushButton_Operational->setIconSize(QSize(16, 16));
        pushButton_Operational->setAutoRepeat(false);
        pushButton_Operational->setFlat(false);
        pushButton_Tecnical = new QPushButton(page_2);
        pushButton_Tecnical->setObjectName("pushButton_Tecnical");
        pushButton_Tecnical->setGeometry(QRect(600, 500, 200, 70));
        pushButton_Tecnical->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentProperties));
        pushButton_Tecnical->setIcon(icon2);
        label_backGround = new QLabel(page_2);
        label_backGround->setObjectName("label_backGround");
        label_backGround->setGeometry(QRect(390, 80, 600, 310));
        label_backGround->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        pushButton_Information = new QPushButton(page_2);
        pushButton_Information->setObjectName("pushButton_Information");
        pushButton_Information->setGeometry(QRect(650, 680, 101, 31));
        pushButton_Information->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    border-radius: 15px;\n"
"    padding: 4px 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName("page");
        pushButton_StopTransmissionGPS = new QPushButton(page);
        pushButton_StopTransmissionGPS->setObjectName("pushButton_StopTransmissionGPS");
        pushButton_StopTransmissionGPS->setGeometry(QRect(940, 610, 241, 41));
        pushButton_StopTransmissionGPS->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_StartTransmissionGPS = new QPushButton(page);
        pushButton_StartTransmissionGPS->setObjectName("pushButton_StartTransmissionGPS");
        pushButton_StartTransmissionGPS->setGeometry(QRect(940, 560, 241, 41));
        pushButton_StartTransmissionGPS->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_StopTransmissionWIFI24 = new QPushButton(page);
        pushButton_StopTransmissionWIFI24->setObjectName("pushButton_StopTransmissionWIFI24");
        pushButton_StopTransmissionWIFI24->setGeometry(QRect(570, 610, 241, 41));
        pushButton_StopTransmissionWIFI24->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_StartTransmissionWIFI24 = new QPushButton(page);
        pushButton_StartTransmissionWIFI24->setObjectName("pushButton_StartTransmissionWIFI24");
        pushButton_StartTransmissionWIFI24->setGeometry(QRect(570, 560, 241, 41));
        pushButton_StartTransmissionWIFI24->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_EXIT = new QPushButton(page);
        pushButton_EXIT->setObjectName("pushButton_EXIT");
        pushButton_EXIT->setGeometry(QRect(10, 730, 51, 41));
        pushButton_EXIT->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 10px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_StopTransmissionWIFI58 = new QPushButton(page);
        pushButton_StopTransmissionWIFI58->setObjectName("pushButton_StopTransmissionWIFI58");
        pushButton_StopTransmissionWIFI58->setGeometry(QRect(190, 610, 241, 41));
        pushButton_StopTransmissionWIFI58->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_StartTransmissionWIFI58 = new QPushButton(page);
        pushButton_StartTransmissionWIFI58->setObjectName("pushButton_StartTransmissionWIFI58");
        pushButton_StartTransmissionWIFI58->setGeometry(QRect(190, 560, 241, 41));
        pushButton_StartTransmissionWIFI58->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        label_StartTransmissionGPS = new QLabel(page);
        label_StartTransmissionGPS->setObjectName("label_StartTransmissionGPS");
        label_StartTransmissionGPS->setGeometry(QRect(910, 30, 301, 471));
        label_StartTransmissionWIFI24 = new QLabel(page);
        label_StartTransmissionWIFI24->setObjectName("label_StartTransmissionWIFI24");
        label_StartTransmissionWIFI24->setGeometry(QRect(540, 30, 301, 471));
        label_StartTransmissionWIFI58 = new QLabel(page);
        label_StartTransmissionWIFI58->setObjectName("label_StartTransmissionWIFI58");
        label_StartTransmissionWIFI58->setGeometry(QRect(160, 30, 301, 471));
        label_transmissionGPS = new QLabel(page);
        label_transmissionGPS->setObjectName("label_transmissionGPS");
        label_transmissionGPS->setGeometry(QRect(950, 520, 221, 30));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_transmissionGPS->setFont(font);
        label_transmissionGPS->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_transmissionGPS->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: bold;"));
        label_transmissionGPS->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_transmission24 = new QLabel(page);
        label_transmission24->setObjectName("label_transmission24");
        label_transmission24->setGeometry(QRect(580, 520, 221, 30));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_transmission24->setFont(font1);
        label_transmission24->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: bold;"));
        label_transmission24->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_transmission58 = new QLabel(page);
        label_transmission58->setObjectName("label_transmission58");
        label_transmission58->setGeometry(QRect(200, 520, 221, 30));
        label_transmission58->setFont(font1);
        label_transmission58->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: bold;"));
        label_transmission58->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        pushButton_ConfigureLime = new QPushButton(page_3);
        pushButton_ConfigureLime->setObjectName("pushButton_ConfigureLime");
        pushButton_ConfigureLime->setGeometry(QRect(20, 120, 201, 41));
        QFont font2;
        font2.setBold(true);
        pushButton_ConfigureLime->setFont(font2);
        pushButton_ConfigureLime->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_ConnectLimeSDR = new QPushButton(page_3);
        pushButton_ConnectLimeSDR->setObjectName("pushButton_ConnectLimeSDR");
        pushButton_ConnectLimeSDR->setGeometry(QRect(290, 120, 201, 41));
        pushButton_ConnectLimeSDR->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_ConnectLimeSDR->setCheckable(false);
        pushButton_ConfigureLMX2492EVM24 = new QPushButton(page_3);
        pushButton_ConfigureLMX2492EVM24->setObjectName("pushButton_ConfigureLMX2492EVM24");
        pushButton_ConfigureLMX2492EVM24->setGeometry(QRect(20, 370, 201, 41));
        pushButton_ConfigureLMX2492EVM24->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_ConnectLMX2492EVM24 = new QPushButton(page_3);
        pushButton_ConnectLMX2492EVM24->setObjectName("pushButton_ConnectLMX2492EVM24");
        pushButton_ConnectLMX2492EVM24->setGeometry(QRect(290, 370, 201, 41));
        pushButton_ConnectLMX2492EVM24->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_EXIT_2 = new QPushButton(page_3);
        pushButton_EXIT_2->setObjectName("pushButton_EXIT_2");
        pushButton_EXIT_2->setGeometry(QRect(10, 730, 51, 41));
        pushButton_EXIT_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 10px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        line_2 = new QFrame(page_3);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(490, 380, 30, 30));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        line_2->setFont(font3);
        line_2->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"font-weight: bold;"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(page_3);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(490, 130, 30, 30));
        line_3->setFont(font3);
        line_3->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"font-weight: bold;"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_LMX2492EVM = new QLabel(page_3);
        label_LMX2492EVM->setObjectName("label_LMX2492EVM");
        label_LMX2492EVM->setGeometry(QRect(520, 380, 101, 30));
        label_LMX2492EVM->setFont(font1);
        label_LMX2492EVM->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: bold;"));
        label_LimeSDR = new QLabel(page_3);
        label_LimeSDR->setObjectName("label_LimeSDR");
        label_LimeSDR->setGeometry(QRect(520, 130, 101, 30));
        label_LimeSDR->setFont(font1);
        label_LimeSDR->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: bold;"));
        label_Diagram = new QLabel(page_3);
        label_Diagram->setObjectName("label_Diagram");
        label_Diagram->setGeometry(QRect(780, 140, 491, 471));
        label_Diagram->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_LMX2492EVM58 = new QLabel(page_3);
        label_LMX2492EVM58->setObjectName("label_LMX2492EVM58");
        label_LMX2492EVM58->setGeometry(QRect(520, 630, 101, 30));
        label_LMX2492EVM58->setFont(font1);
        label_LMX2492EVM58->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: bold;"));
        line_4 = new QFrame(page_3);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(490, 630, 30, 30));
        line_4->setFont(font3);
        line_4->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"font-weight: bold;"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_ConnectLMX2492EVM58 = new QPushButton(page_3);
        pushButton_ConnectLMX2492EVM58->setObjectName("pushButton_ConnectLMX2492EVM58");
        pushButton_ConnectLMX2492EVM58->setGeometry(QRect(290, 620, 201, 41));
        pushButton_ConnectLMX2492EVM58->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 66, 171, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: bold;"));
        spinBox_LIME_StopFreq = new QSpinBox(page_3);
        spinBox_LIME_StopFreq->setObjectName("spinBox_LIME_StopFreq");
        spinBox_LIME_StopFreq->setGeometry(QRect(30, 90, 88, 23));
        spinBox_LIME_StopFreq->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"\n"
""));
        spinBox_LIME_StopFreq->setMinimum(1);
        spinBox_LIME_StopFreq->setMaximum(3500);
        spinBox_LIME_StopFreq->setValue(1587);
        spinBox_LIME_StopFreq->setDisplayIntegerBase(10);
        spinBox_LIME_StartFreq = new QSpinBox(page_3);
        spinBox_LIME_StartFreq->setObjectName("spinBox_LIME_StartFreq");
        spinBox_LIME_StartFreq->setGeometry(QRect(30, 40, 88, 23));
        spinBox_LIME_StartFreq->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"\n"
""));
        spinBox_LIME_StartFreq->setMinimum(1);
        spinBox_LIME_StartFreq->setMaximum(3500);
        spinBox_LIME_StartFreq->setValue(1563);
        spinBox_LIME_StartFreq->setDisplayIntegerBase(10);
        label_4 = new QLabel(page_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 16, 181, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: bold;"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 215, 171, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: bold;"));
        spinBox_StartFrequencyVCO = new QSpinBox(page_3);
        spinBox_StartFrequencyVCO->setObjectName("spinBox_StartFrequencyVCO");
        spinBox_StartFrequencyVCO->setGeometry(QRect(30, 240, 88, 23));
        spinBox_StartFrequencyVCO->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"\n"
""));
        spinBox_StartFrequencyVCO->setMinimum(2328);
        spinBox_StartFrequencyVCO->setMaximum(2536);
        spinBox_StartFrequencyVCO->setValue(2400);
        spinBox_StopFrequencyVCO = new QSpinBox(page_3);
        spinBox_StopFrequencyVCO->setObjectName("spinBox_StopFrequencyVCO");
        spinBox_StopFrequencyVCO->setGeometry(QRect(30, 290, 88, 23));
        spinBox_StopFrequencyVCO->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"\n"
""));
        spinBox_StopFrequencyVCO->setMinimum(2328);
        spinBox_StopFrequencyVCO->setMaximum(2536);
        spinBox_StopFrequencyVCO->setValue(2485);
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 265, 171, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 315, 181, 21));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: bold;"));
        spinBox_SweepDuration = new QSpinBox(page_3);
        spinBox_SweepDuration->setObjectName("spinBox_SweepDuration");
        spinBox_SweepDuration->setGeometry(QRect(30, 340, 88, 23));
        spinBox_SweepDuration->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"\n"
""));
        spinBox_SweepDuration->setMinimum(60);
        spinBox_SweepDuration->setMaximum(1000);
        spinBox_SweepDuration->setValue(100);
        spinBox_SweepDuration->setDisplayIntegerBase(10);
        spinBox_StartFrequencyVCO58 = new QSpinBox(page_3);
        spinBox_StartFrequencyVCO58->setObjectName("spinBox_StartFrequencyVCO58");
        spinBox_StartFrequencyVCO58->setGeometry(QRect(30, 490, 88, 23));
        spinBox_StartFrequencyVCO58->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"\n"
""));
        spinBox_StartFrequencyVCO58->setMinimum(5700);
        spinBox_StartFrequencyVCO58->setMaximum(5900);
        spinBox_StartFrequencyVCO58->setValue(5725);
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 515, 181, 21));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: bold;"));
        spinBox_SweepDuration58 = new QSpinBox(page_3);
        spinBox_SweepDuration58->setObjectName("spinBox_SweepDuration58");
        spinBox_SweepDuration58->setGeometry(QRect(30, 590, 88, 23));
        spinBox_SweepDuration58->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"\n"
""));
        spinBox_SweepDuration58->setMinimum(60);
        spinBox_SweepDuration58->setMaximum(1000);
        spinBox_SweepDuration58->setValue(100);
        spinBox_SweepDuration58->setDisplayIntegerBase(10);
        spinBox_StopFrequencyVCO58 = new QSpinBox(page_3);
        spinBox_StopFrequencyVCO58->setObjectName("spinBox_StopFrequencyVCO58");
        spinBox_StopFrequencyVCO58->setGeometry(QRect(30, 540, 88, 23));
        spinBox_StopFrequencyVCO58->setStyleSheet(QString::fromUtf8("background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"\n"
""));
        spinBox_StopFrequencyVCO58->setMinimum(5700);
        spinBox_StopFrequencyVCO58->setMaximum(5900);
        spinBox_StopFrequencyVCO58->setValue(5850);
        pushButton_ConfigureLMX2492EVM58 = new QPushButton(page_3);
        pushButton_ConfigureLMX2492EVM58->setObjectName("pushButton_ConfigureLMX2492EVM58");
        pushButton_ConfigureLMX2492EVM58->setGeometry(QRect(20, 620, 201, 41));
        pushButton_ConfigureLMX2492EVM58->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 566, 181, 20));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: bold;"));
        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 465, 181, 21));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-weight: bold;"));
        pushButton_tipGPS = new QPushButton(page_3);
        pushButton_tipGPS->setObjectName("pushButton_tipGPS");
        pushButton_tipGPS->setGeometry(QRect(230, 130, 21, 21));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("tooltip.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_tipGPS->setIcon(icon3);
        pushButton_tipGPS->setIconSize(QSize(20, 20));
        pushButton_tip24 = new QPushButton(page_3);
        pushButton_tip24->setObjectName("pushButton_tip24");
        pushButton_tip24->setGeometry(QRect(230, 380, 21, 21));
        pushButton_tip24->setIcon(icon3);
        pushButton_tip24->setIconSize(QSize(20, 20));
        pushButton_tip58 = new QPushButton(page_3);
        pushButton_tip58->setObjectName("pushButton_tip58");
        pushButton_tip58->setGeometry(QRect(230, 630, 21, 21));
        pushButton_tip58->setIcon(icon3);
        pushButton_tip58->setIconSize(QSize(20, 20));
        label_tipGPS = new QLabel(page_3);
        label_tipGPS->setObjectName("label_tipGPS");
        label_tipGPS->setGeometry(QRect(260, 130, 321, 231));
        label_tipGPS->setStyleSheet(QString::fromUtf8("\n"
"background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
""));
        label_tip24 = new QLabel(page_3);
        label_tip24->setObjectName("label_tip24");
        label_tip24->setGeometry(QRect(260, 380, 361, 91));
        label_tip24->setStyleSheet(QString::fromUtf8("\n"
"background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
""));
        label_tip58 = new QLabel(page_3);
        label_tip58->setObjectName("label_tip58");
        label_tip58->setGeometry(QRect(260, 630, 361, 91));
        label_tip58->setStyleSheet(QString::fromUtf8("\n"
"background-color: #C0C0C0;\n"
"    color: black;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
""));
        stackedWidget->addWidget(page_3);
        pushButton_ConfigureLime->raise();
        pushButton_ConnectLimeSDR->raise();
        pushButton_ConfigureLMX2492EVM24->raise();
        pushButton_ConnectLMX2492EVM24->raise();
        pushButton_EXIT_2->raise();
        line_2->raise();
        line_3->raise();
        label_LMX2492EVM->raise();
        label_LimeSDR->raise();
        label_LMX2492EVM58->raise();
        line_4->raise();
        pushButton_ConnectLMX2492EVM58->raise();
        label_3->raise();
        spinBox_LIME_StopFreq->raise();
        spinBox_LIME_StartFreq->raise();
        label_4->raise();
        label_5->raise();
        spinBox_StartFrequencyVCO->raise();
        spinBox_StopFrequencyVCO->raise();
        label_6->raise();
        label_7->raise();
        spinBox_SweepDuration->raise();
        spinBox_StartFrequencyVCO58->raise();
        label_8->raise();
        spinBox_SweepDuration58->raise();
        spinBox_StopFrequencyVCO58->raise();
        pushButton_ConfigureLMX2492EVM58->raise();
        label_9->raise();
        label_10->raise();
        label_Diagram->raise();
        pushButton_tipGPS->raise();
        pushButton_tip24->raise();
        pushButton_tip58->raise();
        label_tipGPS->raise();
        label_tip24->raise();
        label_tip58->raise();
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        pushButton_EXIT_3 = new QPushButton(page_4);
        pushButton_EXIT_3->setObjectName("pushButton_EXIT_3");
        pushButton_EXIT_3->setGeometry(QRect(10, 730, 51, 41));
        pushButton_EXIT_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 10px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_TriangleSweep24 = new QPushButton(page_4);
        pushButton_TriangleSweep24->setObjectName("pushButton_TriangleSweep24");
        pushButton_TriangleSweep24->setGeometry(QRect(110, 230, 221, 41));
        pushButton_TriangleSweep24->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_TriangleSweep58 = new QPushButton(page_4);
        pushButton_TriangleSweep58->setObjectName("pushButton_TriangleSweep58");
        pushButton_TriangleSweep58->setGeometry(QRect(110, 330, 221, 41));
        pushButton_TriangleSweep58->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_FFT24 = new QPushButton(page_4);
        pushButton_FFT24->setObjectName("pushButton_FFT24");
        pushButton_FFT24->setGeometry(QRect(110, 280, 221, 41));
        pushButton_FFT24->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_FFT58 = new QPushButton(page_4);
        pushButton_FFT58->setObjectName("pushButton_FFT58");
        pushButton_FFT58->setGeometry(QRect(110, 380, 221, 41));
        pushButton_FFT58->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_FFTGPS = new QPushButton(page_4);
        pushButton_FFTGPS->setObjectName("pushButton_FFTGPS");
        pushButton_FFTGPS->setGeometry(QRect(110, 480, 221, 41));
        pushButton_FFTGPS->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        pushButton_noiseGPS = new QPushButton(page_4);
        pushButton_noiseGPS->setObjectName("pushButton_noiseGPS");
        pushButton_noiseGPS->setGeometry(QRect(110, 430, 221, 41));
        pushButton_noiseGPS->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        stackedWidgetGraph = new QStackedWidget(page_4);
        stackedWidgetGraph->setObjectName("stackedWidgetGraph");
        stackedWidgetGraph->setGeometry(QRect(430, 110, 831, 641));
        stackedWidgetGraph->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        horizontalFrameTriangle24 = new QFrame(page_11);
        horizontalFrameTriangle24->setObjectName("horizontalFrameTriangle24");
        horizontalFrameTriangle24->setEnabled(true);
        horizontalFrameTriangle24->setGeometry(QRect(20, 30, 680, 500));
        horizontalLayout = new QHBoxLayout(horizontalFrameTriangle24);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidgetGraph->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName("page_12");
        horizontalFrameFFT24 = new QFrame(page_12);
        horizontalFrameFFT24->setObjectName("horizontalFrameFFT24");
        horizontalFrameFFT24->setGeometry(QRect(20, 30, 680, 500));
        horizontalLayout_3 = new QHBoxLayout(horizontalFrameFFT24);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        stackedWidgetGraph->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        horizontalFrameTriangle58 = new QFrame(page_13);
        horizontalFrameTriangle58->setObjectName("horizontalFrameTriangle58");
        horizontalFrameTriangle58->setGeometry(QRect(20, 30, 680, 500));
        horizontalLayout_4 = new QHBoxLayout(horizontalFrameTriangle58);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        stackedWidgetGraph->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName("page_14");
        horizontalFrameFFT58 = new QFrame(page_14);
        horizontalFrameFFT58->setObjectName("horizontalFrameFFT58");
        horizontalFrameFFT58->setGeometry(QRect(20, 30, 680, 500));
        horizontalLayout_5 = new QHBoxLayout(horizontalFrameFFT58);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        stackedWidgetGraph->addWidget(page_14);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        horizontalFrameNoiseGPS = new QFrame(page_6);
        horizontalFrameNoiseGPS->setObjectName("horizontalFrameNoiseGPS");
        horizontalFrameNoiseGPS->setGeometry(QRect(20, 30, 680, 500));
        horizontalLayout_6 = new QHBoxLayout(horizontalFrameNoiseGPS);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        stackedWidgetGraph->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        horizontalFrameFFTGPS = new QFrame(page_7);
        horizontalFrameFFTGPS->setObjectName("horizontalFrameFFTGPS");
        horizontalFrameFFTGPS->setGeometry(QRect(20, 30, 680, 500));
        horizontalLayout_7 = new QHBoxLayout(horizontalFrameFFTGPS);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        stackedWidgetGraph->addWidget(page_7);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_info = new QLabel(page_5);
        label_info->setObjectName("label_info");
        label_info->setGeometry(QRect(250, 30, 911, 361));
        label_info->setStyleSheet(QString::fromUtf8("\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
""));
        pushButton_EXIT_4 = new QPushButton(page_5);
        pushButton_EXIT_4->setObjectName("pushButton_EXIT_4");
        pushButton_EXIT_4->setGeometry(QRect(10, 730, 51, 41));
        pushButton_EXIT_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 10px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}"));
        label_info_2 = new QLabel(page_5);
        label_info_2->setObjectName("label_info_2");
        label_info_2->setGeometry(QRect(70, 400, 561, 191));
        label_info_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
""));
        label_info_3 = new QLabel(page_5);
        label_info_3->setObjectName("label_info_3");
        label_info_3->setGeometry(QRect(760, 400, 591, 191));
        label_info_3->setStyleSheet(QString::fromUtf8("\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
""));
        label_info_4 = new QLabel(page_5);
        label_info_4->setObjectName("label_info_4");
        label_info_4->setGeometry(QRect(940, 600, 241, 141));
        label_info_4->setStyleSheet(QString::fromUtf8(""));
        label_info_4->setPixmap(QPixmap(QString::fromUtf8("limesdr.png")));
        label_info_4->setScaledContents(true);
        label_info_5 = new QLabel(page_5);
        label_info_5->setObjectName("label_info_5");
        label_info_5->setGeometry(QRect(240, 600, 221, 151));
        label_info_5->setStyleSheet(QString::fromUtf8(""));
        label_info_5->setPixmap(QPixmap(QString::fromUtf8("lmx2492evm.png")));
        label_info_5->setScaledContents(true);
        stackedWidget->addWidget(page_5);
        JammingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(JammingClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1417, 33));
        JammingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JammingClass);
        mainToolBar->setObjectName("mainToolBar");
        JammingClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(JammingClass);
        statusBar->setObjectName("statusBar");
        JammingClass->setStatusBar(statusBar);

        retranslateUi(JammingClass);

        stackedWidget->setCurrentIndex(3);
        pushButton_Operational->setDefault(false);
        stackedWidgetGraph->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(JammingClass);
    } // setupUi

    void retranslateUi(QMainWindow *JammingClass)
    {
        JammingClass->setWindowTitle(QCoreApplication::translate("JammingClass", "Jamming", nullptr));
        pushButton_Graph->setText(QCoreApplication::translate("JammingClass", "Graphs", nullptr));
        pushButton_Operational->setText(QCoreApplication::translate("JammingClass", "Operational", nullptr));
        pushButton_Tecnical->setText(QCoreApplication::translate("JammingClass", "Technical", nullptr));
        label_backGround->setText(QCoreApplication::translate("JammingClass", "TextLabel", nullptr));
        pushButton_Information->setText(QCoreApplication::translate("JammingClass", "Information", nullptr));
        pushButton_StopTransmissionGPS->setText(QCoreApplication::translate("JammingClass", "Stop Transmission", nullptr));
        pushButton_StartTransmissionGPS->setText(QCoreApplication::translate("JammingClass", "Start Transmission", nullptr));
        pushButton_StopTransmissionWIFI24->setText(QCoreApplication::translate("JammingClass", "Stop Transmission", nullptr));
        pushButton_StartTransmissionWIFI24->setText(QCoreApplication::translate("JammingClass", "Start Transmission", nullptr));
        pushButton_EXIT->setText(QCoreApplication::translate("JammingClass", "EXIT", nullptr));
        pushButton_StopTransmissionWIFI58->setText(QCoreApplication::translate("JammingClass", "Stop Transmission", nullptr));
        pushButton_StartTransmissionWIFI58->setText(QCoreApplication::translate("JammingClass", "Start Transmission", nullptr));
        label_StartTransmissionGPS->setText(QCoreApplication::translate("JammingClass", "TextLabel", nullptr));
        label_StartTransmissionWIFI24->setText(QCoreApplication::translate("JammingClass", "TextLabel", nullptr));
        label_StartTransmissionWIFI58->setText(QCoreApplication::translate("JammingClass", "TextLabel", nullptr));
        label_transmissionGPS->setText(QCoreApplication::translate("JammingClass", "Disconnected", nullptr));
        label_transmission24->setText(QCoreApplication::translate("JammingClass", "Disconnected", nullptr));
        label_transmission58->setText(QCoreApplication::translate("JammingClass", "Disconnected", nullptr));
        pushButton_ConfigureLime->setText(QCoreApplication::translate("JammingClass", "Configure  LimeSDR Mini 2", nullptr));
        pushButton_ConnectLimeSDR->setText(QCoreApplication::translate("JammingClass", "Connect to LimeSDR Mini 2.0", nullptr));
        pushButton_ConfigureLMX2492EVM24->setText(QCoreApplication::translate("JammingClass", "Configure  LMX2492EVM 2.4", nullptr));
        pushButton_ConnectLMX2492EVM24->setText(QCoreApplication::translate("JammingClass", "Connect to LMX2492EVM 2.4", nullptr));
        pushButton_EXIT_2->setText(QCoreApplication::translate("JammingClass", "EXIT", nullptr));
        label_LMX2492EVM->setText(QCoreApplication::translate("JammingClass", "Disconnected", nullptr));
        label_LimeSDR->setText(QCoreApplication::translate("JammingClass", "Disconnected", nullptr));
        label_Diagram->setText(QString());
        label_LMX2492EVM58->setText(QCoreApplication::translate("JammingClass", "Disconnected", nullptr));
        pushButton_ConnectLMX2492EVM58->setText(QCoreApplication::translate("JammingClass", "Connect to LMX2492EVM 5.8", nullptr));
        label_3->setText(QCoreApplication::translate("JammingClass", "Stop Frequency [MHz]", nullptr));
        label_4->setText(QCoreApplication::translate("JammingClass", "Start Frequancy [MHz]", nullptr));
        label_5->setText(QCoreApplication::translate("JammingClass", "Start Frequency [MHz]", nullptr));
        label_6->setStyleSheet(QCoreApplication::translate("JammingClass", "color: black;\n"
"font-weight: bold;", nullptr));
        label_6->setText(QCoreApplication::translate("JammingClass", "Stop Frequency [MHz] ", nullptr));
        label_7->setText(QCoreApplication::translate("JammingClass", "Sweep Duration [usec]", nullptr));
        label_8->setText(QCoreApplication::translate("JammingClass", "Stop Frequency  [MHz]", nullptr));
        pushButton_ConfigureLMX2492EVM58->setText(QCoreApplication::translate("JammingClass", "Configure  LMX2492EVM 5.8", nullptr));
        label_9->setText(QCoreApplication::translate("JammingClass", "Sweep Duration [usec]", nullptr));
        label_10->setText(QCoreApplication::translate("JammingClass", "Start Frequency  [MHz]", nullptr));
        pushButton_tipGPS->setText(QString());
        pushButton_tip24->setText(QString());
        pushButton_tip58->setText(QString());
        label_tipGPS->setText(QCoreApplication::translate("JammingClass", "<html><head/><body><p><span style=\" font-size:8pt; text-decoration: underline;\">Tips<br/></span><span style=\" font-size:8pt;\">Note: D</span><span style=\" font-size:8pt;\">o not configure a bandwidth greater than 40 MHz. <br/>This is the maximum supported bandwidth of the system. <br/>Supported GPS Frequencies\302\240for\302\240Jamming:</span><span style=\" font-size:8pt; font-weight:400;\"><br/>L1 \342\200\223 1563 to 1587 MHz<br/>L5 \342\200\223 1164 to 1189 MHz<br/>L2 \342\200\223 1217 to 1237 MHz<br/>E1 (Galileo) \342\200\223 1559 to 1591 MHz<br/>E5a (Galileo) \342\200\223 1164 to 1189 MHz<br/>E5b (Galileo) \342\200\223 1189 to 1214 MHz<br/>E6 (Galileo) \342\200\223 1260 to 1300 MHz<br/>G1 (GLONASS) \342\200\223 1590 to 1610 MHz<br/>G2 (GLONASS) \342\200\223 1236 to 1256 MHz<br/>G3 (GLONASS) \342\200\223 1207\302\240to\302\2401227 MHz</span></p><p><span style=\" font-size:8pt; font-weight:400;\"><br/></span></p></body></html>", nullptr));
        label_tip24->setText(QCoreApplication::translate("JammingClass", "<html><head/><body><p><span style=\" font-size:8pt; text-decoration: underline;\">Tips<br/></span><span style=\" font-size:8pt;\">Frequency Range: </span><span style=\" font-size:8pt; font-weight:400;\"><br/>The system supports configuration only within 2328 to 2536 MHz.<br/></span><span style=\" font-size:8pt;\">Sweep Time Limit:</span><span style=\" font-size:8pt; font-weight:400;\"><br/>Sweep duration must be 60 \302\265s or higher.</span></p></body></html>", nullptr));
        label_tip58->setText(QCoreApplication::translate("JammingClass", "<html><head/><body><p><span style=\" font-size:8pt; text-decoration: underline;\">Tips<br/></span><span style=\" font-size:8pt;\">Frequency Range: </span><span style=\" font-size:8pt; font-weight:400;\"><br/>The system supports configuration only within 5700 to 5900 MHz.<br/></span><span style=\" font-size:8pt;\">Sweep Time Limit:</span><span style=\" font-size:8pt; font-weight:400;\"><br/>Sweep duration must be 60 \302\265s or higher.</span></p></body></html>", nullptr));
        pushButton_EXIT_3->setText(QCoreApplication::translate("JammingClass", "EXIT", nullptr));
        pushButton_TriangleSweep24->setText(QCoreApplication::translate("JammingClass", "Sweep Triangle 2.4GHz", nullptr));
        pushButton_TriangleSweep58->setText(QCoreApplication::translate("JammingClass", "Sweep Triangle 5.8GHz", nullptr));
        pushButton_FFT24->setText(QCoreApplication::translate("JammingClass", "Frequency Domain 2.4 GHz", nullptr));
        pushButton_FFT58->setText(QCoreApplication::translate("JammingClass", "Frequency Domain 5.8 GHz", nullptr));
        pushButton_FFTGPS->setText(QCoreApplication::translate("JammingClass", "Frequency Domain GPS", nullptr));
        pushButton_noiseGPS->setText(QCoreApplication::translate("JammingClass", "Gaosian Noise", nullptr));
        horizontalFrameTriangle24->setStyleSheet(QCoreApplication::translate("JammingClass", "\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}", nullptr));
        horizontalFrameFFT24->setStyleSheet(QCoreApplication::translate("JammingClass", "\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}", nullptr));
        horizontalFrameTriangle58->setStyleSheet(QCoreApplication::translate("JammingClass", "\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}", nullptr));
        horizontalFrameFFT58->setStyleSheet(QCoreApplication::translate("JammingClass", "\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}", nullptr));
        horizontalFrameNoiseGPS->setStyleSheet(QCoreApplication::translate("JammingClass", "\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}", nullptr));
        horizontalFrameFFTGPS->setStyleSheet(QCoreApplication::translate("JammingClass", "\n"
"QPushButton {\n"
"background-color: black;\n"
"    color: white;;\n"
"    font-size: 15px;\n"
"    font-weight: bold;\n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d6d6d6;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #e8e3e3;\n"
"}", nullptr));
        label_info->setText(QCoreApplication::translate("JammingClass", "<html><head/><body><p><span style=\" text-decoration: underline;\">Welcome to the Graphical User Interface of the Three-Channel Drone Jammer</span></p><p><span style=\" font-weight:400;\">This interface is designed to give you full control over our drone jamming system, supporting<br/>interaction and feedback across all three channels: 2.4 GHz, 5.8 GHz, and GPS.</span></p><p><span style=\" font-weight:400;\">The UI is divided into three main sections:</span></p><p>Operational \342\200\223 <span style=\" font-weight:400;\">Control the system\342\200\231s transmission status.<br/>You can start or stop each channel individually.</span></p><p>Technical \342\200\223 <span style=\" font-weight:400;\">Configure the system to match your specific jamming requirements.<br/>This section allows adjustment of all key parameters.</span></p><p>Graphs \342\200\223 <span style=\" font-weight:400;\">View signal visualization for each jamming channel.</span></p><p>Use this interface to explore, control, and fine-tune the capabil"
                        "ities of your\302\240jamming\302\240system.</p></body></html>", nullptr));
        pushButton_EXIT_4->setText(QCoreApplication::translate("JammingClass", "EXIT", nullptr));
        label_info_2->setText(QCoreApplication::translate("JammingClass", "<html><head/><body><p>LMX2492EVM</p><p><span style=\" font-weight:400;\">is a signal-generating board that produces fast, precise<br/>frequency sweeps.<br/>In our system, it is used to disrupt drone communication<br/>by sweeping strong signals across the 2.4 GHz and 5.8 GHz<br/>Wi-Fi\302\240bands.</span></p></body></html>", nullptr));
        label_info_3->setText(QCoreApplication::translate("JammingClass", "<html><head/><body><p>LimeSDR Mini 2.0</p><p><span style=\" font-weight:400;\">is a compact software-defined radio that can transmit and<br/>receive a wide range of wireless signals.<br/>In our system, it\342\200\231s used to block GPS reception by transmitting<br/>controlled noise across specific GPS\302\240frequencies.</span></p></body></html>", nullptr));
        label_info_4->setText(QString());
        label_info_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JammingClass: public Ui_JammingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAMMING_H
