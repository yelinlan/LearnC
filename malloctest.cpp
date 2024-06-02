////
//// Created by 夜林蓝 on 2024/4/1.
////
//
//#include <cstdlib>
//#include <cstdio>
//#include <cstring>
//
//void testMallocSuccess();
//
//void testMallocFailed();
//
//void testMallocLeak();
//
//void testCallocInit();
//
//int main() {
//    return 0;
//}
//
//void testCallocInit() {
//    int *p = (int *) calloc(10, sizeof(int));
//    for (int i = 0; i < 10; ++i) {
//        printf("%d  ", *(p + i));
//    }
//    free(p);
//    p=NULL;
//}
//
//void testMallocLeak() {
//    while (true) {
//        malloc(1);
//    }
//}
//
//void testMallocFailed() {
//    int *p = (int *) malloc(LONG_LONG_MAX);
//    if (p == NULL) {
//        printf("%s\n", strerror(errno));
//    }
//}
//
//void testMallocSuccess() {
//    int *p = (int *) malloc(40);
//    for (int i = 0; i < 10; ++i) {
//        *(p + i) = i;
//    }
//    for (int i = 0; i < 10; ++i) {
//        printf("%d  ", *(p + i));
//    }
//    free(p);
//    p=NULL;
//}
