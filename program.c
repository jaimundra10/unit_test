#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include "calculator.h"

void test_case1(void)
{
    assert(calculator(10,1,10)==20);
    printf("\n addition of  two positive number");

    assert(calculator(11,1,-10)==1);
    printf("\n addition of positive and negative number");

    assert(calculator(-10,1,-10)==-20);
    printf("\n addition of two negative number");

    assert(calculator(0,1,10)==10);
    printf("\n addition of zero and positive number");

    assert(calculator(0,1,-10)==-10);
    printf("\n addition of zero and negative number");

    assert(calculator(0,1,0)==0);
    printf("\n addition of zeros");
}
void test_case2(void)
{
    assert(calculator(10,2,10)==0);
    printf("\n subtraction of two positive number");

    assert(calculator(10,2,-10)==20);
    printf("\n subtraction of positive and negative number");

    assert(calculator(-11,2,-10)==-1);
    printf("\n subtraction of two negative numbers");

    assert(calculator(0,2,10)==-10);
    printf("\n subtraction of zero and positive number");

    assert(calculator(0,2,-10)==10);
    printf("\ subtraction of zero and negative number");

    assert(calculator(0,2,0)==0);
    printf("\ subtraction of zeros");
 }
void test_case3(void)
{
    assert(calculator(10,3,10)==100);
    printf("\n multiplication of two positive number");

    assert(calculator(10,3,-10)==-100);
    printf("\n multiplication of positive and negative number");

    assert(calculator(-10,3,-10)==100);
    printf("\n multiplication of two negative number");

    assert(calculator(0,3,10)==00);
    printf("\n multiplication of zero and positive number");

    assert(calculator(0,3,-10)==00);
    printf("\n multiplication of zero and negative number");

     assert(calculator(0,3,0)==00);
    printf("\n multiplication of zeros");

}

void test_case4(void)
{
    assert(calculator(10,4,10)==1);
    printf("\n division of two positive number");

    assert(calculator(-10,4,-10)==1);
    printf("\n division of two negative number");

    assert(calculator(10,4,-10)==-1);
    printf("\n division of negative and positive number");

    assert(calculator(0,4,10)==0);
    printf("\n division of zero and positive number");

    assert(calculator(0,4,-10)==0);
    printf("\n division of zero and negative number");

}
void main()
{
    test_case1();
    test_case2();
    test_case3();
    test_case4();
}
