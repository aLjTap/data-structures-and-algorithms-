#include <iostream>
#include <matplot/matplot.h>
enum sortType
{
    iSortType,
    sSortType,
    bSortType,
    heapSortType

};

void getOnotationGraph(sortType sort, double nList[], double elapsedTimesList[])
{
    switch (sort)
    {
    case iSortType:
        // formula for insertionSort O(n^2)
        // draw graph to time complexity

        {
            std::vector<double> N;
            std::vector<double> time;
            for (int i = 0; i < 5; i++)
            {
                N.push_back(nList[i]);
                time.push_back((nList[i]) * (elapsedTimesList[i]));
            }
            matplot::plot(N, time);
            matplot::show();
        }
        break;
    case sSortType:
        // formula for selectionSort O(n^2)
        // draw graph
        // {
        //     std::vector<double> x;
        //     std::vector<double> y;
        //     x.push_back(n);
        //     y.push_back((n * n) * (elapsedTime));
        //     matplot::plot(x, y);
        //     matplot::show();
        // }
        break;
    case bSortType:
        // formula for bubbleSort O(n^2)
        // draw graph
        // {
        //     std::vector<double> x;
        //     std::vector<double> y;
        //     x.push_back(n);
        //     y.push_back((n * n) * (elapsedTime));
        //     matplot::plot(x, y);
        //     matplot::show();
        // }
        break;
    case heapSortType:
        // formula for heapSoer O(nlogn)
        {
            std::vector<double> N;
            std::vector<double> time;
            for (int i = 0; i < 5; i++)
            {
                N.push_back(nList[i]);
                time.push_back((nList[i]) * (elapsedTimesList[i]));
            }
            matplot::plot(N, time);
            matplot::show();
        }
        break;
    default:
        break;
    }
}

void getCompareOnotation(double iNList[], double iElapsedTimesList[], double heapNList[], double heapElapsedTimesList[])
{
    std::vector<double> iN, iTime, hN, hTime;
    for (int i = 0; i < 5; i++)
    {
        iN.push_back(iNList[i]);
        iTime.push_back(iElapsedTimesList[i]);
        hN.push_back(heapNList[i]);
        hTime.push_back(heapElapsedTimesList[i]);
    }
    matplot::vector_2d newcolors = {{0.83, 0.14, 0.14},
                                    {1.00, 0.54, 0.00},
                                    {0.47, 0.25, 0.80},
                                    {0.25, 0.80, 0.54}};
    matplot::colororder(newcolors);

    matplot::plot(iN, iTime)->line_width(2);
    matplot::hold(true);
    matplot::plot(hN, hTime)->line_width(2);

    // matplot::xlim(0, 1000 * 1000);
    matplot::ylim({0, 13000});
    matplot::xlim({0, 100000});
    matplot::title("Compare heap and insertion sort");
    matplot::legend();
    matplot::hold(false);
    matplot::show();
}