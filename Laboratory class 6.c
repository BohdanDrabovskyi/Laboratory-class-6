#include <stdio.h>
#include <math.h>

double dis(int x1, int y1, int x2, int y2) {
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return a;
}

int main() {
    int x1, y1, x2, y2;
    double length;

    printf("Enter the coordinates of the starting point of the vector (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the end point of the vector (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    length = dis(x1, y1, x2, y2);

    printf("Vector length: %.6f\n", length);

    return 0;
}
