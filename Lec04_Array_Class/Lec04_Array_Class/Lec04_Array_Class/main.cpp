#include <iostream>
using namespace std;

const int ROW = 3;
const int COL = 4;

int getMaxPixel(int image[ROW][COL]) {
    int maxVal = image[0][0];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (image[i][j] > maxVal) {
                maxVal = image[i][j];
            }
        }
    }
    return maxVal;
}

int main() {
    int image[ROW][COL] = {
        {12, 45, 78, 34},
        {90, 23, 67, 11},
        {56, 88, 21, 49}
    };

    cout << "Max pixel brightness: " << getMaxPixel(image) << endl;
    return 0;
}