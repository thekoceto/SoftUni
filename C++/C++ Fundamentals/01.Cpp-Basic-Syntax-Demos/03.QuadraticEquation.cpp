#include <iostream>
#include <cmath>

int main ()
{
    float  a, b, c, discriminant, x1, x2;

    std::cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        std::cout << x1 << " " << x2 << std::endl;
    }

    else if (discriminant == 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        std::cout << x1 << std::endl;
    }
    else {
        std::cout << "no roots"  << std::endl;
    }
    return 0;
}
