#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>

//int main()
//{
//	int* p = NULL;
//	printf("%p\n", p);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int p = 1;
//	for (i = 1; i <=4; i++)
//	{
//		p = p*i;
//	}
//	printf("%d\n", p);
//	return 0;
//}

//void swap(int* a,int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{ 
//	int x = 10;
//	int y = 20;
//	swap(&x, &y);
//	printf("%d %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 4, 3, 6, 5, 7, 9, 10, 2, 5, 13, 7 };
//	int Max;
//	int i = 0;
//	Max = arr[0];
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		if (arr[i]>Max)
//			Max = arr[i];
//	}
//	printf("%d\n", Max);
//	return 0;
//}

//int main()
//{
//	int num = 15;
//	int count = 0;
//	while (num != 0)
//	{
//		num = num&(num - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 15;
//	int count = 0;
//	int tmp;
//	while (num)
//	{
//		tmp = num % 2;
//		if (tmp == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			printf("%d\n", i);
//	}
//	return 0;
//
//}


//int main()
//{
//	int arr1[] = { 1, 3, 5, 6, 7 };
//	int arr2[] = { 2, 4, 9, 8, };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				printf("有！\n");
//				return;
//			}
//		}
//	}
//	printf("没有\n");
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 0, 0, 0, 0, 0, 0 };
//	int arr2[] = { 1, 1, 1, 1, 1, 1 };
//	int i = 0;
//	int j = 0;
//	int tmp;
//	for (i = 0; i < 6; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (j = 0; j < 6; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	return 0;
//}


//void swap(int* a, int* b, int* c)
//{
//	int tmp;
//	if (*a > *b)
//	{
//		tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//	if (*a > *c)
//	{
//		tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//	if (*b > *c)
//	{
//		tmp = *b;
//		*b = *c;
//		*c = tmp;
//	}
//
//}
//
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 1;
//	swap(&a, &b, &c);
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}


//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c=a%b;
//	while (c)
//	{
//		a = b;
//		b = c;
//		c = a%b;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	char a;
//	scanf("%c", &a);
//	if ((a >= 'a') && (a <= 'z'))
//	{
//		printf("%c\n", a - 32);
//	}
//	if ((a >= 'A') && (a <= 'Z'))
//	{
//		printf("%c\n", a + 32);
//	}
//	return 0;
//}


//int main()
//{
//	double  i = 1.0;
//	double tmp=-1.0;
//	double sum = 0.0;
//	for (i = 1.0; i < 100.0; i++)
//	{
//		tmp = (-1.0)*tmp;
//		sum = sum + tmp*(1/i);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}





//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "hello  . bit";
//	int left = 0;
//	int right = strlen(arr2)-1;
//	printf("%s\n", arr1);
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//	}
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	int j = 1;
//	int p = 1;
//	int n=4;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		p = 1;
//		for (i = 1; i <= j; i++)
//		{
//			p = p*i;
//         }
//		sum = sum + p;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	short s = 9;
//	printf("%d\n", sizeof(s = a + 1));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = i; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//			count ++;
//	}
//	printf("%d\n", count);
//	return  0;
//}

//int  search_key(int arr[], int sz, int key)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid ;
//	while (left <= right)
//	{   
//		mid = (left + right) >> 1;                
//		if (key < arr[mid])
//		{
//			right = mid-1;
//         }
//		else if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//			return 1;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr);
//	int key = 3;
//	int tmp;
//	tmp=search_key(arr, sz, key);
//	if (tmp == 1)
//	{
//		printf("找到了！\n");
//	}
//	if (tmp == -1)
//	{
//		printf("没找到！\n");
//	}
//    return 0;
//}


//int main()
//{
//	int num;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//    return 0;
//}

