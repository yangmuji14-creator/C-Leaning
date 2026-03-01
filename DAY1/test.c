#define _CRT_SECURE_NO_WARNINGS
//std - 标准
//i - input输出
//o - output输入
//ctrl + f5 快速调试

#include <stdio.h>

////main函数是程序的入口
//int main()
//{
//	printf( "he he\n");
//	printf( "he he\n");
//	//ctrl + D 复制当行
//	//正常运行返回0，非正常返回非0；
//	return 0;
//}



//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}



//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//		return 0;
//
//}


//变量和常量的概念
//变量分为:
//局部变量 - { }内部定义的变量
//全局变量 - { }外部定义的变量
//
//int main();
//{
//	short agr = 20;//年龄
//	int hight = 180;//身高
//	float weight = 88.5;//体重
//
//
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;//当全局变量和局部变量名字相同的情况下，局部优先
//		printf("a=%zu\n",a);
//		return 0;
//}

	//不建议将局部变量和全局变量名字写成一样


//写一个代码计算2个整数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}



//变量的作用域
//1.局部变量
// 局部变量的作用域是变量所在的局部范围
// 
// 2.全局变量
// 全局变量的作用域是整个工程
//

//变量的生命周期
//1.局部变量
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
//
//2.全局变量
//全局变量的生命周期是：整个工程

//当变量来自于外部，需要声明来自外部的符号
extern int a;
int main()
{
	
	{

		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);
	return 0;
}
