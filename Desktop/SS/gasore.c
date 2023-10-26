#include <stdio.h>

int main() {
    int x = 5, y = 7, z = 10;
    int a = 15, b = 20, c = 30;

    int result1 = ((x++) * (y--)) + ((++z) / 2);//the answer is 40
    printf("x = %d, y = %d, z = %d, result1 = %d\n", x, y, z, result1);

    x = 5;
    y = 7;
    z = 10;
    int result2 = ((++x) * (--y)) - ((z--) % 3);//the answer is 35
    printf("x = %d, y = %d, z = %d, result2 = %d\n", x, y, z, result2);

    a = 15;
    b = 20;
    c = 30;
    int result3 = ((a-- * b) + (--c)) / 2;//the answer is 164
    printf("a = %d, b = %d, c = %d, result3 = %d\n", a, b, c, result3);

    return 0;
}
