#pragma once
#include "animal.h"
#include <vector>
#include <memory>


// Write Zoo class here
class Zoo{
    private:
        std::vector<std::unique_ptr<Animal>> vec;

    public:
    void addAnimal(Animal* obj){
        vec.push_back(std::unique_ptr<Animal>(obj));
    }

    void showAllAnimals(){
        for(const std::unique_ptr<Animal>& x: vec){
            x->printInfo();
            x->makeSound();
        }
    }
};