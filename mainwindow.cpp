#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QFileDialog>
#include <string>
#include <ctime>
#include <QStandardPaths>
#include <thread>
#include <array>
#include <QDir>
#include <fstream>
#include "Magick++.h"
#include <QStandardPaths>
#include <QDesktopServices>
#include <utility>
#include <atomic>
std::string destDir = std::move((QStandardPaths::displayName(QStandardPaths::DesktopLocation)).toStdString()); //by default on desktop dir
std::string outputFileFormat;
std::string prefix_fformat;
std::vector<std::string> allFileDir;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(std::move(0));
    std::ifstream keycheck;
    keycheck.open("license.key");
    if(!keycheck.is_open()){
        system("setPath.bat");
        std::ofstream keyGen;
        keyGen.open("license.key");
        keyGen << "SUCCES-KEY";
        keyGen.flush();
        keyGen.close();
        ui->label_2->setText(std::move("Please Close the Program and reopen it....."));
    }
    keycheck.close();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->progressBar->setValue(std::move(0));
   allFileDir.clear();
    ui->label_2->setText(std::move(""));
   //choses the file to convert
   QStringList fileNames = QFileDialog::getOpenFileNames(this,tr("Open File"),"/home",tr("Images (*aai *apng *art *arw *avi *avif *avs *bpg *bmp *bmp2 *bmp3 *cals *cgm *cin *cmyka *cr2 *crw *cube *cur *cut *dcm *dcr *dcx *dds *dib *djvu *dng *dot *dpx *emf *epdf *epi *eps *epsf *epsi *ept *exr *farbfeld *fax *fig *fits *fl32 *flif *fpx *ftxt *gif *gplt *gray *graya *hdr *heic *hpgl *hrz *html *ico *jbig *jng *jp2 *jpt *j2c *j2k *jpeg *jxr *jxl *man *mat *miff *mono *mng *m2v *mpeg *mpc *mpr *mrw *msl *mtv *mvg *nef *orf *ora *ora *otb *p7 *palm *clipboard *pbm *pcd *pcds *pcx *pdb *.pdf *pef *pes *pfa *pfb *pfm *pgm *phm *picon *pict *pix *png *png8 *png00 *png24 *png32 *png48 *png64 *pnm *pocketmod *ppm *ps *ps3 *ps2 *psb *psd *ptif *pwp *qoi *rad *raf *raw *rgb *rgb565 *rgba *rgf *rla *rle *sct *sfw *sgi *sid *mrsid *sparse-color *strimg *sun *svg *text *tga *tiff *tim *ttf *txt *uyvy *vicar *video *viff *wbmp *wdp *webp *wmf *wpg *x *xbm *xcf *xpm *xwd *x3f *ycbcr *ycbcra *yuv *jpeg *jpg *jfif)"));

    for(size_t i = 0; i < fileNames.size(); ++i){

       allFileDir.push_back(std::move((QDir::cleanPath(fileNames[i]).toStdString())));

    }
    ui->label->setText(("Total Files Selected: " + QString::number(std::move(allFileDir.size()))));


}


void MainWindow::on_label_linkActivated(const QString &link)
{
    //shows file selected
  ui->label->setText(std::move(link));
}


