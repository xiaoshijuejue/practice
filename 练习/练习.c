#define _CRT_SECURE_NO_WARNINGS
/*
int main(void)
{
	int x, a = 0 , b, t;
	scanf_s("%d", &x);
	while (x < 0)
		x = -x;
	if (x > 0) 
	{
		a = x % 10;
		while (x != 0) 
		{
			x = x / 10;
			b = x % 10;
			a = a * 10 + b;
		}
	}
	a = a / 10;
	printf("%d", a);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a[10];
	int i = 0;
	int j = 0;
	int t;
	while(i<10)
	{
		scanf_s("%d", &a[i]);
		i++;
	}
	i = 0;
	while (i<9)
	{
		while (j < 9 - i)
		{

			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
			j++;
		}
		i++; j = 0;
	}
	i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/

/*
#include<stdio.h>
#define ADD(X,Y) ((X)+(Y))
#define Printf printf("Hello world!\n")
int main()
{
	Printf;
	int sum = 5 * ADD(5, 4);
	printf("%d\n", sum);
	return 0;
}
*/

/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	scanf_s("%d", &a);
	printf("%d", c);
	for (b=3; b <= a; b += 2)
	{
		printf(" %d", b);
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a = 0;
	int* pa = &a;//在C语言中,用来存放地址的变量叫做指针变量,因为a是int类型,所以pa同样定义为int类型
	a = 20;
	*pa = 40;//*是解引用操作符,作用:通过指针变量找到原来的值
	printf("%p\n", &a);//地址
	printf("%p\n", pa);//地址
	printf("%d\n", a);//40
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(long*));
	//指针的大小取决于地址所需要的空间
	return 0;
}
*/

//指针变量的作用:存放别人的地址-->指针就是地址
//指针变量有类型:类型是跟着其他变量的类型定义的
//指针除了存放别人的地址,还可以通过解引用符找到变量本身,并对其进行操作
//指针大小取决于地址的存储需要多大空间

/*
结构体:	使C语言有能力描述复杂的类型
		可以让C语言创建新的类型
*/
//学生:名字+年龄+性别+学号

/*
#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct Stu s = { "xxx",18,80.9 };//struct Stu为定义好的学生类型,s为现在定义的学生变量
	printf("1.%s %d %.2lf\n", s.name, s.age, s.score);//第一种输出形式:结构体变量+学生类型
	struct Stu* ps = &s;
	printf("2.%s %d %.2lf\n", (*ps).name, (*ps).age, (*ps).score);//第二种输出形式:解引用符号+学生类型
	printf("3.%s %d %.2lf\n", ps->name, ps->age, ps->score);//第三种输出形式:指针地址+学生类型
	return 0;
}
*/

/*
#include<stdio.h>
int main() {
	int a, n = 0, m = 0;
	while (scanf_s("%d", &a))
	{
		if (a == -1)
		{
			break;
		}
		n++;//每次输入a的值都会+1
		if (a % 2 == 0)
		{
			m++;//输入的a为偶数时+1
		}
	}
	printf("%d %d", n - m, m);//全部+1减去偶数的+1即为奇数的+1

	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	for (int i = 1; a >= 1; i++)
	{
		b = a % 10;
		a = a / 10;
		if (i % 2 == 1)
		{
			if (b % 2 == 1)
			{
				c = 1;//同为奇数时
			}
			else
			{
				c = 0;
			}
		}
		else//即为i % 2 != 1
		{
			if (b % 2 != 1)
			{
				c = 1;//同为偶数时
			}
			else
			{
				c = 0;
			}
		}
		if (c == 1)
		{
			d += pow(2, i - 1);//C语言中幂的用法,需引用<math.h>
		}
	}
	printf("%d", d);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int lower = 0;
	int upper = 0;
	int F = 0;
	double C = 0;
	scanf_s("%d,%d", &lower, &upper);
	if (lower > upper)
	{
		printf("Invalid");
	}
	else
	{
		printf("fhar celsius\n");
		for (lower; lower <= upper; lower = lower + 2)
		{
			F = lower;
			C = 5.00 * (F - 32.00) / 9.00;
			printf("%d%6.1f\n", F, C);
		}
	}
*/

/*
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
		{
			continue;
		}
		putchar(ch);
	}
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	float sum;
	int n;
	scanf_s("%d", &n);
	if (n < 0)
	{
		n = -n;
	}
	float S = 0;
	for (int i = 1; i < 3 * n; i += 3)
	{
		if (i % 2 == 1)
		{
			S = S + 1.0 / i;
		}
		else
		{
			S = S - 1.0 / i;
		}
	}
	sum = S;
	printf("sum = %.3f", sum);
	return 0;
}
*/

