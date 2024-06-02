////
//// Created by 夜林蓝 on 2024/3/27.
////
//
//#include <string.h>
//#include <stdio.h>
//
//void myMemcopy(void *des, void *src, size_t size);
//
//void test1();
//
//void myMemmove(void *des, void *src, size_t size);
//
//void test2();
//
//void test3();
//
//void zeroOrOne(int num);
//
//void test4();
//
//void test5();
//
//void test6();
//
//void swap(char *a, int num, int size, int i);
//
//void test7();
//
//void test8();
//
//void test9();
//
//typedef struct stu {
// stu * next;
//}stu;
//
//int main() {
//    stu stu;
//    return 0;
//}
//
//void test9() {//    int a[] = {1, 2, 3, 4, 4, 6, 7, 8, 9};
//    int a[] = {9, 8, 7, 6, 4, 4, 3, 2, 1};
//    int c = 0;
//    int b = 0;
//    int num = 9;
//    for (int i = 0; i < num - 1; ++i) {
//        if (b + c == 2) {
//            printf("无序\n");
//        }
//        if (a[i] > a[i + 1]) {
//            b = 1;
//        } else if (a[i] < a[i + 1]) {
//            c = 1;
//        }
//    }
//    printf("有序\n");
//}
//
//void test8() {
//    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    int *s = &arr[0][0];
//
//    int pos = -1;
//    int num = 4;
//    int start = 0;
//    int end = 8;
//    int mid = (start + end) / 2;
//
//    while (start < end) {
//        if (s[mid] == num) {
//            pos = mid;
//            break;
//        } else if (s[mid] < num) {
//            start = mid;
//            mid = (start + end) / 2 + 1;
//        } else {
//            end = mid;
//            mid = (start + end) / 2 - 1;
//        }
//    }
//
//    printf("%d %d\n", pos / 3, pos % 3);
//}
//
//void test7() {
//    char a[] = "ABCD";
//    int num = 1;
//    int size = sizeof(a) / sizeof(a[0]) - 1;
//    for (int i = num - 1; i >= 0; i--) {
//        swap(a, num, size, i);
//4    }
//    printf("%s\n", a);
//}
//
//void swap(char *a, int num, int size, int i) {
//    int temp = a[size - (num - i)];
//    a[size - (num - i)] = a[i];
//    a[i] = temp;
//}
//
//void test6() {
//    char a[1000] = {0};
//    for (int i = 0; i < 1000; ++i) {
//        a[i] = (-1 - i);
//    }
//    printf("%zu\n", strlen(a));
//}
//
//void test5() {
//    int num = 4;
//    for (int i = num - 1; i >= 0; i--) {
//        for (int j = 0; j < num; ++j) {
//            printf(j < i ? "  " : "* ");
//        }
//        printf("\n");
//    }
//}
//
//void test4() {
//    int a = 123;
//    int cof = 1;
//    int sum = 0;
//    while (a) {
//        sum += cof * (a % 2);
//        a /= 10;
//        cof *= 10;
//    }
//    printf("%d\n", sum);
//}
//
//void test3() {
//    char a[] = "123456";
//    memset(a, 'x', 3);
//    printf("%s\n", a);
//}
//
//void test2() {
//    long str[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    myMemmove(str, str + 2, 20);
//    for (long de: str) {
//        printf("%ld ", de);
//    }
//}
//
//void myMemmove(void *des, void *src, size_t size) {
//    char temp[size];
//    myMemcopy(temp, src, size);
//    for (int i = 0; i < size; ++i) {
//        ((char *) des)[i] = ((char *) temp)[i];
//    }
//
//}
//
//void test1() {
//    long str[] = {1, 2, 3, 4, 5, 6};
//    long des[5] = {0};
//    myMemcopy(des, str, 20);
//    for (long de: des) {
//        printf("%ld ", de);
//    }
//}
//
//void myMemcopy(void *des, void *src, size_t size) {
//    for (int i = 0; i < size; ++i) {
//        ((char *) des)[i] = ((char *) src)[i];
//    }
//}
