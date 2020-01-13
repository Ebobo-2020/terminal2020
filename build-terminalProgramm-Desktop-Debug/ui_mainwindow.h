/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_6;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(511, 254);
        MainWindow->setInputMethodHints(Qt::ImhNone);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(39);
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 0, 0, 1, 1);

        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy2);
        listWidget->setTabKeyNavigation(false);

        gridLayout->addWidget(listWidget, 0, 1, 3, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QFont font1;
        font1.setPointSize(20);
        pushButton_5->setFont(font1);

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy3);
        pushButton_3->setFont(font1);

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\342\206\221", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\342\206\221", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\342\206\223", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\342\206\223", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "cancl", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
