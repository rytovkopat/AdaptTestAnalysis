#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <string>
#include <QTimer>

namespace Ui {
class MainWindow;

enum MainWindowState;
}

enum MainWindowState
{
    NO_TEST = 0,
    END_TEST = 1,
    ACTIVE_RADIO = 2,
    ACTIVE_SUBSET = 3,
    WAIT = 4
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_StartTest_clicked();

    void on_pushButton_StopTest_clicked();

    void on_pushButton_Skip_clicked();

    void on_pushButton_Response_clicked();

public slots:
    void receiveTask(const std::string& question, const std::vector<std::string>& answers)
signals:

private:
    Ui::MainWindow *ui;

    Ui::MainWindowState state;  // идентификатор состояния тестирующей машины
    std::string theme;          // тема тестирования
    unsigned int taskNo;        // номер выданного задания
    double CurrentScore;        // текущий балл

    std::vector<int> taskNums;      // массив номеров заданий
    std::vector<double> taskCosts;  // массив стоимостей заданий
    std::vector<double> taskScores; // массив оценок за ответы

    std::string taskQuestion;
    std::vector<std::string> taskVariants;

    QTimer timer;  // таймер

private:
    void goState(Ui::MainWindowState newState);
    void stopTest(bool isTimerInterrupt = true);
    void skipTask();
    void sendTaskResponse(std::string responseText);
    void
};

#endif // MAINWINDOW_H
