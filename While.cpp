#include <iostream>
using namespace std;

int main() {
double S = 0.0, n;
int i = 1;

cout << "Введіть значення n " << endl;
cin >> n;

while (i <= n) {
    S += 1.0 / i;
    i++;
}

cout << "Сума = " << S << endl;

}
