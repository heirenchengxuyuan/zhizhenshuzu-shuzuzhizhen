//ָ������������ָ��

//#include<stdio.h>
//int main(){
//	char *arr[5];
//	char *(*pa)[5]=&arr;// *paָ�� char*��������
//	
//	int arr2[10]={0};
//	int (*pa2)[10]=&arr2;// *pa2ָ��int��������
//	
////	printf("%p\n",arr);
////	printf("%d\n",arr2);
//	
//	return 0;
//}

//��û�����š�[]������ȼ�����*
#include<stdio.h>
void print1(int(*p)[5],int x,int y){
	int i=0;
	for( i=0;i<x;i++){
		int j=0;
		for( i=0;j<y;i++){
			//printf("%d",*(*(p+1)+j));//
			
			printf("%d",(*(p+i)[j]));// ������ĵȼ�
			//TODO
		}
		printf("\n");
	}
}


int main(){
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};

	print1(arr,3,5);// arr - ������ - ������������Ԫ�صĵ�ַ ��λ�������Ԫ��{1��2��3��4��5
    return 0;	
}

//������δ����bug

//int main(){
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	int *p=arr;
//	for(int i=0;i<10;i++){
//		//TODO
//		printf("%d ",p[i]);
//		
//		printf("%d ",*(p+i));
//		
//		printf("%d ",*(arr+i));
//		
//		printf("%d ",arr[i]);
//		
//		//arr[i]==*(arr+i)==*(p+i)==p[i]  ���ֱ�ʾ��ʽ������ͬ	
//	}
//	return 0;
//}

int arr[5]; // arr��һ�����Ԫ�ص���������
int *parr1[10]; // parr1��һ������ ������10��Ԫ�� ÿ��Ԫ������Ϊint*  parr1��ָ������
int (*parr2)[10];// parr2 ��һ��ָ�� ��ָ��ָ��һ������ ������10��Ԫ�� ÿ��Ԫ������int parr2������ָ��
int (*parr3[10])[5];  // parr3 ��һ������  ��������10��Ԫ�� ÿ��Ԫ����һ������ָ�� ������ָ��ָ��������5�� ÿ��Ԫ����int

