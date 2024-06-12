#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Slide_Rayon_sliderMoved(int position);

    void on_Slide_Circonference_sliderMoved(int position);


    void on_Slide_Rayon_sliderReleased();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
