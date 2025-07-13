#pragma once
#include <queue>
#include <functional>
// Write your solution here
class Scheduler{
    private:
        std::queue<std::function<void()>> q;
        std::function<void()> f;

    public:
        void addTask(std::function<void()> task){
            q.push(task);
        }

        void runAll(){
            while (!q.empty()) {
                q.front()();
                q.pop();
            }
        }


};