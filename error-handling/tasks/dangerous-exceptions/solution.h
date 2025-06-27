#pragma once
#include "account.h"

#include <iostream>

void transferFunds(Account& from, Account& to, double amount) {
    to.add(amount);
    try{
        from.sub(amount);
    }
    catch(std::runtime_error& ex){
        to.sub(amount);
        throw;
    }
 

}

//since no loweer nound set for the subtraction the above worked

// but if there is something like 
// if(amount<20){too less to deduct} then above will fail when there is only 10 rupee in from and to asking 18