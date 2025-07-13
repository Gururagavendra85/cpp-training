#pragma once
#include <functional>
#include <random>
#include <memory>


// Write your solution here
std::function<int(int)> randomize(std::function<int(int, int)> to_randomize, int seed=0){
    std::mt19937 engine(seed); //pass the seed to the random engine - here we use Mersenne twister alogo engine
    std::uniform_int_distribution<int> dist(1, 6); //post process- pass to the distrbution function to limit the range and equal chance to get

    auto greet = [to_randomize, engine, dist](int x) mutable {
        int random_val = dist(engine);
        return to_randomize(x, random_val);
    };

    return greet;
}


// randomize(int add(int,int), 42) -> int add(int)