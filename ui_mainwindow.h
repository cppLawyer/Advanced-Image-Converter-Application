/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *filesToConvertButton;
    QLabel *selectedFiles;
    QComboBox *fileTypeChoiceButton;
    QPushButton *outputFileDirectoryButton;
    QProgressBar *operationProgress;
    QPushButton *ConvertButton;
    QLabel *MessageForUser;
    QPushButton *githubLinkButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(600, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 360));
        MainWindow->setMaximumSize(QSize(600, 493));
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setMouseTracking(true);
        MainWindow->setAcceptDrops(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(600, 450));
        centralwidget->setMaximumSize(QSize(650, 550));
        centralwidget->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        filesToConvertButton = new QPushButton(centralwidget);
        filesToConvertButton->setObjectName(QString::fromUtf8("filesToConvertButton"));
        filesToConvertButton->setGeometry(QRect(10, 0, 171, 71));
        filesToConvertButton->setAcceptDrops(false);
        filesToConvertButton->setStyleSheet(QString::fromUtf8(""));
        selectedFiles = new QLabel(centralwidget);
        selectedFiles->setObjectName(QString::fromUtf8("selectedFiles"));
        selectedFiles->setGeometry(QRect(10, 80, 321, 21));
        selectedFiles->setStyleSheet(QString::fromUtf8(""));
        fileTypeChoiceButton = new QComboBox(centralwidget);
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->addItem(QString());
        fileTypeChoiceButton->setObjectName(QString::fromUtf8("fileTypeChoiceButton"));
        fileTypeChoiceButton->setGeometry(QRect(200, 0, 181, 71));
        fileTypeChoiceButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI Symbol\";\n"
