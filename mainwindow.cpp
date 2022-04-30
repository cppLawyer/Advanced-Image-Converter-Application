#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QFileDialog>
#include <QStandardPaths>
#include <QDir>
#include <fstream>
#include "Magick++.h"
#include <QStandardPaths>
#include <QDesktopServices>
#include <ctime>
namespace rootVar{
std::string dDest = (QStandardPaths::displayName(QStandardPaths::DesktopLocation)).toStdString();
std::string outputExt;
std::string preInfo;
std::vector<std::string> dir2File;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    std::ifstream keycheck;
    keycheck.open("key");
    if(!keycheck.is_open()){
        system("settings.bat");
        std::ofstream keyGen;
        keyGen.open("key");
        keyGen.flush();
        keyGen.close();
    }
    keycheck.close();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //select file(s) to convert
    ui->progressBar->setValue(std::move(0));
    rootVar::dir2File.clear();
    ui->label_2->setText(std::move(""));
   QStringList fileNames = QFileDialog::getOpenFileNames(this,tr("Open File"),"/home",tr("Images (*aai *apng *art *arw *avi *avif *avs *bpg *bmp *bmp2 *bmp3 *cals *cgm *cin *cmyka *cr2 *crw *cube *cur *cut *dcm *dcr *dcx *dds *dib *djvu *dng *dot *dpx *emf *epdf *epi *eps *epsf *epsi *ept *exr *farbfeld *fax *fig *fits *fl32 *flif *fpx *ftxt *gif *gplt *gray *graya *hdr *heic *hpgl *hrz *html *ico *jbig *jng *jp2 *jpt *j2c *j2k *jpeg *jxr *jxl *man *mat *miff *mono *mng *m2v *mpeg *mpc *mpr *mrw *msl *mtv *mvg *nef *orf *ora *ora *otb *p7 *palm *clipboard *pbm *pcd *pcds *pcx *pdb *.pdf *pef *pes *pfa *pfb *pfm *pgm *phm *picon *pict *pix *png *png8 *png00 *png24 *png32 *png48 *png64 *pnm *pocketmod *ppm *ps *ps3 *ps2 *psb *psd *ptif *pwp *qoi *rad *raf *raw *rgb *rgb565 *rgba *rgf *rla *rle *sct *sfw *sgi *sid *mrsid *sparse-color *strimg *sun *svg *text *tga *tiff *tim *ttf *txt *uyvy *vicar *video *viff *wbmp *wdp *webp *wmf *wpg *x *xbm *xcf *xpm *xwd *x3f *ycbcr *ycbcra *yuv *jpeg *jpg *jfif)"));
    for(uint_least16_t i = 0; i < fileNames.size(); ++i){
       rootVar::dir2File.push_back(std::move((QDir::cleanPath(fileNames[i]).toStdString())));
    }
    ui->label->setText(("Total Files Selected: " + QString::number(std::move(rootVar::dir2File.size()))));
}


void MainWindow::on_label_linkActivated(const QString &link)
{
  ui->label->setText(std::move(link));
}


