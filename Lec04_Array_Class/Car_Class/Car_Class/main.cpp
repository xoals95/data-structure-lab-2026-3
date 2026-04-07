#include <iostream>
using namespace std;

class Car {
protected:
    string brand;
    int speed;

public:
    Car(string b = "Unknown", int s = 0) {
        brand = b;
        speed = s;
    }

    void accelerate(int value) {
        speed += value;
    }

    void showInfo() {
        cout << "Car brand: " << brand << endl;
        cout << "Car speed: " << speed << endl;
    }
};

class SportsCar : public Car {
private:
    int turboBoost;

public:
    SportsCar(string b = "Unknown", int s = 0, int t = 0) : Car(b, s) {
        turboBoost = t;
    }

    void boost() {
        speed += turboBoost;
    }

    void showSportsCarInfo() {
        cout << "SportsCar brand: " << brand << endl;
        cout << "SportsCar speed: " << speed << endl;
        cout << "Turbo boost: " << turboBoost << endl;
    }
};

int main() {
    Car car1("Hyundai", 100);
    car1.accelerate(20);

    cout << "[Car Information]" << endl;
    car1.showInfo();
    cout << endl;

    SportsCar sports1("Ferrari", 200, 50);
    sports1.accelerate(30);
    sports1.boost();

    cout << "[SportsCar Information]" << endl;
    sports1.showSportsCarInfo();

    return 0;
}