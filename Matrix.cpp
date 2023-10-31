#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 1;
    }
    vector<vector<int>> matrix1(rows1, vector<int>(cols1));
    vector<vector<int>> matrix2(rows2, vector<int>(cols2));
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }
    vector<vector<int>> result_matrix(rows1, vector<int>(cols2, 0));
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
