#include <stdio.h>

int main() // do while用法
{
	int i = 1;
	do
	{
		if (5 == i)
			break;
		printf("%d\n", i);
		i++;
	} while (i < 11);

	return 0;
}





#include <stdio.h> //for语句
//  for（语句1；语句2；语句3） 语句1设置变量的初始值，语句2为判断条件，语句3为变量的调整 
//  在while循环里，变量调整前出现continue，则变量不调整，重新进入循环会进死循环
//  在for循环里，变量不受continue影响，每次循环结束之后都会自动调整，没有死循环 
//  for循环内不能赋值变量，只能在括号里自动调整变量 
//  for语句里的条件语句，写成前闭后开，a<10,不要写a<=9，10表示10此循环/10次打印 
//  for循环的三个语句都可以省略，但建议不要省略。判断部分省略，判断就恒为真，会死循环 

//for(;;)  无限死循环 
//{
//	printf("hehe\n"); 
//}

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}





#include <stdio.h>  //Switch应用

//  switch 里的定义和case只能为整型常量，不能是字符，变量 
//  break 表示执行完毕，直接跳到return 0 

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
		//		case 1:
		//			printf("星期一\n");
		//			break;
		//		case 2:
		//			printf("星期二\n");
		//			break;
		//		case 3:
		//			printf("星期三\n");
		//			break;
		//		case 4:
		//			printf("星期四\n");
		//			break;
		//		case 5:
		//			printf("星期五\n");
		//			break;
		//		case 6:
		//			printf("星期六\n");
		//			break;
		//		case 7:
		//			printf("星期日\n");
		//			break;

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}





int main()  //while和getchar结合
{
	//	int ch=getchar(); 表示输入一个整型数ch 
	//	putchar(ch);       表示输出整型ch 

	//	int ch=0;
	//	while((ch=getchar())!=EOF)  //EOF；end of file文件结束标志，值为-1 
	//	{
	//		putchar(ch);
	//	}

	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);  //这个时候输入密码，例如字符串123456 
	//字符串中间可能有空格，结尾有个'\n'，需要用getchar()把它取走，不然后面判断是否为Y无法实现 
	while ((getchar()) != '\n') //取走缓存区的空格和'\n' ，一直循环，直到取干净 
	{
		continue;
	}
	printf("请确认(Y/N):>");
	ret = getchar();  //输入Y/N再赋值给ret 
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}

	return 0;
}





#include <stdio.h> //while里的break和continue

//break:直接跳出、终止while 循环
//coninue:后面的代码不执行，直接进入下一次循环的判断 

int main()
{
	int i = 0;
	while (i < 11)
	{
		i++;
		if (5 == i)
			continue;
		printf("%d ", i);
	}
	return 0;
}





int main() //从数组里找一个数
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到\n");
		}
	}
	//	int arr[]={1,2,3,4,5,6,7,8,9,10};
	//	int k=7;
	//	int i=0;
	//	int sz=sizeof(arr)/sizeof(arr[0]);
	//	for(i=0;i<sz;i++)
	//	{
	//		if(k==arr[i])
	//		{
	//			printf("找到了，下标是：%d\n", i);
	//			break;
	//		}
	//	}
	//	if(i==sz)
	//	printf("找不到\n");
	return 0;
}




int main() //小练习
{
	int a = 10;
	if (1 == a % 2)
		printf("%d\n", a);
	else
		printf("不是奇数\n");
	return 0;
}







int main() //计算n的阶乘
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	//	for(n=1;n<=3;n++)
	//	{
	//	   ret=1;
	//	   for(i=1;i<=n;i++)
	//	   {
	//		  ret=ret*i;
	//	   }
	//	   sum=sum+ret;
	//    }
	printf("sum=%d\n", sum);
	return 0;
}





//三次输入密码登录
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (3 == i)
		printf("三次密码均错误，退出程序\n");
	return 0;
}




//输出1-100的奇数
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (1 == i % 2)
			printf("%d ", i);
		i++;
	}
	return 0;
}

//int main()
//{
//	int i=1;
//	while(i<=100)
//	{
//		printf("%d ", i);
//		i+=2;
//	}
//	return 0;
//}





//字符从两端向中间移动
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	//int right=sizeof(arr1)/sizeof(arr1[0]-2); //最后有个\n，要减2才是最后字符的下标
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000); //休息1秒 
		system("cls");   //执行系统命令的函数，cls表示清空屏幕 
	}
	printf("%s\n", arr2);
	return 0;
}