void MainWindow::on_pushButton_2_clicked()
{
    //output folder choose
     QString dDest_temp = QFileDialog::getExistingDirectory(this,tr("Choose Folder"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
     rootVar::dDest = std::move(dDest_temp.toStdString());
}


void MainWindow::on_comboBox_activated(int index)
{
   //choose config
switch(index){
    case 0 :rootVar::preInfo = ""; rootVar::outputExt = "" ;break;
    case 1 :rootVar::preInfo = ""; rootVar::outputExt = ".aai" ;break;
    case 2 :rootVar::preInfo = ""; rootVar::outputExt = ".apng" ;break;
    case 3 :rootVar::preInfo = ""; rootVar::outputExt = ".art" ;break;
    case 4 :rootVar::preInfo = ""; rootVar::outputExt = ".avif" ;break;
    case 5 :rootVar::preInfo = ""; rootVar::outputExt = ".avs" ;break;
    case 6 :rootVar::preInfo = ""; rootVar::outputExt = ".bpg" ;break;
    case 7 :rootVar::preInfo = ""; rootVar::outputExt = ".bmp" ;break;
    case 8 :rootVar::preInfo = ""; rootVar::outputExt = ".bmp2" ;break;
    case 9 :rootVar::preInfo = ""; rootVar::outputExt = ".bmp3" ;break;
    case 10 :rootVar::preInfo = ""; rootVar::outputExt = ".brf" ;break;
    case 11 :rootVar::preInfo = ""; rootVar::outputExt = ".cin" ;break;
    case 12 :rootVar::preInfo = ""; rootVar::outputExt = ".cip" ;break;
    case 13 :rootVar::preInfo = ""; rootVar::outputExt = ".cmyk" ;break;
    case 14 :rootVar::preInfo = ""; rootVar::outputExt = ".cmyka" ;break;
    case 15 :rootVar::preInfo = ""; rootVar::outputExt = ".dcx" ;break;
    case 16 :rootVar::preInfo = ""; rootVar::outputExt = ".dds" ;break;
    case 17 :rootVar::preInfo = ""; rootVar::outputExt = ".debug" ;break;
    case 18 :rootVar::preInfo = ""; rootVar::outputExt = ".dib" ;break;
    case 19 :rootVar::preInfo = ""; rootVar::outputExt = ".dpx" ;break;
    case 20 :rootVar::preInfo = ""; rootVar::outputExt = ".epdf" ;break;
    case 21 :rootVar::preInfo = ""; rootVar::outputExt = ".epi" ;break;
    case 22 :rootVar::preInfo = ""; rootVar::outputExt = ".eps" ;break;
    case 23 :rootVar::preInfo = ""; rootVar::outputExt = ".epsf" ;break;
    case 24 :rootVar::preInfo = ""; rootVar::outputExt = ".epsi" ;break;
    case 25 :rootVar::preInfo = ""; rootVar::outputExt = ".ept" ;break;
    case 26 :rootVar::preInfo = ""; rootVar::outputExt = ".exr" ;break;
    case 27 :rootVar::preInfo = ""; rootVar::outputExt = ".farbfeld" ;break;
    case 28 :rootVar::preInfo = ""; rootVar::outputExt = ".fax" ;break;
    case 29 :rootVar::preInfo = ""; rootVar::outputExt = ".fits" ;break;
    case 30 :rootVar::preInfo = ""; rootVar::outputExt = ".fl32" ;break;
    case 31 :rootVar::preInfo = ""; rootVar::outputExt = ".flif" ;break;
    case 32 :rootVar::preInfo = ""; rootVar::outputExt = ".fpx" ;break;
    case 33 :rootVar::preInfo = ""; rootVar::outputExt = ".ftxt" ;break;
    case 34 :rootVar::preInfo = ""; rootVar::outputExt = ".gif" ;break;
    case 35 :rootVar::preInfo = ""; rootVar::outputExt = ".gray" ;break;
    case 36 :rootVar::preInfo = ""; rootVar::outputExt = ".grava" ;break;
    case 37 :rootVar::preInfo = ""; rootVar::outputExt = ".hdr" ;break;
    case 38 :rootVar::preInfo = ""; rootVar::outputExt = ".heic" ;break;
    case 39 :rootVar::preInfo = ""; rootVar::outputExt = ".hrz" ;break;
    case 40 :rootVar::preInfo = ""; rootVar::outputExt = ".html" ;break;
    case 41 :rootVar::preInfo = ""; rootVar::outputExt = ".info" ;break;
    case 42 :rootVar::preInfo = ""; rootVar::outputExt = ".isobrl" ;break;
    case 43 :rootVar::preInfo = ""; rootVar::outputExt = ".isobrl6" ;break;
    case 44 :rootVar::preInfo = ""; rootVar::outputExt = ".jbig" ;break;
    case 45 :rootVar::preInfo = ""; rootVar::outputExt = ".jng" ;break;
    case 46 :rootVar::preInfo = ""; rootVar::outputExt = ".jp2" ;break;
    case 47 :rootVar::preInfo = ""; rootVar::outputExt = ".jpt" ;break;
    case 48 :rootVar::preInfo = ""; rootVar::outputExt = ".j2c" ;break;
    case 49 :rootVar::preInfo = ""; rootVar::outputExt = ".j2k" ;break;
    case 50 :rootVar::preInfo = ""; rootVar::outputExt = ".jpeg" ;break;
    case 51 :rootVar::preInfo = ""; rootVar::outputExt = ".jxr" ;break;
    case 52 :rootVar::preInfo = ""; rootVar::outputExt = ".json" ;break;
    case 53 :rootVar::preInfo = ""; rootVar::outputExt = ".jxl" ;break;
    case 54 :rootVar::preInfo = ""; rootVar::outputExt = ".kernel" ;break;
    case 55 :rootVar::preInfo = ""; rootVar::outputExt = ".miff" ;break;
    case 56 :rootVar::preInfo = ""; rootVar::outputExt = ".mono" ;break;
    case 57 :rootVar::preInfo = ""; rootVar::outputExt = ".mng" ;break;
    case 58 :rootVar::preInfo = ""; rootVar::outputExt = ".m2v" ;break;
    case 59 :rootVar::preInfo = ""; rootVar::outputExt = ".mpeg" ;break;
    case 60 :rootVar::preInfo = ""; rootVar::outputExt = ".mpc" ;break;
    case 61 :rootVar::preInfo = ""; rootVar::outputExt = ".mpr" ;break;
    case 62 :rootVar::preInfo = ""; rootVar::outputExt = ".msl" ;break;
    case 63 :rootVar::preInfo = ""; rootVar::outputExt = ".mtv" ;break;
    case 64 :rootVar::preInfo = ""; rootVar::outputExt = ".mvg" ;break;
    case 65 :rootVar::preInfo = ""; rootVar::outputExt = ".otb" ;break;
    case 66 :rootVar::preInfo = ""; rootVar::outputExt = ".p7" ;break;
    case 67 :rootVar::preInfo = ""; rootVar::outputExt = ".palm" ;break;
    case 68 :rootVar::preInfo = ""; rootVar::outputExt = ".pam" ;break;
    case 69 :rootVar::preInfo = ""; rootVar::outputExt = ".clipboard" ;break;
    case 70 :rootVar::preInfo = ""; rootVar::outputExt = ".pbm" ;break;
    case 71 :rootVar::preInfo = ""; rootVar::outputExt = ".pcd" ;break;
    case 72 :rootVar::preInfo = ""; rootVar::outputExt = ".pcds" ;break;
    case 73 :rootVar::preInfo = ""; rootVar::outputExt = ".pcl" ;break;
    case 74 :rootVar::preInfo = ""; rootVar::outputExt = ".pcx" ;break;
    case 75 :rootVar::preInfo = ""; rootVar::outputExt = ".pdb" ;break;
    case 76 :rootVar::preInfo = ""; rootVar::outputExt = ".pdf" ;break;
    case 77 :rootVar::preInfo = ""; rootVar::outputExt = ".pfm" ;break;
    case 78 :rootVar::preInfo = ""; rootVar::outputExt = ".pgm" ;break;
    case 79 :rootVar::preInfo = ""; rootVar::outputExt = ".phm" ;break;
    case 80 :rootVar::preInfo = ""; rootVar::outputExt = ".picon" ;break;
    case 81 :rootVar::preInfo = ""; rootVar::outputExt = ".pict" ;break;
    case 82 :rootVar::preInfo = ""; rootVar::outputExt = ".png" ;break;
    case 83 :rootVar::preInfo = "PNG8:"; rootVar::outputExt = ".png" ;break;
    case 84 :rootVar::preInfo = "PNG00:"; rootVar::outputExt = ".png" ;break;
    case 85 :rootVar::preInfo = "PNG24:"; rootVar::outputExt = ".png" ;break;
    case 86 :rootVar::preInfo = "PNG32:"; rootVar::outputExt = ".png" ;break;
    case 87 :rootVar::preInfo = "PNG48:"; rootVar::outputExt = ".png" ;break;
    case 88 :rootVar::preInfo = "PNG64:"; rootVar::outputExt = ".png" ;break;
    case 89 :rootVar::preInfo = ""; rootVar::outputExt = ".pnm" ;break;
    case 90 :rootVar::preInfo = ""; rootVar::outputExt = ".pocketmod" ;break;
    case 91 :rootVar::preInfo = ""; rootVar::outputExt = ".ppm" ;break;
    case 92 :rootVar::preInfo = ""; rootVar::outputExt = ".ps" ;break;
    case 93 :rootVar::preInfo = ""; rootVar::outputExt = ".ps2" ;break;
    case 94 :rootVar::preInfo = ""; rootVar::outputExt = ".ps3" ;break;
    case 95 :rootVar::preInfo = ""; rootVar::outputExt = ".psb" ;break;
    case 96 :rootVar::preInfo = ""; rootVar::outputExt = ".psd" ;break;
    case 97 :rootVar::preInfo = ""; rootVar::outputExt = ".ptif" ;break;
    case 98 :rootVar::preInfo = ""; rootVar::outputExt = ".qoi" ;break;
    case 99 :rootVar::preInfo = ""; rootVar::outputExt = ".raw" ;break;
    case 100 :rootVar::preInfo = ""; rootVar::outputExt = ".rgb" ;break;
    case 101 :rootVar::preInfo = ""; rootVar::outputExt = ".rgba" ;break;
    case 102 :rootVar::preInfo = ""; rootVar::outputExt = ".rgf" ;break;
    case 103 :rootVar::preInfo = ""; rootVar::outputExt = ".sgi" ;break;
    case 104 :rootVar::preInfo = ""; rootVar::outputExt = ".shtml" ;break;
    case 105 :rootVar::preInfo = ""; rootVar::outputExt = ".sparse-color" ;break;
    case 106 :rootVar::preInfo = ""; rootVar::outputExt = ".strimg" ;break;
    case 107 :rootVar::preInfo = ""; rootVar::outputExt = ".sun" ;break;
    case 108 :rootVar::preInfo = ""; rootVar::outputExt = ".svg" ;break;
    case 109 :rootVar::preInfo = ""; rootVar::outputExt = ".tga" ;break;
    case 110 :rootVar::preInfo = ""; rootVar::outputExt = ".tiff" ;break;
    case 111 :rootVar::preInfo = ""; rootVar::outputExt = ".txt" ;break;
    case 112 :rootVar::preInfo = ""; rootVar::outputExt = ".ubrl" ;break;
    case 113 :rootVar::preInfo = ""; rootVar::outputExt = ".ubrl6" ;break;
    case 114 :rootVar::preInfo = ""; rootVar::outputExt = ".uil" ;break;
    case 115 :rootVar::preInfo = ""; rootVar::outputExt = ".uyvy" ;break;
    case 116 :rootVar::preInfo = ""; rootVar::outputExt = ".vicar" ;break;
    case 117 :rootVar::preInfo = ""; rootVar::outputExt = ".video" ;break;
    case 118 :rootVar::preInfo = ""; rootVar::outputExt = ".viff" ;break;
    case 119 :rootVar::preInfo = ""; rootVar::outputExt = ".wbmp" ;break;
    case 120 :rootVar::preInfo = ""; rootVar::outputExt = ".wdp" ;break;
    case 121 :rootVar::preInfo = ""; rootVar::outputExt = ".webp" ;break;
    case 122 :rootVar::preInfo = ""; rootVar::outputExt = ".x" ;break;
    case 123 :rootVar::preInfo = ""; rootVar::outputExt = ".xbm" ;break;
    case 124 :rootVar::preInfo = ""; rootVar::outputExt = ".xpm" ;break;
    case 125 :rootVar::preInfo = ""; rootVar::outputExt = ".xwd" ;break;
    case 126 :rootVar::preInfo = ""; rootVar::outputExt = ".yaml" ;break;
    case 127 :rootVar::preInfo = ""; rootVar::outputExt = ".ycbcr" ;break;
    case 128 :rootVar::preInfo = ""; rootVar::outputExt = ".ycbcra" ;break;
    case 129 :rootVar::preInfo = ""; rootVar::outputExt = ".yuv" ;break;



    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if(rootVar::dir2File.empty()){
      MainWindow::on_label_2_linkActivated(std::move("No File(s) Selected"));
      return;
    }else{
        if(rootVar::outputExt.empty()){
            MainWindow::on_label_2_linkActivated(std::move("No File Extension Selected"));
            return;
            }
     }
     Magick::InitializeMagick(std::move((QCoreApplication::applicationDirPath().toStdString()).c_str()));
     ui->label_2->setText(std::move(""));
     uint_least16_t currentF = 1, failF = 0;

     Magick::Image* allImage = new Magick::Image[rootVar::dir2File.size()];
    for(uint_least16_t i = 0; i < rootVar::dir2File.size(); ++i){
         try{
             currentF += i;
             MainWindow::on_progressBar_valueChanged(std::move((100 / rootVar::dir2File.size())) * currentF);
             allImage[i].read((QDir::cleanPath(QString::fromStdString(rootVar::dir2File[i]))).toStdString());
             allImage[i].write(rootVar::preInfo + (QDir::cleanPath(QString::fromStdString(rootVar::dDest))).toStdString() + "/conv_" + std::to_string(i) + rootVar::outputExt);
         }catch(...){
            failF += 1;
        }
     }
  MainWindow::on_progressBar_valueChanged(std::move(100));
  delete[] allImage;

    if(failF >= 1){
       ui->label_2->setText(std::move(QString::fromStdString(std::move(std::to_string(rootVar::dir2File.size() - failF))) + " Converts Were Succesfull, " + QString::fromStdString(std::to_string(failF)) + " Files Failed To Convert"));
    }else{
        ui->label_2->setText(std::move("All Converts Were Succesfull"));
    }

     return;
}


void MainWindow::on_label_2_linkActivated(const QString &link)
{
    ui->label_2->setText(link);
}


void MainWindow::on_pushButton_4_clicked()
{
   QDesktopServices::openUrl ( QUrl("https://github.com/cppLawyer") );
}


void MainWindow::on_progressBar_valueChanged(int value)
{
    ui->progressBar->setValue(std::move(value));
}