/*
#include <stdio.h>
int main(int argc, char** argv) 
{
	int x, y;
	scanf("%d %d", &x, &y);
	int i;
	int j;
	int cnt = 0;
	int sum = 0;
	for (j = 2; cnt < y; j++) 
	{
		int isprime = 1;
		for (i = 2; i < j; i++) 
		{
			if (j % i == 0) 
			{
				isprime = 0;
				break;
			}
		}
		if (isprime == 1) {
			cnt++;
		}
		if (cnt >= x && isprime == 1) 
		{
			sum += j;
		}
	}
	printf("%d", sum);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int m, n, sum = 0;//sum为所得全体素数之和
	int k = 0;
	scanf_s("%d %d", &n, &m);//n与m为第某个素数的范围(n=2,m=4,即为第2,3,4个素数)
	int i, x = 2, count = 0;//x是素数,count表示第N个素数
	while (count <= 200)//因为m<200,所以循环200次
	{
		int isprime = 1;//定义为当x是素数时进入循环的条件
		for (i = 2; i < x; i++)
		{
			if (x % i == 0)//x>i,当x对i求余数为0时,即x能被i整除,x不是素数
			{
				isprime = 0;
				break;
			}
		}
		if (isprime == 1)
		{
			count++;
			if (count >= n && count <= m)
				sum += x;
		}
		x++;
		if (count == m)
		{
			break;
		}
	}
	printf("%d", sum);
	return 0;
}
*/

/*
#include<stdio.h>
void D(int t) 
{
	switch (t) 
	{
	case 0:printf("ling"); break;
	case 1:printf("yi"); break;
	case 2:printf("er"); break;
	case 3:printf("san"); break;
	case 4:printf("si"); break;
	case 5:printf("wu"); break;
	case 6:printf("liu"); break;
	case 7:printf("qi"); break;
	case 8:printf("ba"); break;
	default:printf("jiu");
	}
}
int main() 
{
	int x;
	scanf_s("%d", &x);
	if (x < 0) 
	{
		printf("fu ");
		x = -x;
	}
	int mask = 1;
	int t = x;
	while (t > 9) 
	{
		t /= 10;
		mask *= 10;//将mask提升至最高位
	}
	do {
		int d = x / mask;//每次相除后保留最高位数字
		D(d);//跳转至函数D
		if (mask > 9) 
		{
			printf(" ");//题目要求输出空格
		}
		x %= mask;//去除原本最高位数字
		mask /= 10;//降低一位,保证位数与x相同
	} 
	while (mask > 0);
	return 0;//关键:设定一个函数,而不是将原数倒叙后顺位输出
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n < 0)
	{
		n = -n;
	}
	int m = n;
	for (int i = 0; i <= m; i++)
	{
		int q = 0;;
		q += pow(3, i);
		printf("pow(3,%d) = %d\n", i, q);
	}
	return 0;
}
*/

/*
#include<stdio.h>
double fact(int q)
{
	double p = 1;
	for (int x = 1; x <= q; x++)
	{
		p = p * x;
	}
	return p;
}

int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);
	double result;
	result = fact(n) / (fact(m) * fact(n - m));
	printf("result = %.0f", result);
	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a[100];
	int i;
	for (i = 0; i < 4; i++)
	{
		scanf_s("%d", &a[i]);
	}
	int Sum = 0;
	float Average = 0.0;
	for (i = 0; i < 4; i++)
	{
		Sum = Sum + a[i];
	}
	printf("Sum = %d; ", Sum);
	Average = Sum / (i * 1.0);
	printf("Average = %.1f", Average);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	float cost = 0;
	scanf_s("%d", &a);
	if (a > 0)
	{
		while (a <= 50)
		{
			cost += a * 0.53;
			break;
		}
		while (a > 50)
		{
			cost += (a - 50) * 0.58 + 26.5;
			break;
		}
		printf("cost = %.2f", cost);
	}
	else
	{
		printf("Invalid Value!");
	}
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int  m, n;
	double sum = 0;   
	scanf_s("%d %d", &m, &n);
	for (m; m <= n; m++)
	{
		sum += pow(m, 2) + (1.0 / m);
	}
	printf("sum = %.6lf", sum);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 1;
	int m;
	int sum = 1;
	int a;
	int sum2 = 0;;
	scanf_s("%d", &m);
	if (m < 0)
	{
		m = -m;
	}
	for (a = 1; a <= m; a++)
	{
		if (a > 1)
		{
			do
			{
				sum = sum * (n + 1);
				n++;
				if (n == a)
				{
					break;
				}
			} while (n < a);
		}
		else
		{
			sum = 1;
		}
		sum2 += sum;
	}

	printf("sum2 = %d", sum2);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int m = 1;
	int q = 1;
	scanf_s("%d", &n);
	float a = 1;
	float b = 1;
	float sum = 1;
	do 
	{
		if (n == 1)
		{
			break;
		}
		a++;
		b = 2 * a - 1;
		sum = sum + pow(-1, q) * (a / b);
		m++;
		q++;
	} while (m < n);
		printf("%.3f", sum);
		return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	double sum = 0;
	int a = 0;
	do
	{
		a++;
		sum = sum + pow(a, 0.5);
	} while (a < n);
	printf("sum = %.2lf", sum);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int b = 0;
	if (n > 0)
	{
		b = 1;
	}
	if (n == 0)
	{
		b = 0;
	}
	if (n < 0)
	{
		b = -1;
	}
	printf("sign(%d) = %d", n, b);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	if (90 <= a && a <= 100)
	{
		printf("你的成绩为：A");
	}
	if (80 <= a && a <= 89)
	{
		printf("你的成绩为：B");
	}
	if (70 <= a && a <= 79)
	{
		printf("你的成绩为：C");
	}
	if (60 <= a && a <= 69)
	{
		printf("你的成绩为：D");
	}
	if (0 <= a && a < 60)
	{
		printf("你的成绩为：E");
	}
	if(a < 0 || a > 100)
	{
		printf("输入错误");
	}
	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int i;
	scanf_s("%d", &a);
	if (a < 0)
	{
		a = -a;
	}
	for (i = 0; a > 0; a /= 10)
	{
		i++;
	}
	printf("%d", i);
}
*/

