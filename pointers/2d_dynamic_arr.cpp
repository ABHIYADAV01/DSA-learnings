#include <iostream>
using namespace std;

int **create2D_array(int rows, int cols)
{

    int **arr = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    int value = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
}

int main()
{

    int row, col;

    cin >> row >> col;

    int **arr = create2D_array(row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}