""));
        outputFileDirectoryButton = new QPushButton(centralwidget);
        outputFileDirectoryButton->setObjectName(QString::fromUtf8("outputFileDirectoryButton"));
        outputFileDirectoryButton->setGeometry(QRect(400, 0, 191, 71));
        sizePolicy.setHeightForWidth(outputFileDirectoryButton->sizePolicy().hasHeightForWidth());
        outputFileDirectoryButton->setSizePolicy(sizePolicy);
        outputFileDirectoryButton->setStyleSheet(QString::fromUtf8(""));
        operationProgress = new QProgressBar(centralwidget);
        operationProgress->setObjectName(QString::fromUtf8("operationProgress"));
        operationProgress->setGeometry(QRect(10, 240, 581, 31));
        operationProgress->setStyleSheet(QString::fromUtf8(""));
        operationProgress->setValue(24);
        ConvertButton = new QPushButton(centralwidget);
        ConvertButton->setObjectName(QString::fromUtf8("ConvertButton"));
        ConvertButton->setGeometry(QRect(10, 180, 581, 51));
        ConvertButton->setStyleSheet(QString::fromUtf8(""));
        MessageForUser = new QLabel(centralwidget);
        MessageForUser->setObjectName(QString::fromUtf8("MessageForUser"));
        MessageForUser->setGeometry(QRect(10, 120, 581, 51));
        MessageForUser->setStyleSheet(QString::fromUtf8("font: 600 12pt \"Sitka Text Semibold\";"));
        githubLinkButton = new QPushButton(centralwidget);
        githubLinkButton->setObjectName(QString::fromUtf8("githubLinkButton"));
        githubLinkButton->setGeometry(QRect(10, 280, 581, 41));
        githubLinkButton->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Image Converter {cppLawyer}", nullptr));
        filesToConvertButton->setText(QCoreApplication::translate("MainWindow", "Select File(s)", nullptr));
        selectedFiles->setText(QCoreApplication::translate("MainWindow", "Selected Files: ", nullptr));
        fileTypeChoiceButton->setItemText(0, QCoreApplication::translate("MainWindow", "Choose Output File Type", nullptr));
        fileTypeChoiceButton->setItemText(1, QCoreApplication::translate("MainWindow", "AAI", nullptr));
        fileTypeChoiceButton->setItemText(2, QCoreApplication::translate("MainWindow", "APNG", nullptr));
        fileTypeChoiceButton->setItemText(3, QCoreApplication::translate("MainWindow", "ART", nullptr));
        fileTypeChoiceButton->setItemText(4, QCoreApplication::translate("MainWindow", "AVIF", nullptr));
        fileTypeChoiceButton->setItemText(5, QCoreApplication::translate("MainWindow", "AVS", nullptr));
        fileTypeChoiceButton->setItemText(6, QCoreApplication::translate("MainWindow", "BPG", nullptr));
        fileTypeChoiceButton->setItemText(7, QCoreApplication::translate("MainWindow", "BMP", nullptr));
        fileTypeChoiceButton->setItemText(8, QCoreApplication::translate("MainWindow", "BMP2", nullptr));
        fileTypeChoiceButton->setItemText(9, QCoreApplication::translate("MainWindow", "BMP3", nullptr));
        fileTypeChoiceButton->setItemText(10, QCoreApplication::translate("MainWindow", "BRF", nullptr));
        fileTypeChoiceButton->setItemText(11, QCoreApplication::translate("MainWindow", "CIN", nullptr));
        fileTypeChoiceButton->setItemText(12, QCoreApplication::translate("MainWindow", "CIP", nullptr));
        fileTypeChoiceButton->setItemText(13, QCoreApplication::translate("MainWindow", "CMYK", nullptr));
        fileTypeChoiceButton->setItemText(14, QCoreApplication::translate("MainWindow", "CMYKA", nullptr));
        fileTypeChoiceButton->setItemText(15, QCoreApplication::translate("MainWindow", "DCX", nullptr));
        fileTypeChoiceButton->setItemText(16, QCoreApplication::translate("MainWindow", "DDS", nullptr));
        fileTypeChoiceButton->setItemText(17, QCoreApplication::translate("MainWindow", "DEBUG", nullptr));
        fileTypeChoiceButton->setItemText(18, QCoreApplication::translate("MainWindow", "DIB", nullptr));
        fileTypeChoiceButton->setItemText(19, QCoreApplication::translate("MainWindow", "DPX", nullptr));
        fileTypeChoiceButton->setItemText(20, QCoreApplication::translate("MainWindow", "EPDF", nullptr));
        fileTypeChoiceButton->setItemText(21, QCoreApplication::translate("MainWindow", "EPI", nullptr));
        fileTypeChoiceButton->setItemText(22, QCoreApplication::translate("MainWindow", "EPS", nullptr));
        fileTypeChoiceButton->setItemText(23, QCoreApplication::translate("MainWindow", "EPSF", nullptr));
        fileTypeChoiceButton->setItemText(24, QCoreApplication::translate("MainWindow", "EPSI", nullptr));
        fileTypeChoiceButton->setItemText(25, QCoreApplication::translate("MainWindow", "EPT", nullptr));
        fileTypeChoiceButton->setItemText(26, QCoreApplication::translate("MainWindow", "EXR", nullptr));
        fileTypeChoiceButton->setItemText(27, QCoreApplication::translate("MainWindow", "FARBFELD", nullptr));
        fileTypeChoiceButton->setItemText(28, QCoreApplication::translate("MainWindow", "FAX", nullptr));
        fileTypeChoiceButton->setItemText(29, QCoreApplication::translate("MainWindow", "FITS", nullptr));
        fileTypeChoiceButton->setItemText(30, QCoreApplication::translate("MainWindow", "FL32", nullptr));
        fileTypeChoiceButton->setItemText(31, QCoreApplication::translate("MainWindow", "FLIF", nullptr));
        fileTypeChoiceButton->setItemText(32, QCoreApplication::translate("MainWindow", "FPX", nullptr));
        fileTypeChoiceButton->setItemText(33, QCoreApplication::translate("MainWindow", "FTXT", nullptr));
        fileTypeChoiceButton->setItemText(34, QCoreApplication::translate("MainWindow", "GIF", nullptr));
        fileTypeChoiceButton->setItemText(35, QCoreApplication::translate("MainWindow", "GRAY", nullptr));
        fileTypeChoiceButton->setItemText(36, QCoreApplication::translate("MainWindow", "GRAYA", nullptr));
        fileTypeChoiceButton->setItemText(37, QCoreApplication::translate("MainWindow", "HDR", nullptr));
        fileTypeChoiceButton->setItemText(38, QCoreApplication::translate("MainWindow", "HEIC", nullptr));
        fileTypeChoiceButton->setItemText(39, QCoreApplication::translate("MainWindow", "HRZ", nullptr));
        fileTypeChoiceButton->setItemText(40, QCoreApplication::translate("MainWindow", "HTML", nullptr));
        fileTypeChoiceButton->setItemText(41, QCoreApplication::translate("MainWindow", "INFO", nullptr));
        fileTypeChoiceButton->setItemText(42, QCoreApplication::translate("MainWindow", "ISOBRL", nullptr));
        fileTypeChoiceButton->setItemText(43, QCoreApplication::translate("MainWindow", "ISOBRL6", nullptr));
        fileTypeChoiceButton->setItemText(44, QCoreApplication::translate("MainWindow", "JBIG", nullptr));
        fileTypeChoiceButton->setItemText(45, QCoreApplication::translate("MainWindow", "JNG", nullptr));
        fileTypeChoiceButton->setItemText(46, QCoreApplication::translate("MainWindow", "JP2", nullptr));
        fileTypeChoiceButton->setItemText(47, QCoreApplication::translate("MainWindow", "JPT", nullptr));
        fileTypeChoiceButton->setItemText(48, QCoreApplication::translate("MainWindow", "J2C", nullptr));
        fileTypeChoiceButton->setItemText(49, QCoreApplication::translate("MainWindow", "J2K", nullptr));
        fileTypeChoiceButton->setItemText(50, QCoreApplication::translate("MainWindow", "JPEG", nullptr));
        fileTypeChoiceButton->setItemText(51, QCoreApplication::translate("MainWindow", "JXR", nullptr));
        fileTypeChoiceButton->setItemText(52, QCoreApplication::translate("MainWindow", "JSON", nullptr));
        fileTypeChoiceButton->setItemText(53, QCoreApplication::translate("MainWindow", "JXL", nullptr));
        fileTypeChoiceButton->setItemText(54, QCoreApplication::translate("MainWindow", "KERNEL", nullptr));
        fileTypeChoiceButton->setItemText(55, QCoreApplication::translate("MainWindow", "MIFF", nullptr));
        fileTypeChoiceButton->setItemText(56, QCoreApplication::translate("MainWindow", "MONO", nullptr));
        fileTypeChoiceButton->setItemText(57, QCoreApplication::translate("MainWindow", "MNG", nullptr));
        fileTypeChoiceButton->setItemText(58, QCoreApplication::translate("MainWindow", "M2V", nullptr));
        fileTypeChoiceButton->setItemText(59, QCoreApplication::translate("MainWindow", "MPEG", nullptr));
        fileTypeChoiceButton->setItemText(60, QCoreApplication::translate("MainWindow", "MPC", nullptr));
        fileTypeChoiceButton->setItemText(61, QCoreApplication::translate("MainWindow", "MPR", nullptr));
        fileTypeChoiceButton->setItemText(62, QCoreApplication::translate("MainWindow", "MSL", nullptr));
        fileTypeChoiceButton->setItemText(63, QCoreApplication::translate("MainWindow", "MTV", nullptr));
        fileTypeChoiceButton->setItemText(64, QCoreApplication::translate("MainWindow", "MVG", nullptr));
        fileTypeChoiceButton->setItemText(65, QCoreApplication::translate("MainWindow", "OTB", nullptr));
        fileTypeChoiceButton->setItemText(66, QCoreApplication::translate("MainWindow", "P7", nullptr));
        fileTypeChoiceButton->setItemText(67, QCoreApplication::translate("MainWindow", "PALM", nullptr));
        fileTypeChoiceButton->setItemText(68, QCoreApplication::translate("MainWindow", "PAM", nullptr));
        fileTypeChoiceButton->setItemText(69, QCoreApplication::translate("MainWindow", "CLIPBOARD", nullptr));
        fileTypeChoiceButton->setItemText(70, QCoreApplication::translate("MainWindow", "PBM", nullptr));
        fileTypeChoiceButton->setItemText(71, QCoreApplication::translate("MainWindow", "PCD", nullptr));
        fileTypeChoiceButton->setItemText(72, QCoreApplication::translate("MainWindow", "PCDS", nullptr));
        fileTypeChoiceButton->setItemText(73, QCoreApplication::translate("MainWindow", "PCL", nullptr));
        fileTypeChoiceButton->setItemText(74, QCoreApplication::translate("MainWindow", "PCX", nullptr));
        fileTypeChoiceButton->setItemText(75, QCoreApplication::translate("MainWindow", "PDB", nullptr));
        fileTypeChoiceButton->setItemText(76, QCoreApplication::translate("MainWindow", "PDF", nullptr));
        fileTypeChoiceButton->setItemText(77, QCoreApplication::translate("MainWindow", "PFM", nullptr));
        fileTypeChoiceButton->setItemText(78, QCoreApplication::translate("MainWindow", "PGM", nullptr));
        fileTypeChoiceButton->setItemText(79, QCoreApplication::translate("MainWindow", "PHM", nullptr));
        fileTypeChoiceButton->setItemText(80, QCoreApplication::translate("MainWindow", "PICON", nullptr));
        fileTypeChoiceButton->setItemText(81, QCoreApplication::translate("MainWindow", "PICT", nullptr));
        fileTypeChoiceButton->setItemText(82, QCoreApplication::translate("MainWindow", "PNG", nullptr));
        fileTypeChoiceButton->setItemText(83, QCoreApplication::translate("MainWindow", "PNG8", nullptr));
        fileTypeChoiceButton->setItemText(84, QCoreApplication::translate("MainWindow", "PNG00", nullptr));
        fileTypeChoiceButton->setItemText(85, QCoreApplication::translate("MainWindow", "PNG24", nullptr));
        fileTypeChoiceButton->setItemText(86, QCoreApplication::translate("MainWindow", "PNG32", nullptr));
        fileTypeChoiceButton->setItemText(87, QCoreApplication::translate("MainWindow", "PNG48", nullptr));
        fileTypeChoiceButton->setItemText(88, QCoreApplication::translate("MainWindow", "PNG64", nullptr));
        fileTypeChoiceButton->setItemText(89, QCoreApplication::translate("MainWindow", "PNM", nullptr));
        fileTypeChoiceButton->setItemText(90, QCoreApplication::translate("MainWindow", "POCKETMOD", nullptr));
        fileTypeChoiceButton->setItemText(91, QCoreApplication::translate("MainWindow", "PPM", nullptr));
        fileTypeChoiceButton->setItemText(92, QCoreApplication::translate("MainWindow", "PS", nullptr));
        fileTypeChoiceButton->setItemText(93, QCoreApplication::translate("MainWindow", "PS2", nullptr));
        fileTypeChoiceButton->setItemText(94, QCoreApplication::translate("MainWindow", "PS3", nullptr));
        fileTypeChoiceButton->setItemText(95, QCoreApplication::translate("MainWindow", "PSB", nullptr));
        fileTypeChoiceButton->setItemText(96, QCoreApplication::translate("MainWindow", "PSD", nullptr));
        fileTypeChoiceButton->setItemText(97, QCoreApplication::translate("MainWindow", "PTIF", nullptr));
        fileTypeChoiceButton->setItemText(98, QCoreApplication::translate("MainWindow", "QOI", nullptr));
        fileTypeChoiceButton->setItemText(99, QCoreApplication::translate("MainWindow", "RAW", nullptr));
        fileTypeChoiceButton->setItemText(100, QCoreApplication::translate("MainWindow", "RGB", nullptr));
        fileTypeChoiceButton->setItemText(101, QCoreApplication::translate("MainWindow", "RGBA", nullptr));
        fileTypeChoiceButton->setItemText(102, QCoreApplication::translate("MainWindow", "RGF", nullptr));
        fileTypeChoiceButton->setItemText(103, QCoreApplication::translate("MainWindow", "SGI", nullptr));
        fileTypeChoiceButton->setItemText(104, QCoreApplication::translate("MainWindow", "SHTML", nullptr));
        fileTypeChoiceButton->setItemText(105, QCoreApplication::translate("MainWindow", "SPARSE-COLOR", nullptr));
        fileTypeChoiceButton->setItemText(106, QCoreApplication::translate("MainWindow", "STRIMG", nullptr));
        fileTypeChoiceButton->setItemText(107, QCoreApplication::translate("MainWindow", "SUN", nullptr));
        fileTypeChoiceButton->setItemText(108, QCoreApplication::translate("MainWindow", "SVG", nullptr));
        fileTypeChoiceButton->setItemText(109, QCoreApplication::translate("MainWindow", "TGA", nullptr));
        fileTypeChoiceButton->setItemText(110, QCoreApplication::translate("MainWindow", "TIFF", nullptr));
        fileTypeChoiceButton->setItemText(111, QCoreApplication::translate("MainWindow", "TXT", nullptr));
        fileTypeChoiceButton->setItemText(112, QCoreApplication::translate("MainWindow", "UBRL", nullptr));
        fileTypeChoiceButton->setItemText(113, QCoreApplication::translate("MainWindow", "UBRL6", nullptr));
        fileTypeChoiceButton->setItemText(114, QCoreApplication::translate("MainWindow", "UIL", nullptr));
        fileTypeChoiceButton->setItemText(115, QCoreApplication::translate("MainWindow", "UYVY", nullptr));
        fileTypeChoiceButton->setItemText(116, QCoreApplication::translate("MainWindow", "VICAR", nullptr));
        fileTypeChoiceButton->setItemText(117, QCoreApplication::translate("MainWindow", "VIDEO", nullptr));
        fileTypeChoiceButton->setItemText(118, QCoreApplication::translate("MainWindow", "VIFF", nullptr));
        fileTypeChoiceButton->setItemText(119, QCoreApplication::translate("MainWindow", "WBMP", nullptr));
        fileTypeChoiceButton->setItemText(120, QCoreApplication::translate("MainWindow", "WDP", nullptr));
        fileTypeChoiceButton->setItemText(121, QCoreApplication::translate("MainWindow", "WEBP", nullptr));
        fileTypeChoiceButton->setItemText(122, QCoreApplication::translate("MainWindow", "X", nullptr));
        fileTypeChoiceButton->setItemText(123, QCoreApplication::translate("MainWindow", "XBM", nullptr));
        fileTypeChoiceButton->setItemText(124, QCoreApplication::translate("MainWindow", "XPM", nullptr));
        fileTypeChoiceButton->setItemText(125, QCoreApplication::translate("MainWindow", "XWD", nullptr));
        fileTypeChoiceButton->setItemText(126, QCoreApplication::translate("MainWindow", "YAML", nullptr));
        fileTypeChoiceButton->setItemText(127, QCoreApplication::translate("MainWindow", "YCbCr", nullptr));
        fileTypeChoiceButton->setItemText(128, QCoreApplication::translate("MainWindow", "YCbCrA", nullptr));
        fileTypeChoiceButton->setItemText(129, QCoreApplication::translate("MainWindow", "YUV", nullptr));

        outputFileDirectoryButton->setText(QCoreApplication::translate("MainWindow", "Select Output Directory", nullptr));
        ConvertButton->setText(QCoreApplication::translate("MainWindow", "Convert", nullptr));
        MessageForUser->setText(QString());
        githubLinkButton->setText(QCoreApplication::translate("MainWindow", "To My Github", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