/*
#include<stdio.h>
int main()
{
	int m, n, sum = 0;//sum为所得全体素数之和
	int k = 0;
	scanf_s("%d %d", &n, &m);//n与m为第某个素数的范围(n=2,m=4,即为第2,3,4个素数)
	int i, x = 2, count = 0;//x是素数,count表示第N个素数
	while (count <= 200)//因为m<200,所以循环200次
	{
		int isprime = 1;//定义为当x是素数时进入循环的条件
		for (i = 2; i < x; i++)
		{
			if (x % i == 0)//x>i,当x对i求余数为0时,即x能被i整除,x不是素数
			{
				isprime = 0;
				break;
			}
		}
		if (isprime == 1)
		{
			count++;
			if (count >= n && count <= m)
				sum += x;
		}
		x++;
		if (count == m)
		{
			break;
		}
	}
	printf("%d", sum);
	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int sum = 0;
	int m;
	int n;
	scanf_s("%d %d", &m, &n);
	if (m < 2)
	{
		m = 2;
	}
	a = m ;
	int count = 0;
	if (1 <= m && m <= n && n <= 500)
	{
		while (a <= n)
		{
			int d = 1;
			for (int i = 2; i < a; i++)
			{
				if (a % i == 0)
				{
					d = 0;
				}
			}
			if (d == 1)
			{
				count++;
				sum = sum + a;
			}
			a++;
		}
	}
	printf("%d %d", count, sum);
	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	Max(a, b);
	printf("%d", Max(a, b));
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	double sum = 0;
	double i = 1;
	double a = 3;
	double b = 2;
	double c = 0;
	for (i ; i < n; i++)
	{
		sum = sum + a / b;
		c = a + b;
		b = a;
		a = c;
	}
	sum = sum + 2.0;
	printf("%.2f", sum);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int b = 0;
	int c;
	int d;
	scanf_s("%d %d", &a, &b);
	if (a > 1)
	{
		for (c=b; c > 0 ; c--)
		{
			if (a % c == 0 && b % c == 0)
			{
				break;
			}
		}
		for (d = 2; ; d++)
		{
			if (d % a == 0 && d % b == 0)
			{
				break;
			}
		}
		printf("这两个数的最大公约数是%d，最小公倍数是%d", c, d);
	}
	else
	{
		printf("这两个数的最大公约数是%d，最小公倍数是%d", a, b);
	}
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	double x = 0;
	double f = 0;
	scanf_s("%lf", &x);
	if (x == 0)
	{
		f = 0;
	}
	else
	{
		f = 1.0 / x;
	}
	printf("f(%.1f) = %.1f", x, f);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	while (b<5)
	{
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:printf("price = 3.00\n");
			break;
		case 2:printf("price = 2.50\n");
			break;
		case 3:printf("price = 4.10\n");
			break;
		case 4:printf("price = 10.20\n");
			break;
		}
		if (a < 0 || a>4)
		{
			printf("price = 0.00\n");
		}
		if (a == 0)
		{
			b = 10;
		}
		b++;
		a = 0;
	}
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	double x = 0;
	double y = 0;
	scanf_s("%lf", &x);
	if (x <= 15)
	{
		y = 4 * x / 3;
		printf("%.2f", y);
	}
	else
	{
		y = 2.5 * x - 17.5;
		printf("%.2f", y);
	}
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	long long sum = 0;
	for (int i = 1; i <= 100
		; i++)
	{
		for (int k = i; k > 0; k/=10)
		{
			if (k % 10 == 1 || k % 10 == 2 || k % 10 == 0 || k % 10 == 9)
			{
				sum = sum + pow(i, 2);
				break;
			}
		}
		printf("%d\n", i);
		printf("%lld\n", sum);
	}
	printf("%lld", sum);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 1;
	int b = 0;
	int sum = 0;
	for (int i = 2; i <= 101; i++)
	{
		sum = sum + a;
		a = a + i;
	}
	printf("%d", sum);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	float n = 0;
	int i;
	int a;
	float sum = 0;
	int count = 0;
	float average = 0;
	scanf_s("%f", &n);
	if (n < 0)
	{
		n = -n;
	}
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		sum = sum + a;
		if (a >= 60)
		{
		count++;
		}
	}
	if (n == 0)
	{
		average = 0;
		count = 0;
	}
	else
	{
		average = sum / n;
	}
	printf("average = %.1f\n", average);
	printf("count = %d\n", count);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int letter = 0, blank = 0, digit = 0, other = 0;
	char ch;
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%c", &ch);
		if (ch >= 'a' && ch <= 'z')
		{
			letter++;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			letter++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			digit++;
		}
		else if (ch == ' ')
		{
			blank++;
		}
		else if (ch == '\n')
		{
			blank++;
		}
		else
		{
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}
*/

