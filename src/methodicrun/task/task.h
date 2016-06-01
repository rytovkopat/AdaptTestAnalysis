#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>

enum TaskType
{
    RADIO = 1,
    CHECKSET = 2//,
    // NUMBER_STRING = 3,
    // NUMBER_SPIN = 4,
    // TEXT_STRING = 5,
    // и прочие возможные варианты подачи ответа
};

struct TaskMeta
{
    unsigned int id;
    double cost;
};

class TaskQuestion
{
public:
    TaskQuestion();


private:
    std::string question;
    TaskType tasktype;
    std::vector<std::string> answers;
    TaskMeta metaInfo;
};

class TaskCriteria
{
public:
    TaskCriteria();
private:
    TaskMeta metaInfo;

};

#endif // TASK_H
