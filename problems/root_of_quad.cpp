#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c, r1, r2;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be zero)." << endl;
    } else if (discriminant > 0) {
        // Two distinct real roots
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << r1 << " " << r2 << endl;
    } else if (discriminant == 0) {
        // One repeated real root
        r1 = -b / (2 * a);
        cout << "Roots are real and equal: " << r1 << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex: " 
             << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