/*
#include<stdio.h>

int test(int a)
{
	if (a < 10)
	{
		test(a + 1);
	}
	printf("%d\n", a);
}
int main()
{
	int a = 1;
	test(a);
	printf("hehe");
}
*/
//以上test为递归
//递归必须有跳出条件,且每次递归后需逼近跳出条件
//递归的层数不能太深,否则会挤爆内存空间

/*
#include<stdio.h>
#include<math.h>

Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int a = Fac(n);
	printf("%d", a);
	return 0;
}
*/

/*
#include <stdio.h>
void Reverse(int arr[], int sz)
{
	int i = 0;
	int j = sz - 1;
	for (i = 0; i < j; i++, j--)
	{
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
}

void Init(int arr[], int sz, int set)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = set;
	}
}
void Empty(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i]=0;
	}
}

int main()
{
	int arr[] = { 1,2,4,5,8,9,12,14,16 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("arr[%d]=%2d  ", i, arr[i]);
	}
	printf("\n");

	//实现reverse（）函数完成数组元素的逆置
	Reverse(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("arr[%d]=%2d  ", i, arr[i]);
	}
	printf("\n");

	//实现函数init（）初始化数组、
	Init(arr, sz, 2);
	for (i = 0; i < sz; i++)
	{
		printf("arr[%d]=%2d  ", i, arr[i]);
	}
	printf("\n");

	////实现empty（）清空数组、
	Empty(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("arr[%d]=%2d  ", i, arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
*/

/*
#include<stdio.h>
int Multi_table(int x)
{
	int n = 0;
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			n = j * i;
			printf("%d*%d=%2d  ", j, i, n);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;

	scanf_s("%d", &n);

	Multi_table(n);

	return 0;
}
*/

/*
#include <stdio.h>
int Fib(int n)
{
	if (n<=2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}
*/

/*
#include <stdio.h>

int IsDigit(char x)
{
	if ('0' <= x&&x <= '9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char c;
	c = getchar();
	if (IsDigit(c))
	{
		putchar('Y');
	}
	else
	{
		putchar('N');
	}
	putchar('\n');
	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int flower(int x)
{
	int n = x;
	int b = 0;
	int sum = 0;
	for (sum; sum < n||n > 0; n = n / 10)
	{
		b = n % 10;
		sum = sum + pow(b, 3);
	}
	if (sum == x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a, k;
	scanf_s("%d", &a);
	k = flower(a);
	if (k)
		printf("%d yes", a);
	else
		printf("%d no", a);
	return 0;
}
*/

/*
#include <stdio.h>
void MoveTower(int num, char src, char dst, char trs)
{
	if (num > 0)
	{
		if (num == 1)
		{
			printf("%d: %c -> %c\n", num, src, dst);
		}
		else
		{
			MoveTower(num - 1, src, trs, dst);
			printf("%d: %c -> %c\n", num, src, dst);
			MoveTower(num - 1, trs, dst, src);
		}
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n;
	char s, d, t;
	scanf("%d %c %c %c", &n, &s, &d, &t);
	MoveTower(n, s, d, t);
	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	if (a <= 2000 || a > 2100)
	{
		printf("Invalid year!");
	}
	else
	{
		if (a < 2004)
		{
			printf("None");
		}
		else
		{
			for (int i = 2001; i <= a; i++)
			{
				if (i % 4 == 0 && i % 100 != 0)
				{
					printf("%d\n", i);
				}
				if (i % 400 == 0)
				{
					printf("%d\n", i);
				}
			}
		}
	}
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int t;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d->%d->%d", a, b, c);
}
*/

/*
#include<stdio.h>
int main()
{
	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//3行4列,从左往右分配为1,2,3,4;5,6,7,8;9,10,11,12
	int arr2[3][4]={}
}
*/

/*
#include<stdio.h>

void bubble_sort(int arr[],int sz)
{
	int* parr = &arr;//定义a的地址
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i- 1; j++)
		{
			if (arr[j] < arr[j + 1]);
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d<", arr[i]);
		j = i;
	}
	printf("%d\n", arr[j + 1]);
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//数组名作为实参进行传参的时候,传递的实际上是数组的首元素地址
	printf("%p\n", arr);//只有地址名,取到首元素的地址
	printf("%p\n", &arr);//地址名前加&,取整个数组的地址
	printf("%p\n", &arr[0]);//首元素地址
	printf("%d\n", *arr);//
	printf("%p\n", arr + 1);//首元素的下一项的地址
	printf("%p\n", &arr + 1);//下一个数组的地址
	//sizeof(数组名),计算整个数组的大小
	//&数组名,取整个数组的地址
	//数组名作为参数传递,数组名就是数组的首元素地址
}
*/    

