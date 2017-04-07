#ifndef TASK_H
#define TASK_H

#include <map>

class Task {

private:
    std::map<std::string, std::string> parameters;

public:
    Task();
    Task(const std::map<std::string, std::string> parameters);
    ~Task();

    bool timeToStart();

    void execute();

    bool done();

    const std::map<std::string, std::string>* getParameters();

    void setParameters(const std::map<std::string, std::string>* parameters);

    void addParameter(std::string key, std::string value);
};

#endif
