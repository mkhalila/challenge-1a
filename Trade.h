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
    int indLargest = 0;
    int maxProfit = 0;

    for(int i = 0; i < prices.size(); ++i) {
        for (int j = i; j < prices.size(); ++j) {
            if ((prices[j] - prices[i]) > maxProfit) {
                maxProfit = prices[j] - prices[i];
                indLowest = i;
                indLargest = j;
            }
        }
    }

    cout << indLowest << " " << indLargest << endl;
    
    return Trade(indLowest, indLargest);
}

// Don't write any code below this line

#endif
