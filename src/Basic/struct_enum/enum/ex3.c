#include <stdio.h>
#include <math.h>

typedef enum {
    QUADRATIC_OK = 0,
    QUADRATIC_NO_ROOTS,
    QUADRATIC_LINEAR,
    QUADRATIC_INVALID
} QuadraticStatus;

QuadraticStatus solve_quadratic(double a, double b, double c, double *x1, double *x2)
{
    if (a == 0) {
        if (b == 0) return QUADRATIC_INVALID; // Không phải phương trình
        *x1 = -c / b;
        return QUADRATIC_LINEAR; // Phương trình bậc 1
    }
    double delta = b * b - 4 * a * c;
    if (delta < 0) return QUADRATIC_NO_ROOTS; // Không có nghiệm thực
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return QUADRATIC_OK; // Có nghiệm
}

int main()
{
    double a, b, c, x1, x2;
    printf("Nhap a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    QuadraticStatus status = solve_quadratic(a, b, c, &x1, &x2);

    switch (status) {
        case QUADRATIC_OK:
            printf("Phuong trinh co 2 nghiem: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
            break;
        case QUADRATIC_NO_ROOTS:
            printf("Phuong trinh khong co nghiem thuc.\n");
            break;
        case QUADRATIC_LINEAR:
            printf("Phuong trinh bac 1, nghiem x = %.2lf\n", x1);
            break;
        case QUADRATIC_INVALID:
            printf("Khong phai phuong trinh.\n");
            break;
    }

    return 0;
}