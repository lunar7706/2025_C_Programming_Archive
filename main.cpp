#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

// 교점을 구하는 함수
int getIntersection(Point A1, Point A2, Point B1, Point B2, Point* intersection) {
    double a1 = A2.y - A1.y;
    double b1 = A1.x - A2.x;
    double c1 = a1 * A1.x + b1 * A1.y;

    double a2 = B2.y - B1.y;
    double b2 = B1.x - B2.x;
    double c2 = a2 * B1.x + b2 * B1.y;

    double det = a1 * b2 - a2 * b1;

    if (det == 0) {
        // 두 직선이 평행하거나 일치
        return 0;
    } else {
        // 크래머 공식으로 교점 계산
        intersection->x = (b2 * c1 - b1 * c2) / det;
        intersection->y = (a1 * c2 - a2 * c1) / det;
        return 1;
    }
}

int main() {
    Point A1, A2, B1, B2, intersection;

    printf("첫 번째 직선의 두 점을 입력하세요 (x1 y1 x2 y2): ");
    scanf("%lf %lf %lf %lf", &A1.x, &A1.y, &A2.x, &A2.y);

    printf("두 번째 직선의 두 점을 입력하세요 (x3 y3 x4 y4): ");
    scanf("%lf %lf %lf %lf", &B1.x, &B1.y, &B2.x, &B2.y);

    if (getIntersection(A1, A2, B1, B2, &intersection)) {
        printf("교점은 (%.2lf, %.2lf)입니다.\n", intersection.x, intersection.y);
    } else {
        printf("두 직선은 평행하거나 일치하여 교점이 없습니다.\n");
    }

    return 0;
}
