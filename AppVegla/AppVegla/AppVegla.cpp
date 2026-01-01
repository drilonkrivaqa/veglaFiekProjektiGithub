#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n--- Simple App ---\n";
    cout << "1) Add\n";
    cout << "2) Subtract\n";
    cout << "0) Exit\n";
}

int main() {
    int choice;
    do {
        showMenu();
        cout << "Choice: ";
        cin >> choice;
    } while (choice != 0);

    cout << "Bye!\n";
    return 0;
}
int add(int a, int b) {
    int c = a+b;
    return c;
}

int subtract(int a, int b) {
    return a - b;
}

void testPerson2() {
    cout << "Person 2 test: ";
    cout << add(2, 3) << " ";
    cout << subtract(5, 2) << endl;
}

int readA() {
    int x;
    cout << "Enter A: ";
    cin >> x;
    return x;
}

int readB() {
    int x;
    cout << "Enter B: ";
    cin >> x;
    return x;
}