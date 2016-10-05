#ifndef TRADE_H
#define TRADE_H


#include "vector.h"
#include <iostream>
using pep::vector;
using std::cout;
using std::endl;


class Trade {
protected:
    int buyTime;
    int sellTime;

public:
    Trade(const int buyTimeIn, const int sellTimeIn)
        : buyTime(buyTimeIn), sellTime(sellTimeIn) {
    }

    int getBuyTime() const {
        return buyTime;
    }

    int getSellTime() const {
        return sellTime;
    }

};

Trade bestBuySellTime(const vector<int> & prices) {
    int smallestIndex = 0;
    int largest = 0;
    int largestIndex = 0;
}














// Don't write any code below this line

#endif
