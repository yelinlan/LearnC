//#include<stdio.h>
//
//int add(int a, int b) {
//    return a + b;
//}
//
//int sub(int a, int b) {
//    return a - b;
//}
//
//int mul(int a, int b) {
//    return a * b;
//}
//
//int div(int a, int b) {
//    return a / b;
//}
//
//void calc(int (*pf)(int, int)) {
//    int x, y;
//    printf("请输入参数 x y\n>>");
//    scanf("%d %d", &x, &y);
//    int ret = pf(x, y);
//    printf("%d \n", ret);
//}
//
//
//int main() {
//
//    printf("===============================\n");
//    printf("====0.退出 1.加 2.减 3.乘 4.除====\n");
//    printf("===============================\n");
//
//    int (*pf[])(int, int) ={0, add, sub, mul, div};
//
//    int input = 1;
//    while (input) {
//        printf("请选择\n>>");
//        scanf("%d", &input);
//        if (input == 0) {
//            printf("已经退出\n");
//            input = 0;
//        } else if (input >= 1 && input <= 4) {
//            calc(pf[input]);
//        } else {
//            printf("重新选择！\n>>");
//        }
//    }
//}