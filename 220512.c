#include <stdio.h>

int main() // do while�÷�
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





#include <stdio.h> //for���
//  for�����1�����2�����3�� ���1���ñ����ĳ�ʼֵ�����2Ϊ�ж����������3Ϊ�����ĵ��� 
//  ��whileѭ�����������ǰ����continue������������������½���ѭ�������ѭ��
//  ��forѭ�����������continueӰ�죬ÿ��ѭ������֮�󶼻��Զ�������û����ѭ�� 
//  forѭ���ڲ��ܸ�ֵ������ֻ�����������Զ��������� 
//  for������������䣬д��ǰ�պ󿪣�a<10,��Ҫдa<=9��10��ʾ10��ѭ��/10�δ�ӡ 
//  forѭ����������䶼����ʡ�ԣ������鲻Ҫʡ�ԡ��жϲ���ʡ�ԣ��жϾͺ�Ϊ�棬����ѭ�� 

//for(;;)  ������ѭ�� 
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





#include <stdio.h>  //SwitchӦ��

//  switch ��Ķ����caseֻ��Ϊ���ͳ������������ַ������� 
//  break ��ʾִ����ϣ�ֱ������return 0 

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
		//		case 1:
		//			printf("����һ\n");
		//			break;
		//		case 2:
		//			printf("���ڶ�\n");
		//			break;
		//		case 3:
		//			printf("������\n");
		//			break;
		//		case 4:
		//			printf("������\n");
		//			break;
		//		case 5:
		//			printf("������\n");
		//			break;
		//		case 6:
		//			printf("������\n");
		//			break;
		//		case 7:
		//			printf("������\n");
		//			break;

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}





int main()  //while��getchar���
{
	//	int ch=getchar(); ��ʾ����һ��������ch 
	//	putchar(ch);       ��ʾ�������ch 

	//	int ch=0;
	//	while((ch=getchar())!=EOF)  //EOF��end of file�ļ�������־��ֵΪ-1 
	//	{
	//		putchar(ch);
	//	}

	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);  //���ʱ���������룬�����ַ���123456 
	//�ַ����м�����пո񣬽�β�и�'\n'����Ҫ��getchar()����ȡ�ߣ���Ȼ�����ж��Ƿ�ΪY�޷�ʵ�� 
	while ((getchar()) != '\n') //ȡ�߻������Ŀո��'\n' ��һֱѭ����ֱ��ȡ�ɾ� 
	{
		continue;
	}
	printf("��ȷ��(Y/N):>");
	ret = getchar();  //����Y/N�ٸ�ֵ��ret 
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}

	return 0;
}





#include <stdio.h> //while���break��continue

//break:ֱ����������ֹwhile ѭ��
//coninue:����Ĵ��벻ִ�У�ֱ�ӽ�����һ��ѭ�����ж� 

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





int main() //����������һ����
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���\n");
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
	//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
	//			break;
	//		}
	//	}
	//	if(i==sz)
	//	printf("�Ҳ���\n");
	return 0;
}




int main() //С��ϰ
{
	int a = 10;
	if (1 == a % 2)
		printf("%d\n", a);
	else
		printf("��������\n");
	return 0;
}







int main() //����n�Ľ׳�
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





//�������������¼
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
		printf("���������룺>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (3 == i)
		printf("��������������˳�����\n");
	return 0;
}




//���1-100������
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





//�ַ����������м��ƶ�
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	//int right=sizeof(arr1)/sizeof(arr1[0]-2); //����и�\n��Ҫ��2��������ַ����±�
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000); //��Ϣ1�� 
		system("cls");   //ִ��ϵͳ����ĺ�����cls��ʾ�����Ļ 
	}
	printf("%s\n", arr2);
	return 0;
}