//数组越界
/*
int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i <= 10; i++)
	{
		printf("%d", arr[i]);
	}
}
*/
//test.c,测试游戏相关逻辑
//game.c,游戏本体
//game.h,游戏所需的函数

/*
指针是C语言中内存单元格的地址
每个单元格大小为1字节
指针变量是用来存放地址的变量
*/

//#include<stdio.h>
//int main()
//{
//	//int a = 0x11223344;
//	////int* pa = &a;//定义pa为a的地址
//	////*pa = 0;//相当于对a的地址进行赋值,会反应在a的值上
//	//char* pc = &a;
//	//*pc = 0;//仅能改变44
//	////指针类型决定了指针解应用的权限,若类型有4个字节,则能改变4个字节的内存
//	////指针类型决定了指针+1可以 增加多少实际值
//	//野指针
//	//指针指向的位置随机
//	//指针未初始化
//	//指针越界
//	//指针指向空的空间或者指针指向的空间被释放
//	//int* p = test();//指针指向了空的地址
//	//*p = 20;
//	//int* p = NULL;//定义空指针
//	//int a = 1;
//	//p = &a;
//	//printf("%p\n", a);
//	//printf("%p\n", *p);
//	//return 0;
//	//指针指向空间被释放时要及时赋值NULL.
//	//指针的运算
//	//指针加减整数
//	//指针减指针,结果为指针之间的元素个数
//	//指针的关系运算
//	//>,<,>=,==,!=
//	//C语言的语言标准规定,允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针进行比较
//	//指针也是变量,也需要地址存放,存放指针地址的变量叫做二级指针
//	//指针数/.;.;
//	// jlknikljo;lko组
//	//指针数组的本质是数组,其中的元素是指针,int* arr[5]
//	
//}
//int test()
//{
//	int a = 10;
//	return &a;//结束后a不存在,a的地址也不存在 
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b[10];
//	int min = 0;
//	int max = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int p = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	for (i = 0; i < a; i++)
//	{
//		min = b[0];
//
//		if (min > b[i])
//		{
//			min = b[i];
//			j = i;
//		}
//	}
//	p = b[0];
//	b[0] = b[j];
//	b[j] = p;
//	for (i = 0; i < a; i++)
//	{
//		max = b[0];
//		if (max < b[i])
//		{
//			max = b[i];
//			k = i;
//		}
//	}
//	p = b[a - 1];
//	b[a - 1] = b[k];
//	b[k] = p;
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int M = 0;
//	scanf("%d %d", &N, &M);
//	int a[10];
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	j = M % N;
//	if (j > N)
//	{
//		j = j % N;
//	}
//	for (j; j > 0; j--)
//	{
//		for (k = N; k >= 0; k--)
//		{
//			a[k + 1] = a[k];
//		}
//		a[0] = a[N];
//	}
//	for (i = 0; i < N - 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("%d", a[N - 1]);
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a[11];
//	int i = 0;
//	scanf("%d", &n);
//	for (i; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &a[n]);
//	for (i = 0; i <= n; i++)
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("%d", a[n]);
//}

//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int a[100][10];
//	int i = 0;
//	int j = 0;
//	int max[100];
//	int x[100];
//	int y[100];
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] > a[i][j + 1])
//			{
//				max[i] = a[i][j];
//				x[i] = i;
//				y[i] = j;
//			}
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m - i; j++)
//		{
//			if (max[j] < max[j + 1])
//			{
//				int t = max[j];
//				max[j] = max[j + 1];
//				max[j + 1] = t;
//				t = x[j];
//				x[j] = x[j + 1];
//				x[j + 1] = t;
//				t = y[j];
//				y[j] = y[j + 1];
//				y[j + 1] = t;
//			}
//		}
//	}
//	printf("%d %d %d", max[0], x[0], y[0]);
//}

//#include<stdio.h>
//int main()
//{
//	int score1[5][5] =
//	{ {1,2,3,4,5},
//	{21,22,23,24,25},
//	{31,32,33,34,35},
//	{100,101,3300,103,104},
//	{1000,1001,1005,1003,1004} };
//	int sz = sizeof(score1[5][5] / 5);
//	int sum[5] = { 0 };
//	int average[5] = { 0 };
//	int max[5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		max[i] = score1[i][0];
//		for (j = 0; j <= sz; j++)
//		{
//			sum[i] =sum[i] + score1[i][j];
//			if (j + 1 < 5)
//			{
//				if (max[i] < score1[i][j + 1])
//				{
//					max[i] = score1[i][j + 1];
//				}
//			}
//		}
//		average[i] = sum[i] / (sz + 1);
//	}
//	for (i = 0; i <= sz; i++)
//	{
//		printf("第%d行总分:%d 平均分:%d 最高分:%d\n", i, sum[i], average[i], max[i]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[10][10];
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (j = 0, i = 0; j < n; j++, i++)
//	{
//		k = i;
//		for (k; k < n; k++)
//		{
//			if (k + 1 <= n - 1)
//			{
//				if (a[k+1][j] != 0)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	if (count == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//}

