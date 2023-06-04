#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number between 1 and 9: ";
    cin >> n;

    // Check if input is valid
    while (n % 2 == 0 || n < 1 || n > 9) {
        cout << "Invalid input. Please enter an odd number between 1 and 9: ";
        cin >> n;
    }

    // Create Magic Square
    int magicSquare[9][9] = { 0 };
    int row = n - 1; 
    int col = n / 2;
    int num = 1;

    while (num <= n * n) {
        magicSquare[row][col] = num++;
        int tempRow = row, tempCol = col;
        row -= 1;
        col += 1;

        if (row == -1) {
            row = n - 1;
        }

        if (col == n) {
            col = 0;
        }

        if (magicSquare[row][col] != 0) {
            row = tempRow + 1;
            col = tempCol;

            if (row == n) {
                row = 0;
            }
        }
    }

    // Print Magic Square
    cout << "Magic Square:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << magicSquare[i][j] << " " ;
        }

        cout << endl;
    }

    return 0;
}

