//
//  array.c
//  Practice Array
//
//  Created by Nam 😋 on 11/25/17.
//  Copyright © 2017 Nam 😋. All rights reserved.
//

#include "array.h"

int tongArray (int array[], int kichthuocArray)
{
    int S,i;
    S=0;
    for (i=0; i<kichthuocArray; i++) {
        S+=array[i];
    }
    return S;
}

double trungbinhArray (int array[], int kichthuocArray)
{
    int S=0,i;
    double TB;
    for (i=0; i<kichthuocArray; i++) {
        S+=array[i];
    }
    TB=(double)S/(kichthuocArray);
    return TB;
}

void copyArray (int array1[], int array2[], int kichthuocArray)
{
    int i;
    for (i=0; i<kichthuocArray; i++) {
        array1[i]=array2[i];
    }
}

void maxArray (int array[], int kichthuocArray, int giatrimax)
{
    int i;
    for (i=0; i<kichthuocArray; i++) {
        if (array[i]>giatrimax) {
            array[i]=0;
        }
    }
}

void sapxepArray (int array[], int kichthuocArray)
{
    int i,k,m = 0;
    for (i=0; i<kichthuocArray; i++) {
        for (k=1; k<kichthuocArray; k++) {
            if (array[i]>array[k]) {
                array[i]=m;
                array[k]=array[i];
                m=array[k];
            }
        }
    }
}

