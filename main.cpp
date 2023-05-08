#include <iostream>

using namespace std;

int main()
{
    int x;
    int j;
    while (true) {
        cout << endl;
        cout << "choose app 1, 2, 3, 4, 5, 6, 7 or 8: ";
        cin >> x;
        if (x == 1) {
            cout << "enter number: ";
            cin >> j;
            for (int i = 0; i < j; i++) {
                cout << "*";
            }
        }
        else if (x == 2) {
            cout << "enter number: ";
            cin >> j;
            for (int i = 0; i < j; i++) {
                for (int k = 0; k < j; k++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (x == 3) {
            cout << "enter number: ";
            cin >> j;
            for (int i = 0; i < j; i++) {
                for (int k = 0; k <= i; k++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (x == 4) {
            cout << "enter number: ";
            cin >> j;
            for (int i = 0; i < j; i++) {
                for (int k = j - 1; k > i; k--) {
                    cout << " ";
                }
                for (int k = 0; k <= i; k++) {
                    cout << "* ";
                }
                cout << endl;
            }
        }
        else if (x == 5) {
            cout << "enter number: ";
            cin >> j;
            for (int i = 0; i < j; i++) {
                for (int k = j; k > i + 1; k--) {
                    cout << " ";
                }
                for (int k = 0; k <= i; k++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (x == 6) {
            cout << "enter number: ";
            cin >> j;
            for (int i = 0; i < j; i++) {
                for (int k = j - 1; k > i; k--) {
                    cout << " ";
                }
                for (int k = 0; k <= (i - 1) * 2; k++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (x == 7) {
            cout << "enter number: ";
            cin >> j;
            for (int i = 1; i < j; i++) {
                for (int k = j - 1; k > i; k--) {
                    cout << " ";
                }
                for (int k = 0; k <= (i - 1) * 2; k++) {
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = j - 2; i > 0; i--) {
                for (int k = j - 1; k > i; k--) {
                    cout << " ";
                }
                for (int k = 0; k <= (i - 1) * 2; k++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (x == 8) {
            cout << "enter number: ";
            cin >> j;
            j++;
            for (int i = 0; i < j; i++) {
                for (int k = j - 1; k > i; k--) {
                    if (i != 0) {
                        cout << " ";
                    }
                }
                if (((i - 1) * 2) - 1 >= 1) {
                    cout << "*";
                    for (int k = 2; k <= (i - 1) * 2; k++) {
                        cout << " ";
                    }
                    cout << "*";
                }
                else {
                    if (i != 0) {
                        cout << "*";
                    }
                }
                cout << endl;
            }
            for (int i = j - 2; i > 0; i--) {
                for (int k = j - 1; k > i; k--) {
                    cout << " ";
                }
                if (((i - 1) * 2) - 1 >= 1) {
                    cout << "*";
                    for (int k = 2; k <= (i - 1) * 2; k++) {
                        cout << " ";
                    }
                    cout << "*";
                }
                else {
                    cout << "*";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
