    #include <iostream>
    using namespace std;
    int findmax(int arr[4][4]) {
        int max = arr[0][0];
        for (int i = 0; i < 4; i++) {
            if (arr[i][i] > max) max = arr[i][i];
            if (arr[i][3 - i] > max) max = arr[i][3 - i];
        }
        return max;
    }

    int mult(int arr[4][4], int i) {
        return arr[0][i] * arr[1][i] * arr[2][i] * arr[3][i];
    }

    int main() {
        int arr[4][4] = {
        {11, 12, 3, 4}, 
        {2, 6, 7, 8}, 
        {3, 2, 5, 4},
        {4, 5, 6, 7}};
        
        int max = findmax(arr);
        int result = 1;
        for (int i = 0; i < 4; i++) {
            if (arr[0][i] > max) {
                result *= mult(arr, i);
            }
        }
        cout << "result: " << result;
            
    }
