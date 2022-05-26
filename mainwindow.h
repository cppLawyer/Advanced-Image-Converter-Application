#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QStandardPaths>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  std::string dest_Path =
      (QStandardPaths::displayName(QStandardPaths::DesktopLocation))
          .toStdString();
  std::string file_Type;
  std::string type_Prefix;
  std::vector<QString> path_Files;

private slots:
  void on_ConvertButton_clicked();

  void on_filesToConvertButton_clicked();

  void on_fileTypeChoiceButton_activated(int index);

  void on_outputFileDirectoryButton_clicked();

  void on_githubLinkButton_clicked();

private:
  Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
