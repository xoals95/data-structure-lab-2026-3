#include <iostream>
using namespace std;

class Polynomial {
private:
    int coef[100];
    int degree;

public:
    Polynomial() {
        degree = 0;
        for (int i = 0; i < 100; i++) {
            coef[i] = 0;
        }
    }

    void setCoefficient(int exp, int value) {
        coef[exp] = value;
        if (exp > degree) {
            degree = exp;
        }
    }

    Polynomial add(const Polynomial& other) {
        Polynomial result;
        int maxDegree = (degree > other.degree) ? degree : other.degree;

        for (int i = 0; i <= maxDegree; i++) {
            result.coef[i] = coef[i] + other.coef[i];
        }

        result.degree = maxDegree;
        return result;
    }

    void print() {
        bool first = true;

        for (int i = degree; i >= 0; i--) {
            if (coef[i] != 0) {
                if (!first && coef[i] > 0) {
                    cout << " + ";
                }

                if (i == 0) {
                    cout << coef[i];
                }
                else if (i == 1) {
                    cout << coef[i] << "x";
                }
                else {
                    cout << coef[i] << "x^" << i;
                }

                first = false;
            }
        }

        if (first) {
            cout << "0";
        }

        cout << endl;
    }
};

int main() {
    Polynomial p1, p2, p3;

    p1.setCoefficient(2, 3);
    p1.setCoefficient(1, 2);
    p1.setCoefficient(0, 1);

    p2.setCoefficient(2, 1);
    p2.setCoefficient(1, 4);
    p2.setCoefficient(0, 5);

    cout << "P1 = ";
    p1.print();

    cout << "P2 = ";
    p2.print();

    p3 = p1.add(p2);

    cout << "P1 + P2 = ";
    p3.print();

    return 0;
}