//

//#include<stdio.h>
//int main()
//{
//	char ch[30];
//	gets(&ch);
//	int i = 0;
//	int sum;
//	for (i = 0; ch[i] != '\0'; i++)
//	{
//		sum = 0;
//		if (ch[i] >= '1' && ch[i] <= '9')
//		{
//			for (ch[i]; ch[i] >= '0' && ch[i] <= '9'; i++)
//			{
//				sum = sum * 10 + ch[i] - '0';
//			}
//			sum = sum * 2;
//			printf("%d ", sum);
//		}
//	}
//	if (ch[i] == '\0')
//	{
//		i++;
//	}
//	for (i; ch[i] != '\0'; i++)
//	{
//		sum = 0;
//		if (ch[i] >= '1' && ch[i] <= '9')
//		{
//			for (ch[i]; ch[i] >= '0' && ch[i] <= '9'; i++)
//			{
//				sum = sum * 10 + ch[i] - '0';
//			}
//			sum = sum * 2;
//			printf("%d ", sum);
//		}
//	}
//}

//#include<stdio.h>
//int main()
//{
//	char str[80];
//	scanf("%s", &str);
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//	}
//	scanf("%s", &str[i + 1]);
//	int t = i + 1;
//	for (i; i >= m; i--)
//	{
//		str[i] = str[i - 1];
//	}
//	str[m - 1] = str[t];
//	str[t] = '\0';
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		printf("%c", str[i]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	float cs, xs;
//	scanf("%f %f", &cs, &xs);
//	float b = (cs / xs) - (xs / xs);
//	if (b < 0.1)
//	{
//		printf("OK");
//	}
//	else if (b >= 0.1 && b < 0.5)
//	{
//		b = b * 100;
//		printf("Exceed %.0f%%. Ticket 200", b);
//	}
//	else
//	{
//		b = b * 100;
//		printf("Exceed %.0f%%. License Revoked", b);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	float km;
//	int fz;
//	scanf("%f %d", &km, &fz);
//	float sum = 10;
//	int sj = fz / 5;
//	float km1 = (km - 3) / 1;
//	float km2 = (km - 10) / 1;
//	if (km <= 3)
//	{
//		if (sj > 0)
//		{
//			sum = sum + sj * 2;
//		}
//	}
//	else if (km > 3 && km <= 10)
//	{
//		if (km1 > 0)
//		{
//			sum = sum + km1 * 2;
//			if (sj > 0)
//			{
//				sum = sum + sj * 2;
//			}
//		}
//	}
//	else
//	{
//		sum = 24 + km2 * 3;
//		if (sj > 0)
//		{
//			sum = sum + sj * 2;
//		}
//	}
//	printf("%.0f", sum);
//}

//结构:是一些值的集合, 这些值成为是成员变量
//结构体的意义 : 定义一个复杂类型
//集合 : 数组, 同类型,
//结构体 : 每个成员的类型都可以不一样, 例如 : 人{ 名字,年龄,性别 }
//struct name//name是自己定义的名字
//{
//	member - list;
//	/*int age;
//	char name;
//	char sex;*/
//};//;要注意别忘记了

//#include<stdio.h>
//struct score
//{
//	float comscore;
//	float mathscore;
//	float engscore;
//};
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//	struct score a;
//}a = { "xxx",18,80.9,{80,90,95} };//此时的a同样是定义变量名字,定义的是全局变量
//int main()
//{
//	struct Stu a/* 关键词 结构体名字 变量名字 */ = { "xxx",18,80.9,{80,90,95} };//此时为结构体变量定义与初始化
//	//此时的a定义在main函数里,为局部变量
//	//struct Stu为定义好的学生类型,s为现在定义的学生变量
//	printf("1.%s %d %.2lf\n", a.name, a.age, a.score);
//	//第一种输出形式:结构体变量+学生类型
//	struct Stu* pa = &a;
//	printf("2.%s %d %.2lf\n", (*pa).name, (*pa).age, (*pa).score);
//	//第二种输出形式:解引用符号+学生类型
//	printf("3.%s %d %.2lf\n", pa->name, pa->age, pa->score);
//	//第三种输出形式:指针地址+学生类型
//	return 0;
//}

//#include<stdio.h>
//struct Stu
//{
//	int ID;
//	char name[10];//限定10个字符内;
//	int score;
//};
//int main()
//{
//	struct Stu a[100];
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	float average = 0;
//	for (i; i < n; i++)
//	{
//		scanf("%d %s %d", &a[i].ID, &a[i].name, &a[i].score);
//		sum = sum + a[i].score;
//		average = sum / n;
//	}
//	printf("%f", average);
//	for (i = 0; i < n; i++)
//	{
//		if (a[i].score < average)
//		{
//			printf("%05d %s %d\n", a[i].ID, a[i].name, a[i].score);
//		}
//	}
//}

//#include<stdio.h>
//struct stu
//{
//	int ID;
//	char name[10];
//	double score;
//};
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0;
//	double average = 0;
//	struct stu a[100];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %s %lf", &a[i].ID, &a[i].name, &a[i].score);
//		sum = sum + a[i].score;
//		average = sum / n;
//	}
//	printf("%.2f\n", average);
//	for (i = 0; i < n; i++)
//	{
//		if (a[i].score < average)
//		{
//			printf("%s %05d %.0lf\n", a[i].name, a[i].ID, a[i].score);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//struct stu
//{
//	int ID;
//	char name[10];
//	int j;
//	int e;
//	int m;
//	float a;
//};
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct stu s[50];
//	int i = 0;
//	int x = 0;
//	float sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %s %d %d %d", &s[i].ID, &s[i].name, &s[i].j, &s[i].e, &s[i].m);
//		sum = s[i].j + s[i].e + s[i].m;
//		s[i].a = sum / 3;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (x = 0; x < n - i; x++)
//		{
//			if (s[x].a < s[x + 1].a)
//			{
//				struct stu t;
//				t = s[x];
//				s[x] = s[x + 1];
//				s[x + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d %s %.2f\n", s[i].ID, s[i].name, s[i].a);
//	}
//}

//#include <stdio.h>
//#include <math.h>
//
//void Statistics(float* A, int n, float* ave, float* Std_Dev, int* kmax, int* kmin);
//int main()
//{
//	int i, n, kmax, kmin;
//	float average, Std_Deviation;
//	float A[20];
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%f", &A[i]);
//
//	Statistics(A, n, &average, &Std_Deviation, &kmax, &kmin);
//
//
//	printf("平均分：%.2f\n", average);
//	printf("标准差：%.2f\n", Std_Deviation);
//	printf("最大值是第 %d 个实验数据, 值为：%.2f\n", kmax, A[kmax]);
//	printf("最小值是第 %d 个实验数据, 值为：%.2f\n", kmin, A[kmin]);
//
//}
//void Statistics(float* A, int n, float* ave, float* Std_Dev, int* kmax, int* kmin)
//{
//	double sum = 0;
//	double sum2 = 0;
//	int i = 0;
//	int j = 0;
//	double c = 0;
//	*kmax = 0;
//	*kmin = 0;
//	double x = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + A[i];//数据和
//		*ave = sum / n;//平均数
//		c = *ave;
//		for (j = 0; j < n - i; j++)
//		{
//			if (A[*kmax] < A[j + 1])
//			{
//				*kmax = j + 1;
//			}
//			if (j < 5)
//			{
//				if (A[*kmin] > A[j])
//				{
//					*kmin = j + 1;
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		x = A[i] - c;
//		sum2 = sum2 + pow((x), 2);
//	}
//	sum2 = sum2 / n;
//	*Std_Dev = sqrt(sum2);
//}

//#include <stdio.h>
//int binarySearch(int* p, int n, int m, int* count)//m为需要查找的数,n为数组个数,count为循环次数
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	int j = 0;
//	int c = 0;
//	if (n % 2 == 0)
//	{
//		x = n / 2;
//		y = x + 1;
//	}
//	if (n % 2 != 0)
//	{
//		x = (n - 1) / 2;
//	}
//	if (y == x + 1)
//	{
//		for (x, y; x >= 0 && y <= n; x--, y++)
//		{
//			c++;
//			if (p[x] == m)
//			{
//				*count = c;
//				return x;
//			}
//			if (p[y] == m)
//			{
//				*count = c;
//				return y;
//			}
//		}
//	}
//	else
//	{
//		for (i = x, j = x; i >= 0 && j <= n; i--, j++)
//		{
//			c++;
//			if (p[i] == m)
//			{
//				*count = c;
//				return i;
//			}
//			if (p[j] == m)
//			{
//				*count = c;
//				return j;
//			}
//		}
//	}
//	if (i < 0)
//	{
//		c--;
//		*count = c;
//		return -1;
//	}
//}
//int main()
//{
//	int m, n, a[10];
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int loc;
//	int count = 0;
//	scanf("%d", &m);
//	loc = binarySearch(a, n, m, &count);
//	printf("%d %d", loc, count);
//	return 0;
//}

//#include <stdio.h>
//void Sort(int* A, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1; j++)
//		{
//			if (A[j] > A[j + 1])
//			{
//				int t = 0;
//				t = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = t;
//			}
//		}
//	}
//}
//void Factor(int* A, int n, int* count)
//{
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	int c = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = 0;
//		for (j = 1; j < A[i]; j++)
//		{
//			if (A[i] == 1)
//			{
//				sum = 0;
//			}
//			if (A[i] % j == 0)
//			{
//				sum = sum + j;
//			}
//		}
//		if (A[i] == sum)
//		{
//			c++;
//		}
//		*count = c;
//		A[i] = sum;
//	}
//	Sort(A, n);
//}
//
//int main()
//{
//	int i, n, count = 0;
//	int A[20];
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &A[i]);
//
//	Factor(A, n, &count);
//
//	for (i = 0; i < n - 1; i++)
//		printf("%d,", A[i]);
//	printf("%d\n", A[i]);
//	printf("其中共有 %d 个完整数\n", count);
//}

