/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(420, 284);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        About->setMaximumSize(QSize(420, 284));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/Resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        About->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(About);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(380, 100));
        frame->setStyleSheet(QStringLiteral("image: url(:/img/Resources/dengueme.png);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(label);

        label_5 = new QLabel(About);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setOpenExternalLinks(true);
        label_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label_5);

        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(About);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setOpenExternalLinks(true);
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(About);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setOpenExternalLinks(true);
        label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(About);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(About);
        QObject::connect(pushButton, SIGNAL(clicked()), About, SLOT(close()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", 0));
        label->setText(QApplication::translate("About", "<b>DengueME</b> is developed through a partnership between LEDS/UFOP, TerraLAB/UFOP, Fiocruz and INPE.", 0));
        label_5->setText(QApplication::translate("About", "<b>Lab WebSite:</b> <a href=\"http://www.leds.ufop.br/\">http://www.leds.ufop.br/ </a>", 0));
        label_2->setText(QApplication::translate("About", "<html><head/><body><p>This software is distributed under the &quot;<span style=\" font-weight:600;\">BSD - 2 Clause</span>&quot; license. </p></body></html>", 0));
        label_4->setText(QApplication::translate("About", "<b>GitHub:</b>  <a href=\"https://github.com/ufopleds/dengueme\">https://github.com/ufopleds/dengueme </a>", 0));
        label_3->setText(QApplication::translate("About", "<b>Icons:</b> <a href=\" https://icons8.com/web-app/\">https://icons8.com</a>", 0));
        pushButton->setText(QApplication::translate("About", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
