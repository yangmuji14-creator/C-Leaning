#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.字面常量
//2.const修饰的变常量
//define 定义的标识常量

//int main()
//{
	//30;
	//3.14;
	//'w';//字符 
	//"abc";
	//const int a = 10;//在c语言中const修饰的a,本质上变量，但是不能直接修改，有常量的属性。
	//a = 20;
	//printf("%d\n", a);//20
 //


//	const int n = 10;
//	int arr[10] = { 0 };
//	return 0;
//}


//#define Max 100
//#define STT "abcdef"
//int main()
//{
//	printf("Max = %d\n", Max);
//	int a = Max;
//	printf("%d\n", a);
//	printf("%s\n", STT);
//	return 0;
//}
//

//枚举常量
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE，
//};
//int main()
//{
//	enum Color c = RED;
//
//
//	return 0;
//}


//int main()
//{
//	//char 字符类型
//	//'a';
//	//char ch = 'w';
//	//字符串
//	//c语言中有没有字符串类型呢？ -没有
//	//"abcdef";
//	char arr[] = "abcdef";
//	char arr1[] = { 'a','b','c','d','e','f'};//字符串结束的标志是'\0'
//
//	printf("%d\n", strlen(arr));//6  -因为strlen不会数'\0'
//	printf("%d\n", strlen(arr1));
//	//int len = strlen("abc");//求字符串长度的一个函数，
//	//printf("%d\n", len);
//	// 
//	//printf("%s\n", arr);
//	//printf("%s\n", arr1);
//
//	return 0;
//}

//转义字符
//三字母词
//?? )--> ]
//?? (--> [
//

//%d - 打印整形
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//


//int main()
//{
//	//printf("Are you ok\?\?");
//	//Are you ok]
//	//printf("%c\n", '\'');
//	//printf("\a");//“\a是警告符”
//
//
//	return 0;
//}


//int main()
//{
//	//printf("%c\n", '\130');
//
//	return 0;
//}


//选择语句
//int main()
//{
//	//设置函数input默认为0
//	int input = 0;
//	//询问问题
//	printf("你要好好学习吗（1/0）？");
//	//给出选择
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer！");
//	}
//	else
//	{
//		printf("卖红薯");
//	}
//
//
//	return 0;
//}


//20000行有效的代码积累
//int main()
//{
//	int line = 0;
//	printf("开始学习\n");
//
//	while (line<20000)
//	{
//		printf("写代码:%d\n",line);
//			line++;
//	}
//	if (line = 20000)
//	{
//		printf("好offer！");
//	}
//	else
//	{
//		printf("加油！");
//	}
//
//	return 0;
//}

//函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	//输入
//	scanf("%d%d%", &input1, &input2);
//	//计算
//	//int output = input1 + input2;
//	int output = Add(input1, input2);
//	//打印
//	printf("%d\n",output);
//
//	return 0;
//}


//数组
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//打印第9位
	printf("%d\n",arr[9]);
	//打印所有数字
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i = i + 1;
		
	}

	return 0;
}