//#include<stdio.h>
//
//int Isprime(int x)//判断素数的函数Isprime
//{
//	int i = 0;
//	if (x == 1)
//	{
//		return 0;
//	}
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
////生产斐波那契中序列F， 并统计出其中素数序列
//void FibulF_Prime(int* F, int n, int* B, int* count)
//{
//	int i = 0;
//	F[0] = 1;
//	F[1] = 1;
//	int c = 0;
//	for (i = 2; i < n; i++)
//	{
//		F[i] = F[i - 1] + F[i - 2];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (Isprime(F[i]) == 1)
//		{
//			B[c] = F[i];
//			c++;
//		}
//	}
//	*count = c;
//}
////按题意的格式要求输出数组
//void Output(int* F, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%8d", F[i]);
//		if ((i + 1) % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//}
//
//int main()
//{
//	int n, count = 0;
//	int F[41] = { 0 }, B[41] = { 0 };
//	//数组F用来存储斐波那契序列
//	//数组B用来存储斐波那契中的素数序列，
//
//	scanf("%d", &n);
//
//	FibulF_Prime(F, n, B, &count);
//
//	printf("前 %d 个斐波那契序列为:\n", n);
//	Output(F, n);
//
//	printf("\n其中共有 %d 个素数,序列为:\n", count);
//	Output(B, count);
//	printf("\n");
//	return 0;
//}

