#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n], primaryDiagonal = 0, secondaryDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                primaryDiagonal += arr[i][j];
            if (i + j == n - 1)
            {
                secondaryDiagonal += arr[i][j];
            }
        }
    }
    cout << "Primary Diagonal Sum is :" << primaryDiagonal << endl;
    cout << "Secondary Diagonal Sum is :" << secondaryDiagonal << endl;
}
