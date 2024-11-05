#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <string.h>
#include <string>
void getRandomNumberArray(int *A, int n)
{

    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }
}

void putRandomNumberInFile(int n)
{
    int A[n];
    FILE *f = fopen("random.txt", "w");
    getRandomNumberArray(A, n);
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d ", A[i]);
    }
    fclose(f);
}

void putRandomNumberInArray(std::string fileName, int *A, int n)
{
    std::fstream myfile(fileName, std::ios::in);
    for (int i = 0; i < n; i++)
    {
        myfile >> A[i];
    }
    myfile.close();
}

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}