////输出沙漏
//#include<stdio.h>
//int main()
//{
//	int n, i, x = 1, m = 1, y, z;
//	char o, p;
//	scanf("%d", &n);
//	getchar();
//	scanf("%c", &o);
//	while (n >= x + (m + 2) * 2)
//	{
//		m = m + 2;
//		x = x + 2 * m;
//	}
//	y = n - x;
//	z = m;
//	while (z >= 1)
//	{
//		for (i = 0; i < (m - z) / 2; i++)
//			printf(" ");
//		for (i = 0; i < z; i++)
//			printf("%c", o);
//		printf("\n");
//		z = z - 2;
//	}
//	z = 3;
//	while (z <= m)
//	{
//		for (i = 0; i < (m - z) / 2; i++)
//			printf(" ");
//		for (i = 0; i < z; i++)
//			printf("%c", o);
//		printf("\n");
//		z = z + 2;
//	}
//	printf("%d", y);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int repeat;
//	scanf("%d\n", &repeat);
//	int i = 0;
//	char str[80];
//	char c;
//	for (i = 0; i < repeat; i++)
//	{
//		gets(str);
//		scanf("%c\n", &c);
//		delchar(str, c);
//	}
//}
//void delchar(char* str, char c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == c)
//		{
//			str[i] = ' ';
//			for (j = i; str[j] != '\0'; j++)
//			{
//				str[j] = str[j + 1];//前一项由后一项替换,最后一项由\0替换,
//			}
//			if (str[i] == c)//上述过程完成后,若后一项仍是需要删除的值,则i-1,循环一次后i+1,最终i不变,相同位置进入循环
//			{
//				i--;
//			}
//		}
//	}
//	printf("result: ");
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n");
//}
////max=a>b?a:b//如果a大于b,则max=a,否则max=b\

//#include<stdio.h>
//struct stu
//{
//	int ID;
//	char name[10];
//	double score;
//};
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0;
//	double average = 0;
//	struct stu a[100];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %s %lf", &a[i].ID, &a[i].name, &a[i].score);
//		sum = sum + a[i].score;
//		average = sum / n;
//	}
//	printf("%.2f\n", average);
//	for (i = 0; i < n; i++)
//	{
//		struct stu* b = &a[i];
//		if (b->score < average)
//		{
//			printf("%s %05d %.0lf\n", b->name, b->ID, b->score);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int score1[5][5] =
//	{ {1,2,3,4,5},
//	{21,22,23,24,25},
//	{31,32,33,34,35},
//	{100,101,3300,103,104},
//	{1000,1001,1005,1003,1004} };
//	int sz = sizeof(score1);
//	printf("%d", sz);
//}
#include<stdio.h>
int main()
{
	double a = 0;//幂
	double b = 1;
	double sum = 1;
	int count = 1;
	double x = 1;//阶乘
	int i = 0;
	scanf("%lf", &a);
	double n = a / x;
	if (a >= 0 && a <= 5)
	{
		for (n; n > 0.00001; count++)
		{
			for (i = 1; i <= count; i++)
			{
				b = b * a;
				x = x * i;
			}
			n = b / x;
			sum = sum + n;
			b = 1;
			x = 1;
		}
	}
	printf("%.4lf", sum);
}