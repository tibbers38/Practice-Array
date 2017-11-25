//
//  main.c
//  Practice Array
//
//  Created by Nam 😋 on 11/25/17.
//  Copyright © 2017 Nam 😋. All rights reserved.
//

#include <stdio.h>
#include "array.h"

int main() {
    int i,kichthuocmang=100;
    printf("Nhap kich thuoc mang: ");
    scanf("%d",&kichthuocmang);
    int mang[kichthuocmang];
    for (i=0; i<kichthuocmang; i++) {
        printf("Nhap phan tu thu %d: ",(i+1));
        scanf("%d", &mang[i]);
    }
    printf("Tong cac gia tri trong mang la: %d\n", tongArray(mang, kichthuocmang));
    printf("Trung binh cac gia tri trong mang la: %.4lf\n", trungbinhArray(mang, kichthuocmang));
    int mang1[4]={4,5,6,3}, mang2[5]={3,6,5,4,3};
    copyArray(mang1, mang2, 4);
    printf("Cac phan tu trong mang 2 sau khi copy la: ");
    for (i=0; i<5; i++) {
        printf("%d ",mang2[i]);
    }
    printf("\n");
    int mang3[4]={4,5,3,5};
    maxArray(mang3, 4, 4);
    printf("Mang 3 sau khi thuc hien ham maxArray: ");
    for (i=0; i<4; i++) {
        printf("%d ",mang3[i]);
    }
    printf("\n");
    int mang4[10]={5,2,7,3,2,7,1,5,2,7};
    sapxepArray(mang4, 10);
    printf("Mang 4 sau khi thuc hien ham sapxepArray: ");
    for (i=0; i<10; i++) {
        printf("%d",mang4[i]);
    }
    return (0);
}
