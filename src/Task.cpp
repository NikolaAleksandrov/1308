#include<map>

#include<Task.h>

Task::Task()
{

}

Task::Task(const std::map<std::string, std::string>& parameters)
{
    this->parameters.insert(parameters.begin(), parameters.end();
}

Task::~Task()
{

}

abstract bool Task::timeToStart();

abstract void Task::execute();

abstract bool Task::done();


