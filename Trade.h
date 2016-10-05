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
    int indLowest = 0;
    int largest = 0;
    int indLargest = 0;

    for (int i = 1; i < prices.size(); ++i) {
        if ((prices[i] < prices[indLowest]) && (i < prices.size()-1)) {
            indLowest = i;
        }
    }

    for (int i = indLowest; i < prices.size(); ++i) {
        if (prices[i] > largest) {
            largest = prices[i];
            indLargest = i;
        } 
    }

    return Trade(indLowest, indLargest);
}














// Don't write any code below this line

#endif