void MainWindow::on_pushButton_2_clicked()
{
    //output folder choose
     QString destDir_temp = QFileDialog::getExistingDirectory(this,tr("Choose Folder"),"/home",QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
     destDir = std::move(destDir_temp.toStdString());

}


void MainWindow::on_comboBox_activated(int index)
{
   //choose config
//most stupid job hardcoding the choice :(
switch(index){
    case 0 :prefix_fformat = ""; outputFileFormat = "" ;break;
    case 1 :prefix_fformat = ""; outputFileFormat = ".aai" ;break;
    case 2 :prefix_fformat = ""; outputFileFormat = ".apng" ;break;
    case 3 :prefix_fformat = ""; outputFileFormat = ".art" ;break;
    case 4 :prefix_fformat = ""; outputFileFormat = ".avif" ;break;
    case 5 :prefix_fformat = ""; outputFileFormat = ".avs" ;break;
    case 6 :prefix_fformat = ""; outputFileFormat = ".bpg" ;break;
    case 7 :prefix_fformat = ""; outputFileFormat = ".bmp" ;break;
    case 8 :prefix_fformat = ""; outputFileFormat = ".bmp2" ;break;
    case 9 :prefix_fformat = ""; outputFileFormat = ".bmp3" ;break;
    case 10 :prefix_fformat = ""; outputFileFormat = ".brf" ;break;
    case 11 :prefix_fformat = ""; outputFileFormat = ".cin" ;break;
    case 12 :prefix_fformat = ""; outputFileFormat = ".cip" ;break;
    case 13 :prefix_fformat = ""; outputFileFormat = ".cmyk" ;break;
    case 14 :prefix_fformat = ""; outputFileFormat = ".cmyka" ;break;
    case 15 :prefix_fformat = ""; outputFileFormat = ".dcx" ;break;
    case 16 :prefix_fformat = ""; outputFileFormat = ".dds" ;break;
    case 17 :prefix_fformat = ""; outputFileFormat = ".debug" ;break;
    case 18 :prefix_fformat = ""; outputFileFormat = ".dib" ;break;
    case 19 :prefix_fformat = ""; outputFileFormat = ".dpx" ;break;
    case 20 :prefix_fformat = ""; outputFileFormat = ".epdf" ;break;
    case 21 :prefix_fformat = ""; outputFileFormat = ".epi" ;break;
    case 22 :prefix_fformat = ""; outputFileFormat = ".eps" ;break;
    case 23 :prefix_fformat = ""; outputFileFormat = ".epsf" ;break;
    case 24 :prefix_fformat = ""; outputFileFormat = ".epsi" ;break;
    case 25 :prefix_fformat = ""; outputFileFormat = ".ept" ;break;
    case 26 :prefix_fformat = ""; outputFileFormat = ".exr" ;break;
    case 27 :prefix_fformat = ""; outputFileFormat = ".farbfeld" ;break;
    case 28 :prefix_fformat = ""; outputFileFormat = ".fax" ;break;
    case 29 :prefix_fformat = ""; outputFileFormat = ".fits" ;break;
    case 30 :prefix_fformat = ""; outputFileFormat = ".fl32" ;break;
    case 31 :prefix_fformat = ""; outputFileFormat = ".flif" ;break;
    case 32 :prefix_fformat = ""; outputFileFormat = ".fpx" ;break;
    case 33 :prefix_fformat = ""; outputFileFormat = ".ftxt" ;break;
    case 34 :prefix_fformat = ""; outputFileFormat = ".gif" ;break;
    case 35 :prefix_fformat = ""; outputFileFormat = ".gray" ;break;
    case 36 :prefix_fformat = ""; outputFileFormat = ".grava" ;break;
    case 37 :prefix_fformat = ""; outputFileFormat = ".hdr" ;break;
    case 38 :prefix_fformat = ""; outputFileFormat = ".heic" ;break;
    case 39 :prefix_fformat = ""; outputFileFormat = ".hrz" ;break;
    case 40 :prefix_fformat = ""; outputFileFormat = ".html" ;break;
    case 41 :prefix_fformat = ""; outputFileFormat = ".info" ;break;
    case 42 :prefix_fformat = ""; outputFileFormat = ".isobrl" ;break;
    case 43 :prefix_fformat = ""; outputFileFormat = ".isobrl6" ;break;
    case 44 :prefix_fformat = ""; outputFileFormat = ".jbig" ;break;
    case 45 :prefix_fformat = ""; outputFileFormat = ".jng" ;break;
    case 46 :prefix_fformat = ""; outputFileFormat = ".jp2" ;break;
    case 47 :prefix_fformat = ""; outputFileFormat = ".jpt" ;break;
    case 48 :prefix_fformat = ""; outputFileFormat = ".j2c" ;break;
    case 49 :prefix_fformat = ""; outputFileFormat = ".j2k" ;break;
    case 50 :prefix_fformat = ""; outputFileFormat = ".jpeg" ;break;
    case 51 :prefix_fformat = ""; outputFileFormat = ".jxr" ;break;
    case 52 :prefix_fformat = ""; outputFileFormat = ".json" ;break;
    case 53 :prefix_fformat = ""; outputFileFormat = ".jxl" ;break;
    case 54 :prefix_fformat = ""; outputFileFormat = ".kernel" ;break;
    case 55 :prefix_fformat = ""; outputFileFormat = ".miff" ;break;
    case 56 :prefix_fformat = ""; outputFileFormat = ".mono" ;break;
    case 57 :prefix_fformat = ""; outputFileFormat = ".mng" ;break;
    case 58 :prefix_fformat = ""; outputFileFormat = ".m2v" ;break;
    case 59 :prefix_fformat = ""; outputFileFormat = ".mpeg" ;break;
    case 60 :prefix_fformat = ""; outputFileFormat = ".mpc" ;break;
    case 61 :prefix_fformat = ""; outputFileFormat = ".mpr" ;break;
    case 62 :prefix_fformat = ""; outputFileFormat = ".msl" ;break;
    case 63 :prefix_fformat = ""; outputFileFormat = ".mtv" ;break;
    case 64 :prefix_fformat = ""; outputFileFormat = ".mvg" ;break;
    case 65 :prefix_fformat = ""; outputFileFormat = ".otb" ;break;
    case 66 :prefix_fformat = ""; outputFileFormat = ".p7" ;break;
    case 67 :prefix_fformat = ""; outputFileFormat = ".palm" ;break;
    case 68 :prefix_fformat = ""; outputFileFormat = ".pam" ;break;
    case 69 :prefix_fformat = ""; outputFileFormat = ".clipboard" ;break;
    case 70 :prefix_fformat = ""; outputFileFormat = ".pbm" ;break;
    case 71 :prefix_fformat = ""; outputFileFormat = ".pcd" ;break;
    case 72 :prefix_fformat = ""; outputFileFormat = ".pcds" ;break;
    case 73 :prefix_fformat = ""; outputFileFormat = ".pcl" ;break;
    case 74 :prefix_fformat = ""; outputFileFormat = ".pcx" ;break;
    case 75 :prefix_fformat = ""; outputFileFormat = ".pdb" ;break;
    case 76 :prefix_fformat = ""; outputFileFormat = ".pdf" ;break;
    case 77 :prefix_fformat = ""; outputFileFormat = ".pfm" ;break;
    case 78 :prefix_fformat = ""; outputFileFormat = ".pgm" ;break;
    case 79 :prefix_fformat = ""; outputFileFormat = ".phm" ;break;
    case 80 :prefix_fformat = ""; outputFileFormat = ".picon" ;break;
    case 81 :prefix_fformat = ""; outputFileFormat = ".pict" ;break;
    case 82 :prefix_fformat = ""; outputFileFormat = ".png" ;break;
    case 83 :prefix_fformat = "PNG8:"; outputFileFormat = ".png" ;break;
    case 84 :prefix_fformat = "PNG00:"; outputFileFormat = ".png" ;break;
    case 85 :prefix_fformat = "PNG24:"; outputFileFormat = ".png" ;break;
    case 86 :prefix_fformat = "PNG32:"; outputFileFormat = ".png" ;break;
    case 87 :prefix_fformat = "PNG48:"; outputFileFormat = ".png" ;break;
    case 88 :prefix_fformat = "PNG64:"; outputFileFormat = ".png" ;break;
    case 89 :prefix_fformat = ""; outputFileFormat = ".pnm" ;break;
    case 90 :prefix_fformat = ""; outputFileFormat = ".pocketmod" ;break;
    case 91 :prefix_fformat = ""; outputFileFormat = ".ppm" ;break;
    case 92 :prefix_fformat = ""; outputFileFormat = ".ps" ;break;
    case 93 :prefix_fformat = ""; outputFileFormat = ".ps2" ;break;
    case 94 :prefix_fformat = ""; outputFileFormat = ".ps3" ;break;
    case 95 :prefix_fformat = ""; outputFileFormat = ".psb" ;break;
    case 96 :prefix_fformat = ""; outputFileFormat = ".psd" ;break;
    case 97 :prefix_fformat = ""; outputFileFormat = ".ptif" ;break;
    case 98 :prefix_fformat = ""; outputFileFormat = ".qoi" ;break;
    case 99 :prefix_fformat = ""; outputFileFormat = ".raw" ;break;
    case 100 :prefix_fformat = ""; outputFileFormat = ".rgb" ;break;
    case 101 :prefix_fformat = ""; outputFileFormat = ".rgba" ;break;
    case 102 :prefix_fformat = ""; outputFileFormat = ".rgf" ;break;
    case 103 :prefix_fformat = ""; outputFileFormat = ".sgi" ;break;
    case 104 :prefix_fformat = ""; outputFileFormat = ".shtml" ;break;
    case 105 :prefix_fformat = ""; outputFileFormat = ".sparse-color" ;break;
    case 106 :prefix_fformat = ""; outputFileFormat = ".strimg" ;break;
    case 107 :prefix_fformat = ""; outputFileFormat = ".sun" ;break;
    case 108 :prefix_fformat = ""; outputFileFormat = ".svg" ;break;
    case 109 :prefix_fformat = ""; outputFileFormat = ".tga" ;break;
    case 110 :prefix_fformat = ""; outputFileFormat = ".tiff" ;break;
    case 111 :prefix_fformat = ""; outputFileFormat = ".txt" ;break;
    case 112 :prefix_fformat = ""; outputFileFormat = ".ubrl" ;break;
    case 113 :prefix_fformat = ""; outputFileFormat = ".ubrl6" ;break;
    case 114 :prefix_fformat = ""; outputFileFormat = ".uil" ;break;
    case 115 :prefix_fformat = ""; outputFileFormat = ".uyvy" ;break;
    case 116 :prefix_fformat = ""; outputFileFormat = ".vicar" ;break;
    case 117 :prefix_fformat = ""; outputFileFormat = ".video" ;break;
    case 118 :prefix_fformat = ""; outputFileFormat = ".viff" ;break;
    case 119 :prefix_fformat = ""; outputFileFormat = ".wbmp" ;break;
    case 120 :prefix_fformat = ""; outputFileFormat = ".wdp" ;break;
    case 121 :prefix_fformat = ""; outputFileFormat = ".webp" ;break;
    case 122 :prefix_fformat = ""; outputFileFormat = ".x" ;break;
    case 123 :prefix_fformat = ""; outputFileFormat = ".xbm" ;break;
    case 124 :prefix_fformat = ""; outputFileFormat = ".xpm" ;break;
    case 125 :prefix_fformat = ""; outputFileFormat = ".xwd" ;break;
    case 126 :prefix_fformat = ""; outputFileFormat = ".yaml" ;break;
    case 127 :prefix_fformat = ""; outputFileFormat = ".ycbcr" ;break;
    case 128 :prefix_fformat = ""; outputFileFormat = ".ycbcra" ;break;
    case 129 :prefix_fformat = ""; outputFileFormat = ".yuv" ;break;



    }
}


inline void do_task(std::atomic<int>& currentOpr, std::atomic<int>& failed){
    Magick::Image* allImage = new Magick::Image[allFileDir.size()];
 std::ofstream of;
   for(size_t i = 0; i < allFileDir.size(); ++i){
        try{
           currentOpr.fetch_add(std::move(i+1),std::memory_order_release);
      allImage[i].read((QDir::cleanPath(QString::fromStdString(allFileDir[i]))).toStdString());
      allImage[i].write(prefix_fformat + (QDir::cleanPath(QString::fromStdString(destDir))).toStdString() + "/conv_" + std::to_string(i) + outputFileFormat);
        }catch(std::exception &error){
           failed.fetch_add(1,std::memory_order_relaxed); //relax because after iteration is will release so does not matter
           if(of.is_open()){
             of << error.what() << std::endl;
           }else{
               of.open("error.log");
               of << error.what() << std::endl;
           }
        }catch(...){
           failed.fetch_add(1,std::memory_order_relaxed); //relax because after iteration is will release so does not matter
           if(of.is_open()){
             of << "Something Went Wrong...  Error not catched" << std::endl;
           }else{
               of << "Something Went Wrong...  Error not catched" << std::endl;
               of.open("error.log");
           }
       }
    }

    delete[] allImage;
   of.flush();
   of.close();
}

void MainWindow::on_pushButton_3_clicked()
{
    if(allFileDir.empty()){

      MainWindow::on_label_2_linkActivated(std::move("!IMPORTANT!: No Files Selected, Please Select a File First"));
      return;
    }else{
        if(outputFileFormat.empty()){
            MainWindow::on_label_2_linkActivated(std::move("!IMPORTANT!: No Output File Format Selected, Please Select a File Format"));
            return;
        }else{
          if(outputFileFormat.empty()){
              MainWindow::on_label_2_linkActivated(std::move("!IMPORTANT!: No Output Format Selected, Please Select a Output Format"));
              return;
          }


        }
        }
     Magick::InitializeMagick((QCoreApplication::applicationDirPath().toStdString()).c_str());
     ui->label_2->setText(std::move(""));
     std::atomic<int> currentFIle;
     std::atomic<int> failedOpr;
     failedOpr.store(0,std::memory_order_relaxed);
     currentFIle.store(0,std::memory_order_relaxed);
    std::thread imageConProcess(do_task,std::ref(currentFIle),std::ref(failedOpr));
    do{
        MainWindow::on_progressBar_valueChanged(std::move(std::move((100 / allFileDir.size())) * currentFIle.load(std::memory_order_acquire)));
    }while(std::move(currentFIle.load(std::memory_order_acquire) != allFileDir.size()));
    imageConProcess.join();
    MainWindow::on_progressBar_valueChanged(std::move(100));
    if(failedOpr.load(std::memory_order_relaxed) >= 1){
       ui->label_2->setText(std::move(QString::fromStdString(std::move(std::to_string(allFileDir.size() - failedOpr.load(std::memory_order_relaxed)))) + " Converts Were Succesfull, " + QString::fromStdString(std::to_string(failedOpr.load(std::memory_order_relaxed))) + " Files Failed To Convert"));

    }else{
        ui->label_2->setText(std::move("All Converts Were Succesfull, check path: " + QString::fromStdString(destDir)  + " For The Converted Files"));
    }

     return;
}


void MainWindow::on_label_2_linkActivated(const QString &link)
{
    ui->label_2->setText(link);
    return;
}


void MainWindow::on_pushButton_4_clicked()
{
   QDesktopServices::openUrl ( QUrl("https://github.com/cppLawyer") );
}


void MainWindow::on_progressBar_valueChanged(int value)
{
    ui->progressBar->setValue(std::move(value));
}

