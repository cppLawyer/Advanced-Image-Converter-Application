#include "mainwindow.h"
#include "Magick++.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QDir>
#include <QFileDialog>
#include <QStandardPaths>
#include <ctime>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  ui->operationProgress->setValue(0);
  std::ifstream keycheck;
  keycheck.open("key");
  if (!keycheck.is_open()) {
    system("settings.bat");
    std::ofstream keyGen;
    keyGen.open("key");
    keyGen.flush();
    keyGen.close();
  }
  keycheck.close();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_ConvertButton_clicked() {
  if (this->path_Files.empty()) {
    ui->MessageForUser->setText(std::move("No File(s) Selected"));
    return;
  } else {
    if (this->file_Type.empty()) {
      ui->MessageForUser->setText(std::move("No File Extension Selected"));
      return;
    }
  }
  Magick::InitializeMagick(std::move(
      (QCoreApplication::applicationDirPath().toStdString()).c_str()));
  ui->MessageForUser->setText(std::move(""));
  uint_fast16_t currentConvert = 1, failedConverts = 0;

  Magick::Image *allImage = new Magick::Image[this->path_Files.size()];
  for (uint_least16_t i = 0; i < this->path_Files.size(); ++i) {
    try {
      currentConvert += i;
      ui->operationProgress->setValue(
          std::round((static_cast<float>(100 / this->path_Files.size())) *
                     currentConvert));
      allImage[i].read(std::move((path_Files[i]).toStdString()));
      allImage[i].write(std::move(type_Prefix + dest_Path + "/convert-" +
                                  std::to_string(i) + file_Type));
    } catch (...) {
      failedConverts += 1;
    }
  }
  ui->operationProgress->setValue(100);
  delete[] allImage;

  if (failedConverts >= 1)
    ui->MessageForUser->setText(
        std::move((QString::number(this->path_Files.size() - failedConverts))) +
        std::move(" Converts Were Succesfull, ") +
        std::move(QString::number(failedConverts)) +
        std::move(" Files Failed To Convert"));
  else
    ui->MessageForUser->setText(std::move("All Converts Were Succesfull"));
}

void MainWindow::on_filesToConvertButton_clicked() {
  ui->operationProgress->setValue(std::move(0));
  path_Files.clear();
  ui->MessageForUser->setText(std::move(""));
  QStringList fileNames =
      QFileDialog::getOpenFileNames(this, tr("Open File"), "/home");
  for (uint_least16_t i = 0; i < fileNames.size(); ++i)
    path_Files.push_back(QDir::cleanPath(fileNames[i]));
  ui->selectedFiles->setText(("Total Files Selected: " +
                              std::move(QString::number(path_Files.size()))));
}

