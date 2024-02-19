#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char mat[7][7];
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 7; j++) {
                cin >> mat[i][j];
            }
        }

        // 2D array to store the values of the cells and their diagonal neighbors
        vector<vector<char>> m;

        // Iterate through each cell except the border cells
        for (int i = 1; i < 6; i++) {
            for (int j = 1; j < 6; j++) {
                // Check if the condition is true
                if (mat[i][j] == 'B' &&
                    mat[i-1][j-1] == 'B' &&
                    mat[i+1][j+1] == 'B' &&
                    mat[i-1][j+1] == 'B' &&
                    mat[i+1][j-1] == 'B') {
                    // Store the values of the cells and their diagonal neighbors
                    vector<char> row;
                    row.push_back(mat[i][j]);
                    row.push_back(mat[i-1][j-1]);
                    row.push_back(mat[i+1][j+1]);
                    row.push_back(mat[i-1][j+1]);
                    row.push_back(mat[i+1][j-1]);
                    m.push_back(row);
                }
            }
        }

        // Print the stored values
        for (auto& row : m) {
            for (char val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
