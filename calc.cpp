////
//// Created by 夜林蓝 on 2024/3/17.
////
//
//#include <stdio.h>
//#include "include/library.h"
//
////加载静态库 不加也没报错
////#pragma comment(lib, "liboperation.a")
//int main() {
//    int a = 10;
//    int b = 3;
//
//    printf("%d \n",add(a,b));
//    printf("%d \n",sub(a,b));
//    printf("%d \n",mul(a,b));
//    printf("%d \n",divide(a,b));
//    printf("%d \n",mode(a,b));
//
//
//

//
////    arr 表示数组首地址 但是以下情况除外：
////    1.sizeof(arr) 中表示整个数组
////    2.&arr表示整个数组
//    int arr[2][3] = {1,2,3,4,5,6};
//
//    printf("%p \n",&arr[0]); //首元素地址
//    printf("%p \n",&arr[0]+1); //首元素地址 +12个字节
//    printf("%p \n",arr);  //首元素地址
//    printf("%p \n",arr+1);  //首元素地址 +12个字节
//    printf("%p \n",&arr); //数组地址
//    printf("%p \n",&arr+1); //数组地址 + 24个字节
//
//
//    printf("row: %llu \n",sizeof(arr)/ sizeof(arr[0]));
//    printf("col: %llu \n",sizeof(arr[0])/ sizeof(arr[0][0]));
//
//
//    //0^a=a
//    //a^a=0
//    //a^b=b^a
//    return 0;
//}