void MainWindow::on_fileTypeChoiceButton_activated(int index) {
  switch (index) {
  case 0:
    type_Prefix = "";
    file_Type = "";
    break;
  case 1:
    type_Prefix = "";
    file_Type = ".aai";
    break;
  case 2:
    type_Prefix = "";
    file_Type = ".apng";
    break;
  case 3:
    type_Prefix = "";
    file_Type = ".art";
    break;
  case 4:
    type_Prefix = "";
    file_Type = ".avif";
    break;
  case 5:
    type_Prefix = "";
    file_Type = ".avs";
    break;
  case 6:
    type_Prefix = "";
    file_Type = ".bpg";
    break;
  case 7:
    type_Prefix = "";
    file_Type = ".bmp";
    break;
  case 8:
    type_Prefix = "";
    file_Type = ".bmp2";
    break;
  case 9:
    type_Prefix = "";
    file_Type = ".bmp3";
    break;
  case 10:
    type_Prefix = "";
    file_Type = ".brf";
    break;
  case 11:
    type_Prefix = "";
    file_Type = ".cin";
    break;
  case 12:
    type_Prefix = "";
    file_Type = ".cip";
    break;
  case 13:
    type_Prefix = "";
    file_Type = ".cmyk";
    break;
  case 14:
    type_Prefix = "";
    file_Type = ".cmyka";
    break;
  case 15:
    type_Prefix = "";
    file_Type = ".dcx";
    break;
  case 16:
    type_Prefix = "";
    file_Type = ".dds";
    break;
  case 17:
    type_Prefix = "";
    file_Type = ".debug";
    break;
  case 18:
    type_Prefix = "";
    file_Type = ".dib";
    break;
  case 19:
    type_Prefix = "";
    file_Type = ".dpx";
    break;
  case 20:
    type_Prefix = "";
    file_Type = ".epdf";
    break;
  case 21:
    type_Prefix = "";
    file_Type = ".epi";
    break;
  case 22:
    type_Prefix = "";
    file_Type = ".eps";
    break;
  case 23:
    type_Prefix = "";
    file_Type = ".epsf";
    break;
  case 24:
    type_Prefix = "";
    file_Type = ".epsi";
    break;
  case 25:
    type_Prefix = "";
    file_Type = ".ept";
    break;
  case 26:
    type_Prefix = "";
    file_Type = ".exr";
    break;
  case 27:
    type_Prefix = "";
    file_Type = ".farbfeld";
    break;
  case 28:
    type_Prefix = "";
    file_Type = ".fax";
    break;
  case 29:
    type_Prefix = "";
    file_Type = ".fits";
    break;
  case 30:
    type_Prefix = "";
    file_Type = ".fl32";
    break;
  case 31:
    type_Prefix = "";
    file_Type = ".flif";
    break;
  case 32:
    type_Prefix = "";
    file_Type = ".fpx";
    break;
  case 33:
    type_Prefix = "";
    file_Type = ".ftxt";
    break;
  case 34:
    type_Prefix = "";
    file_Type = ".gif";
    break;
  case 35:
    type_Prefix = "";
    file_Type = ".gray";
    break;
  case 36:
    type_Prefix = "";
    file_Type = ".grava";
    break;
  case 37:
    type_Prefix = "";
    file_Type = ".hdr";
    break;
  case 38:
    type_Prefix = "";
    file_Type = ".heic";
    break;
  case 39:
    type_Prefix = "";
    file_Type = ".hrz";
    break;
  case 40:
    type_Prefix = "";
    file_Type = ".html";
    break;
  case 41:
    type_Prefix = "";
    file_Type = ".info";
    break;
  case 42:
    type_Prefix = "";
    file_Type = ".isobrl";
    break;
  case 43:
    type_Prefix = "";
    file_Type = ".isobrl6";
    break;
  case 44:
    type_Prefix = "";
    file_Type = ".jbig";
    break;
  case 45:
    type_Prefix = "";
    file_Type = ".jng";
    break;
  case 46:
    type_Prefix = "";
    file_Type = ".jp2";
    break;
  case 47:
    type_Prefix = "";
    file_Type = ".jpt";
    break;
  case 48:
    type_Prefix = "";
    file_Type = ".j2c";
    break;
  case 49:
    type_Prefix = "";
    file_Type = ".j2k";
    break;
  case 50:
    type_Prefix = "";
    file_Type = ".jpeg";
    break;
  case 51:
    type_Prefix = "";
    file_Type = ".jxr";
    break;
  case 52:
    type_Prefix = "";
    file_Type = ".json";
    break;
  case 53:
    type_Prefix = "";
    file_Type = ".jxl";
    break;
  case 54:
    type_Prefix = "";
    file_Type = ".kernel";
    break;
  case 55:
    type_Prefix = "";
    file_Type = ".miff";
    break;
  case 56:
    type_Prefix = "";
    file_Type = ".mono";
    break;
  case 57:
    type_Prefix = "";
    file_Type = ".mng";
    break;
  case 58:
    type_Prefix = "";
    file_Type = ".m2v";
    break;
  case 59:
    type_Prefix = "";
    file_Type = ".mpeg";
    break;
  case 60:
    type_Prefix = "";
    file_Type = ".mpc";
    break;
  case 61:
    type_Prefix = "";
    file_Type = ".mpr";
    break;
  case 62:
    type_Prefix = "";
    file_Type = ".msl";
    break;
  case 63:
    type_Prefix = "";
    file_Type = ".mtv";
    break;
  case 64:
    type_Prefix = "";
    file_Type = ".mvg";
    break;
  case 65:
    type_Prefix = "";
    file_Type = ".otb";
    break;
  case 66:
    type_Prefix = "";
    file_Type = ".p7";
    break;
  case 67:
    type_Prefix = "";
    file_Type = ".palm";
    break;
  case 68:
    type_Prefix = "";
    file_Type = ".pam";
    break;
  case 69:
    type_Prefix = "";
    file_Type = ".clipboard";
    break;
  case 70:
    type_Prefix = "";
    file_Type = ".pbm";
    break;
  case 71:
    type_Prefix = "";
    file_Type = ".pcd";
    break;
  case 72:
    type_Prefix = "";
    file_Type = ".pcds";
    break;
  case 73:
    type_Prefix = "";
    file_Type = ".pcl";
    break;
  case 74:
    type_Prefix = "";
    file_Type = ".pcx";
    break;
  case 75:
    type_Prefix = "";
    file_Type = ".pdb";
    break;
  case 76:
    type_Prefix = "";
    file_Type = ".pdf";
    break;
  case 77:
    type_Prefix = "";
    file_Type = ".pfm";
    break;
  case 78:
    type_Prefix = "";
    file_Type = ".pgm";
    break;
  case 79:
    type_Prefix = "";
    file_Type = ".phm";
    break;
  case 80:
    type_Prefix = "";
    file_Type = ".picon";
    break;
  case 81:
    type_Prefix = "";
    file_Type = ".pict";
    break;
  case 82:
    type_Prefix = "";
    file_Type = ".png";
    break;
  case 83:
    type_Prefix = "PNG8:";
    file_Type = ".png";
    break;
  case 84:
    type_Prefix = "PNG00:";
    file_Type = ".png";
    break;
  case 85:
    type_Prefix = "PNG24:";
    file_Type = ".png";
    break;
  case 86:
    type_Prefix = "PNG32:";
    file_Type = ".png";
    break;
  case 87:
    type_Prefix = "PNG48:";
    file_Type = ".png";
    break;
  case 88:
    type_Prefix = "PNG64:";
    file_Type = ".png";
    break;
  case 89:
    type_Prefix = "";
    file_Type = ".pnm";
    break;
  case 90:
    type_Prefix = "";
    file_Type = ".pocketmod";
    break;
  case 91:
    type_Prefix = "";
    file_Type = ".ppm";
    break;
  case 92:
    type_Prefix = "";
    file_Type = ".ps";
    break;
  case 93:
    type_Prefix = "";
    file_Type = ".ps2";
    break;
  case 94:
    type_Prefix = "";
    file_Type = ".ps3";
    break;
  case 95:
    type_Prefix = "";
    file_Type = ".psb";
    break;
  case 96:
    type_Prefix = "";
    file_Type = ".psd";
    break;
  case 97:
    type_Prefix = "";
    file_Type = ".ptif";
    break;
  case 98:
    type_Prefix = "";
    file_Type = ".qoi";
    break;
  case 99:
    type_Prefix = "";
    file_Type = ".raw";
    break;
  case 100:
    type_Prefix = "";
    file_Type = ".rgb";
    break;
  case 101:
    type_Prefix = "";
    file_Type = ".rgba";
    break;
  case 102:
    type_Prefix = "";
    file_Type = ".rgf";
    break;
  case 103:
    type_Prefix = "";
    file_Type = ".sgi";
    break;
  case 104:
    type_Prefix = "";
    file_Type = ".shtml";
    break;
  case 105:
    type_Prefix = "";
    file_Type = ".sparse-color";
    break;
  case 106:
    type_Prefix = "";
    file_Type = ".strimg";
    break;
  case 107:
    type_Prefix = "";
    file_Type = ".sun";
    break;
  case 108:
    type_Prefix = "";
    file_Type = ".svg";
    break;
  case 109:
    type_Prefix = "";
    file_Type = ".tga";
    break;
  case 110:
    type_Prefix = "";
    file_Type = ".tiff";
    break;
  case 111:
    type_Prefix = "";
    file_Type = ".txt";
    break;
  case 112:
    type_Prefix = "";
    file_Type = ".ubrl";
    break;
  case 113:
    type_Prefix = "";
    file_Type = ".ubrl6";
    break;
  case 114:
    type_Prefix = "";
    file_Type = ".uil";
    break;
  case 115:
    type_Prefix = "";
    file_Type = ".uyvy";
    break;
  case 116:
    type_Prefix = "";
    file_Type = ".vicar";
    break;
  case 117:
    type_Prefix = "";
    file_Type = ".video";
    break;
  case 118:
    type_Prefix = "";
    file_Type = ".viff";
    break;
  case 119:
    type_Prefix = "";
    file_Type = ".wbmp";
    break;
  case 120:
    type_Prefix = "";
    file_Type = ".wdp";
    break;
  case 121:
    type_Prefix = "";
    file_Type = ".webp";
    break;
  case 122:
    type_Prefix = "";
    file_Type = ".x";
    break;
  case 123:
    type_Prefix = "";
    file_Type = ".xbm";
    break;
  case 124:
    type_Prefix = "";
    file_Type = ".xpm";
    break;
  case 125:
    type_Prefix = "";
    file_Type = ".xwd";
    break;
  case 126:
    type_Prefix = "";
    file_Type = ".yaml";
    break;
  case 127:
    type_Prefix = "";
    file_Type = ".ycbcr";
    break;
  case 128:
    type_Prefix = "";
    file_Type = ".ycbcra";
    break;
  case 129:
    type_Prefix = "";
    file_Type = ".yuv";
    break;
  default:;
    break;
  };
}

void MainWindow::on_outputFileDirectoryButton_clicked() {
  this->dest_Path =
      ((QFileDialog::getExistingDirectory(this, tr("Choose Folder"), "/home",
                                          QFileDialog::ShowDirsOnly |
                                              QFileDialog::DontResolveSymlinks))
           .toStdString());
}

void MainWindow::on_githubLinkButton_clicked() {
  QDesktopServices::openUrl(QUrl("https://github.com/cppLawyer"));
}