//int search_key(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) >> 1;
//		if (key < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (key>arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//			return 1;
//     }
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tmp = search_key(arr, key, sz);
//	if (tmp == 1)
//	{
//		printf("找到了！\n");
//	}
//	if (tmp == -1)
//	{
//		printf("没找到！\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int num;
//	int n;
//	int p;
//	int sum = 0;
//	printf("请输入数字：");
//	scanf("%d", &num);
//	n = num;
//	while (num)
//	{
//		p = num % 10;
//		sum = sum + p*p*p;
//		num = num / 10;
//	}
//	if (sum == n)
//	{
//		printf("是水仙花数\n");
//	}
//	else
//		printf("不是水仙花数！\n");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n;
//	int tn;
//	printf("请输入数字： ");
//	scanf("%d", &n);
//	tn = n;
//	for (i = 1; i <= 5; i++)
//	{
//		sum = sum + n;
//		n = n * 10 + tn;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "juxin123";
//	char arr2[10];
//	int i;
//	for (i = 0; i < 3; i++)
//	{ 
//		printf("请输入密码： ");
//		scanf("%s", arr2);
//		if (strcmp(arr2, arr1) == 0)
//		{
//			printf("登陆成功！\n");
//			return;
//		}
//		if (strcmp(arr2, arr1) != 0)
//			printf("密码输入错误\n");
//	}
//	printf("好了别再输了\n");
//    return 0;
//}
//int cmp_epo(int num)
//{
//	if (num % 2 != 0)
//		return 0;
//	else
//		return 1;
//
//}
//
//int main()
//{
//	int num;
//	int tmp;
//	printf("请输入数字： ");
//	scanf("%d", &num);
//	tmp=cmp_epo(num);
//	if (tmp == 0)
//	{
//		printf("是素数\n");
//	}
//	if (tmp == 1)
//	{
//		printf("不是素数\n");
//	}
//	return 0;
//


//int cmp_yr(int n)
//{
//	if ((n % 4 == 0) || ((n % 400) == 0) && ((n % 100) != 0))
//		return 0;
//	else
//		return -1;
//
//
//}
//int main()
//{
//	int year;
//	int tmp;
//	printf("请输入年份： ");
//	scanf("%d", &year);
//	tmp=cmp_yr(year);
//	if (tmp == 0)
//		printf("是闰年\n");
//	if (tmp == -1)
//		printf("不是闰年\n");
//	return 0;
//}


//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int i=1;
//	add(&i);
//	add(&i);
//	add(&i);
//	printf("%d\n", i);
//    return 0;
//}



  //    进阶*************************************************************************************************************


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(&arr));
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret=0;
//	ret = Add(a, b);
//	return 0;
//}
//************************************************************************************************************************
//void binary_sign(unsigned int n)
//{
//	if (n != 0)
//	{
//		binary_sign(n / 10);
//		printf("%c ", n % 10 + '0');           //递归实现输入数字  输出字符
//	}
//	if (n == 0)
//		return 0;
//}
//int main()
//{
//	int num;
//	printf("请输入数字： ");
//	scanf("%d", &num);
//	binary_sign(num);
//	return 0;
//}

//void binary_num(char arr[],int len)
//{
//	int i = 0;
//	int sum = 0;
//	int num=10000;
//	for (i = 0; i < len; i++)
//	{
//		sum = sum + (arr[i]-'0') * num;      //输入字符串  输出整数
//		num = num / 10;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	char arr[] = "12345";
//	int len = strlen(arr);
//	binary_num(arr, len);
//	return 0;
//}
//****************************************************************************************************************************
//  這个容易错；
//int my_strlen(char* str)
//{   
//	if (*str != 0)
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//	if (*str == 0)
//		return 0;
//}
//int main()
//{
//	char arr[10];
//	int len;
//	printf("请输入字符串：");
//	scanf("%s", &arr);
//	len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int squrt_nk(int num, int k)
//{
//	if (k != 0)
//	{
//		k--;
//		return num*squrt_nk(num, k);
//	}
//	else
//		return 1;
//
//}
//int main()
//{
//	int num;
//	int k;
//	int sum;
//	printf("请输入数字： ");
//	scanf("%d", &num);
//	printf("请输入开方数： ");
//	scanf("%d", &k);
//	sum=squrt_nk(num,k);
//	printf("%d\n", sum);
//    return 0;
//}

