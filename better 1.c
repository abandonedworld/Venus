#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	float b = 10.0;//两个值虽然一样，但是类型不一样，类型决定看待内存的视角
//	return 0;
//}


//int main()//写一段代码判断当前机器的字节序,pc机器一般都是小端
//{
//	int a = 1;
//	char* p = (char*)&a;//强制类型转换把a的取地址符号转化为字符型
//	if (*p == 1)
//	{
//		printf("小端"); \
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}还不够好，这个程序，用函数好一些

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//	//可以直接return (*(char*)&a);
//}
//
//
//int main()
//{
//	//返回1，小端
//	//返回0，大端
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("小端"); \
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}



//int main()
//{
//	char a = -1;
//	//100000000000000000000000000000001  原码
//	//111111111111111111111111111111110  反码
//	//111111111111111111111111111111111  补码
//	//111111111111111111111111111111111 只能有8个比特位,整型提升32个1
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//000000000000000000000000011111111本来是8个1无符号数，最高位的不是符号位，补0，正数三码相同
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//a整形提升
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	//11111111111111111111111110000000  整形提升 无符号数当作整数，三码相同
//	printf("%u\n", a);
//    //%d 打印十进制的有符号数
//	  //%u 打印十进制的无符号数
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}