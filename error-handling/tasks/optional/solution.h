#pragma once
#include <iostream>
#include <optional>
#include <limits>  
// Write your solution here

std::optional<int> parseInteger(const std::string& str){
    int result=0;
    bool negative_number = false;
    int start_index = 0;

    if(str.size()<1){
       return std::nullopt;
    }

    if(str.size()>1 && str[0]=='-'){
        negative_number=true;
        start_index=1;
    }else if(str[0] =='-'){
        return std::nullopt;
    }
    
    for(int i=start_index;i<str.size(); ++i){
        char c = str[i];
        if(c>='0' && c<='9'){
            result=result*10 + (c-'0');
        }
        else{
            // std::cout<<"failed";
            return std::nullopt;
        }
    }

    if(negative_number){
        result = -result;
    }

    // Limit input to at most 10 digits
    int digit_count = str.size() - start_index;
    if (digit_count >= 10) {
        return std::nullopt;
    }
    // std::cout<<"passed";
    return result;
}