//int n_squrt(int num)
//{
//	if (num > 0)
//	{
//		return num*n_squrt(num - 1);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int num;
//	printf("请输入数字： ");
//	scanf("%d", &num);
//	printf("%d\n",n_squrt(num));
//	return 0;
//}



//斐波那契数列   
//1。递归实现：

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);        //這样的实现方式效率低下
//
//}
//int main()
//{
//	int n=10;
//	int num;
//	num=fib(n);
//	printf("%d\n", num);
//	return 0;
//}

//2.循环实现：



//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	for (i = 3; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 10;
//	int sum;
//	sum = fib(n);
//	printf("%d\n", sum);
//	return 0;
//}


//strlen通过指针-指针的方式实现：
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}

//模拟实现strcpy
//char* my_strcpy(char* str2, const char* str1)
//{
//	assert(str1);
//	assert(str2);
//	char* tmp = str2;
//	while (*str1)
//	{
//		*str2++ = *str1++;
//	}
//	*str2 = *str1;
//	return tmp;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[10];
//	printf("%s\n",my_strcpy(arr2, arr1));
//	return 0;
//}

// 逆序字符串
//void reserve_arr(char* str)
//{
//	if (*str == 0)
//		return 0;
//	else
//		reserve_arr(str + 1);
//		printf("%c", *str);
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reserve_arr(arr);
//	return 0;
//}

//逆序数组

//void reserve_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp;
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void test()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	reserve_arr(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}


//模拟实现strcat
//char*  my_strcat(char* str1, const char* str2)
//{   
//	assert(str1);
//	assert(str2);
//	char* tmp = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str2)
//	{
//		*str1++ = *str2++;
//	}
//	*str1 = *str2;
//	return  tmp;
//}
//void test()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "juxin";
//	printf("%s\n",my_strcat(arr1, arr2));
//	
//}
//int main()
//{
//	test();
//	return 0;
//}


//模拟实现 strcmp

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == 0)
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//void test()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int n=my_strcmp(arr1,arr2);
//	printf("%d\n", n);
//}
//int main()
//{
//	test();
//	return 0;
//}


//模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{  
//	assert(str1);
//	assert(str2);
//	const char* tmp = str1;
//	const char* dmp = str2;
//	while (*str1)
//	{
//		while (*str2)
//		{
//			if (*str1 == *str2)
//			{
//				str1++;
//				str2++;
//			}
//			else
//				break;
//		}
//		if (!*str2)
//			return dmp;
//		str2 = dmp;
//		tmp = tmp + 1;
//		str1 = tmp;
//	}
//	return NULL;
//}
//void test()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "cde";
//	char* dest = my_strstr(arr1, arr2);
//	if (dest == NULL)
//		printf("没找到\n");
//	else
//		printf("%p\n", dest);
//}
//int main()
//{
//	test();
//	return 0;
//}


//模拟实现memcpy
//void* my_memcpy(void* arr2, const void* arr1, int count)
//{   
//	assert(arr2);
//	assert(arr1);
//	while (count)
//	{
//		*(char*)arr2 = *(char*)arr1;
//		((char*)arr2)++;
//		((char*)arr1)++;
//		count--;
//	}
//	return arr2;
//}
//void test()
//{
//	int arr1[15] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[16];
//	int count = sizeof(arr1);
//	int i = 0;
//	my_memcpy(arr2, arr1,count);
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//}
//int main()
//{
//	test();
//	return 0;
//}


//模拟实现mommove
//void* my_memmove(void* str1, void* str2, int count)
//{
//	assert(str1);
//	assert(str2);
//
//
//}
//void test()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	my_memmove(arr + 3, arr + 1, 4 * sizeof(int));
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}







