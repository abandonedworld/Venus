#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//描述一个学生，一些数据
//typedef struct stu// 结构体关键字 stu //结构体标签  两个记起来就是结构体类型
//{
//	char name[20];//成员变量
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//相当于把struct stu直接变为了stu，这个stu是类型，下面的是变量
////全局变量，尽量少的使用全局变量
////这是一个语句，要加分号  定义一个结构体类型 这个类型和int一样，不占空间，只有当创建变量的时候才会开辟空间
//
//int main()
//{
//	stu s1 = { "张三", 20, "826786", "男" };
//	struct stu s2 = { "李四", 20, "972898", "女" };
//	return 0;
//}


//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//void print1(stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void print2(stu* ps)
//{
//	printf("name:%s\n", ps->name); 
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//int main()
//{
//	stu s = { "张三", 18, "1265178625", "男" };
//	print1(s);
//	print2(&s);//都能达到效果，但用地址好
//	return 0;
//}





