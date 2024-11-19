#include <iostream>
#include "arrayAndFileProcces.h"
#include "sort.h"
#include <string>
#include "bigONotation.h"
#define N_MAX 10000000
#define N_MID 10000
#define N_MIN 1000
#define N_MINI 100
#define N_MINIMINI 10

using namespace std;

string fileName = "random.txt";

int main()
{

    int AMax[N_MAX];
    int AMid[N_MID];
    int AMin[N_MIN];
    int AMini[N_MINI];
    int AMinMini[N_MINIMINI];

    // putRandomNumberInFile(N_MAX);
    // putRandomNumberInArray(fileName, AMax, N_MAX);

    // printf("Original Array\n");
    // printArray(AMax, N_MAX);

    // /**
    //  * @brief  INSERTION SORT WITH ARRAYS
    //  */
    // double iMAxTime = iSort(AMax, N_MAX);

    // putRandomNumberInFile(N_MID);
    // putRandomNumberInArray(fileName, AMid, N_MID);

    // double iMidTime = iSort(AMid, N_MID);

    // putRandomNumberInFile(N_MIN);
    // putRandomNumberInArray(fileName, AMin, N_MIN);

    // double iMinTime = iSort(AMin, N_MIN);

    // putRandomNumberInFile(N_MINI);
    // putRandomNumberInArray(fileName, AMini, N_MINI);

    // double iMiniTime = iSort(AMini, N_MINI);

    // putRandomNumberInFile(N_MINIMINI);
    // putRandomNumberInArray(fileName, AMinMini, N_MINIMINI);

    // double iMinMiniTime = iSort(AMinMini, N_MINIMINI);

    // cout << "iTime: " << iMAxTime << endl;
    // cout << "iTime: " << iMidTime << endl;
    // cout << "iTime: " << iMinTime << endl;
    // cout << "iTime: " << iMinMiniTime << endl;

    // double iNumberofArray[] = {N_MAX, N_MID, N_MIN, N_MINI, N_MINIMINI};
    // double iTimeList[] = {iMAxTime, iMidTime, iMinTime, iMiniTime, iMinMiniTime};
    // // getOnotationGraph(iSortType, iNumberofArray, iTimeList);
    // printf("Insertion Sorted Array\n");
    // printArray(A, numberofArray);

    // shuffler(A, numberofArray);
    // printf("Shuffled Array\n");
    // printArray(A, numberofArray);
    // /**
    //  * @brief SELECTION SORT WITH ARRAYS
    //  */

    // sSort(A, numberofArray);
    // printf("Selection Sorted Array\n");
    // printArray(A, numberofArray);

    // printf("Shuffled Array\n");
    // shuffler(A, numberofArray);

    // /**
    //  * @brief BUBBLE SORT WITH ARRAYS
    //  */
    // bSort(A, numberofArray);

    // printf("Bubble Sorted Array\n");
    // printArray(A, numberofArray);

    /**
     * @brief heapSort
     */
    // shuffler(A, numberofArray);
    putRandomNumberInFile(N_MAX);
    putRandomNumberInArray(fileName, AMax, N_MID);

    double heapMaxTime = heapSort(AMax, N_MAX);

    putRandomNumberInFile(N_MID);
    putRandomNumberInArray(fileName, AMid, N_MID);

    double heapMidTime = heapSort(AMid, N_MIN);

    putRandomNumberInFile(N_MIN);
    putRandomNumberInArray(fileName, AMin, N_MID);

    double heapMinTime = heapSort(AMin, N_MIN);
    putRandomNumberInFile(N_MINI);
    putRandomNumberInArray(fileName, AMini, N_MID);

    double heapMiniTime = heapSort(AMini, N_MINI);

    putRandomNumberInFile(N_MINIMINI);
    putRandomNumberInArray(fileName, AMinMini, N_MID);

    double heapMinMiniTime = heapSort(AMinMini, N_MINIMINI);

    cout << "heapTime: " << heapMaxTime << endl;
    cout << "heapTime: " << heapMidTime << endl;
    cout << "heapTime: " << heapMinTime << endl;
    cout << "heapTime: " << heapMiniTime << endl;
    cout << "heapTime: " << heapMinMiniTime << endl;

    double hNumberofArray[] = {N_MAX, N_MID, N_MIN, N_MINI, N_MINIMINI};
    double hNumberList[] = {heapMaxTime, heapMidTime, heapMinTime, heapMiniTime, heapMinMiniTime};
    getOnotationGraph(heapSortType, hNumberofArray, hNumberList);
    // getCompareOnotation(iNumberofArray, iTimeList , hNumberofArray , hNumberList);
    // printf("Heap Sorted Array\n");
    // printArray(A, numberofArray);

    return 0;
}
