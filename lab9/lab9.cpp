// A) Write a main program that declares an array A[101][101] and initialises it according to your
// chosen.
// B) Write a function
// populateArray(..., int N);
// that takes a parameter N, indicating how random pairs of indices hi; j; i times it should generate,
// to update the entries the array A[][].
// C) Write a function
// searchValidEntries(int XL, int YL, int XH, int YH, ...);
// that takes the values of the coordinates of the corners of the bounding box and reports the
// indices and counts of the entries in A[][] with positive count values as illustrated in the example.
// D) From the main program read the values of 5 bounding boxes, one line at a time, and report the
// indices and counts of the entries in A[][] that lie withing the bounding boxes. The bounding
// boxes to try you algorithm on are:
// 80,

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populateArray(int A[101][101], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            A[i][j] = rand() % 100;
            std::cout << A[0][1] << std::endl;
        }
    }
}

void searchValidEntries(int XL, int YL, int XH, int YH)
{
}

int main()
{
    srand(time(0));
    int A[101][101];

    populateArray(A, 100);

    // std::cout << A[0][1] << std::endl;
    return 0;
}
