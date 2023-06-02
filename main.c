//
//  main.c
//  AptechBaiTap001
//
//  Created by OnLight on 17/05/2023.
//

#include <stdio.h>

const float pi = 3.14159;

int main(int argc, const char * argv[]) {
    float x, y, z; // ban kinh, chu vi, dien tich
    printf("Nhap ban kinh \n");
    scanf("%f",&x);
    y = 2 * pi * x;
    z = pi * x * x;
    printf("Chu vi %0.2f \n", y);
    printf("Dien tich %0.2f \n", z);
    printf("Hello Git");
}
