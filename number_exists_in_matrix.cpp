#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * ------------------------------------------------------------
 * Algorithm Challenge – Level 3 | #17 Number Exists in Matrix (3x3)
 *
 * This program checks whether a given number exists inside a 3x3 matrix.
 *
 * Core concepts covered:
 * - Matrix traversal using nested loops
 * - Early exit optimization (returning once found)
 * - Separating logic into reusable functions
 * - Thinking in terms of search space and data scanning
 *
 * Author: Ahmad Sindi
 * Language: C++
 * ------------------------------------------------------------
 */

// Prints a 3x3 matrix in a formatted layout
void PrintMatrix(int arr[3][3], short Rows, short Colms)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            cout << setw(2) << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

// Checks if a specific number exists in the matrix
bool IsNumInMatrix(int Matrix1[3][3], int Number, short Rows, short Colms)
{
    // Traverse the matrix element by element
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Colms; j++)
        {
            // If the number is found, exit early
            if (Matrix1[i][j] == Number)
            {
                return true;
            }
        }
    }

    // Number was not found after full traversal
    return false;
}

int main()
{
    int Matrix1[3][3] = {
        {55, 77, 1},
        {5, 24, 6},
        {85, 7, 14}};

    cout << "Matrix:\n";
    PrintMatrix(Matrix1, 3, 3);

    int Number;
    cout << "\nEnter number to search for: ";
    cin >> Number;

    if (IsNumInMatrix(Matrix1, Number, 3, 3))
        cout << "Yes: Number exists in the matrix.\n";
    else
        cout << "No: Number does NOT exist in the matrix.\n";

    return 0;
}
