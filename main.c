#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("chcp 65001");
    float a, b, c;
    printf("ax^2 + bx + c = 0\na, b, c : \n");
    scanf(" %f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Корнем уравнения является любое число");
            } else {
                printf("Действительных корней нет");
            }
        } else {
            printf("Корень квадратного уравнения: x = %f", -c/b);
        }
    } else {
        float D = pow(b, 2) - 4 * a * c;
        if (D < 0) printf("Действительных корней нет");
        if (D == 0) printf("Корень квадратного уравнения: x = %f", (-b) / 2);
        if (D > 0) {
            printf("Корни квадратного уравнения:\n x1 = %f\n x2 = %f\n", (-b + sqrt(D)) / 2, (-b - sqrt(D)) / 2);
        }
    }

    return 0;
}
