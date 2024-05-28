/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *messageLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *startButton;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_00;
    QPushButton *pushButton_01;
    QPushButton *pushButton_02;
    QPushButton *pushButton_10;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName("widget");
        widget->resize(750, 450);
        widget->setMinimumSize(QSize(600, 0));
        widget->setMaximumSize(QSize(750, 450));
        centralwidget = new QWidget(widget);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        messageLabel = new QLabel(centralwidget);
        messageLabel->setObjectName("messageLabel");
        messageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(messageLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        leftButton = new QPushButton(centralwidget);
        leftButton->setObjectName("leftButton");
        leftButton->setMinimumSize(QSize(30, 30));

        horizontalLayout->addWidget(leftButton);

        rightButton = new QPushButton(centralwidget);
        rightButton->setObjectName("rightButton");
        rightButton->setMinimumSize(QSize(30, 30));

        horizontalLayout->addWidget(rightButton);


        verticalLayout->addLayout(horizontalLayout);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setMinimumSize(QSize(0, 38));
        startButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(startButton);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 38));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(100, 100));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        pushButton_00 = new QPushButton(tab);
        pushButton_00->setObjectName("pushButton_00");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_00->sizePolicy().hasHeightForWidth());
        pushButton_00->setSizePolicy(sizePolicy1);
        pushButton_00->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_00, 0, 0, 1, 1);

        pushButton_01 = new QPushButton(tab);
        pushButton_01->setObjectName("pushButton_01");
        sizePolicy1.setHeightForWidth(pushButton_01->sizePolicy().hasHeightForWidth());
        pushButton_01->setSizePolicy(sizePolicy1);
        pushButton_01->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_01, 0, 1, 1, 1);

        pushButton_02 = new QPushButton(tab);
        pushButton_02->setObjectName("pushButton_02");
        sizePolicy1.setHeightForWidth(pushButton_02->sizePolicy().hasHeightForWidth());
        pushButton_02->setSizePolicy(sizePolicy1);
        pushButton_02->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_02, 0, 2, 1, 1);

        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_10, 1, 0, 1, 1);

        pushButton_14 = new QPushButton(tab);
        pushButton_14->setObjectName("pushButton_14");
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setMinimumSize(QSize(100, 100));
        pushButton_14->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_14, 1, 1, 1, 1);

        pushButton_15 = new QPushButton(tab);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_15, 1, 2, 1, 1);

        pushButton_20 = new QPushButton(tab);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_20, 2, 0, 1, 1);

        pushButton_21 = new QPushButton(tab);
        pushButton_21->setObjectName("pushButton_21");
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_21, 2, 1, 1, 1);

        pushButton_22 = new QPushButton(tab);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_22, 2, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        widget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(widget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 750, 26));
        widget->setMenuBar(menubar);
        statusbar = new QStatusBar(widget);
        statusbar->setObjectName("statusbar");
        widget->setStatusBar(statusbar);

        retranslateUi(widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QMainWindow *widget)
    {
        widget->setWindowTitle(QCoreApplication::translate("widget", "Tictac", nullptr));
        label->setText(QCoreApplication::translate("widget", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270/\320\275\320\276\320\273\320\270\320\272\320\270", nullptr));
        messageLabel->setText(QCoreApplication::translate("widget", "\320\237\320\276\320\261\320\265\320\264\320\260", nullptr));
        leftButton->setText(QString());
        rightButton->setText(QString());
        startButton->setText(QCoreApplication::translate("widget", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("widget", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        pushButton_00->setText(QString());
        pushButton_01->setText(QString());
        pushButton_02->setText(QString());
        pushButton_10->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("widget", "\320\230\320\263\321\200\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("widget", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
