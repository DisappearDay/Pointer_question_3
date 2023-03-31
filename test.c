#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)( & aa + 1);
//	int* ptr2= (int*)(*(aa + 1));  // *(aa + 1)相当于拿到了第二行的数组名了，aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
//	return 0;
//}


//int main() {
//	char* a[] = { "work","at","alibaba" }; // a不是一个指针
//	//数组里面是常量字符串  第一个元素存的是w 第二个元素存的是a  第三个元素存的是a
//	char** pa = a;    
//	pa++;  
//	printf("%s\n", *pa);  
//	return 0;
//}


int main() {
	char* c[] = { "ENTER","NEW","POINT","FIRST" };   //  ++ 是+= 指针移动不归位  //
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
 }
