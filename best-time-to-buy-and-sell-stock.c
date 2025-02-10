#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int     min_val;
    int     max_val;
    int     profit;
    int     tmp_max;
    int     tmp;
    int     i;

    min_val = 99999;
    max_val = 0;
    profit = 0;
    tmp_max = 0;
    tmp = 0;
    i = 0;
    while (i < pricesSize)
    {
        if (prices[i] < min_val)
        {
            tmp = i + 1;
            tmp_max = 0;
            while (tmp < pricesSize)
            {
                if (prices[tmp] >= tmp_max && prices[tmp] > prices[i])
                {
                    if (prices[tmp] < prices[i])
                    {
                        i = tmp;
                        break;
                    }
                    if ((prices[tmp] - prices[i]) > profit)
                    {
                        min_val = prices[i];
                        max_val = prices[tmp];
                        tmp_max = prices[tmp];
                        profit = max_val - min_val;
                    }
                }
                tmp++;
            }
        }
        i++;
    }
    if (profit  < 0)
        return (0);
    return (profit);
}