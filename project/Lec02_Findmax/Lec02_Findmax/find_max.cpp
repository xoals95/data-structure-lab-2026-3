#include <iostream>
using namespace std;

int findArrayMax(int score[], int n)
{
    int tmp = score[0];
    for (int i = 1; i < n; i++) {
        if (score[i] > tmp) {
            tmp = score[i];
        }
    }
    return tmp;
}

// ÁÖ ÇÔ¼ö
int main()
{
    int score[5] = { 1, 10, 2, 4, 5 };
    int out;
    out = findArrayMax(score, 5);
    cout << "result = " << out;

    return 0;
}