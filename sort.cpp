//
//
//#include <cstddef>
//#include <cstdio>
//
//void sort(void *p, size_t length, size_t size, int (*compare)(void *, void *));
//
//int compare(void *a, void *b) {
//    return (int *) a - (int *) b;
//}
//
//void swap(char *a, char *b, size_t size) {
//    for (int i = 0; i < size; ++i) {
//        char temp;
//        temp = a[i];
//        a[i] = b[i];
//        b[i] = temp;
//    }
//}
//
//int main() {
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//    size_t size = sizeof(arr[0]);
//    size_t length = sizeof(arr) / size;
//    sort(arr, length, size, compare);
//    for (int i = 0; i < length; ++i) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//
//void sort(void *p, size_t length, size_t size, int (*compare)(void *, void *)) {
//    for (int i = 0; i < length - 1; ++i) {
//        for (int j = 0; j < length - i - 1; ++j) {
//            if (compare((char *) p + j * size, (char *) p + (j + 1) * size)) {
//                swap((char *) p + j * size, (char *) p + (j + 1) * size, size);
//            }
//        }
//    }
//
//}
//
//
