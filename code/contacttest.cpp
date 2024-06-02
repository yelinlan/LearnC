////
//// Created by 夜林蓝 on 2024/3/28.
////
//
//
//#include "contact.h"
//
//void menu();
//
//int main() {
//    setbuf(stdout, 0);
//    int input = 0;
//    Contact contact;
//    InitContact(&contact);
//    do {
//        menu();
//        printf("请选择:\n>>");
//        scanf("%d", &input);
//        switch (input) {
//            case 1:
//                addContact(&contact);
//                break;
//            case 2:
//                delOne(&contact);
//                break;
//            case 3:modify(&contact);
//                break;
//            case 4:select(&contact);
//                break;
//            case 5:
//                show(&contact);
//                break;
//            case 6:sort(&contact);
//                break;
//            case 0:
//                saveContact(&contact);
//                destroy(&contact);
//                printf("退出程序\n");
//                break;
//            default:
//                printf("选择错误\n");
//                break;
//        }
//    } while (input);
//
//    return 0;
//}
//
//void menu() {
//    printf("===================================\n");
//    printf("==== 1.add     2.del   3.modify ===\n");
//    printf("==== 4.select  5.show  6.sort   ===\n");
//    printf("==== 0.exit                     ===\n");
//    printf("===================================\n");
//}
//
