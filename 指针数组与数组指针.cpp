//指针数组与数组指针

//#include<stdio.h>
//int main(){
//	char *arr[5];
//	char *(*pa)[5]=&arr;// *pa指向 char*类型数组
//	
//	int arr2[10]={0};
//	int (*pa2)[10]=&arr2;// *pa2指向int类型数组
//	
////	printf("%p\n",arr);
////	printf("%d\n",arr2);
//	
//	return 0;
//}

//若没有括号、[]结合优先级高于*
#include<stdio.h>
void print1(int(*p)[5],int x,int y){
	int i=0;
	for( i=0;i<x;i++){
		int j=0;
		for( i=0;j<y;i++){
			//printf("%d",*(*(p+1)+j));//
			
			printf("%d",(*(p+i)[j]));// 与上面的等价
			//TODO
		}
		printf("\n");
	}
}


int main(){
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};

	print1(arr,3,5);// arr - 数组名 - 数组名就是首元素的地址 二位数组的首元素{1，2，3，4，5
    return 0;	
}

//上面这段代码出bug

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
//		//arr[i]==*(arr+i)==*(p+i)==p[i]  四种表示方式意义相同	
//	}
//	return 0;
//}

int arr[5]; // arr是一个五个元素的整形数组
int *parr1[10]; // parr1是一个数组 数组有10个元素 每个元素类型为int*  parr1是指针数组
int (*parr2)[10];// parr2 是一个指针 该指针指向一个数组 数组有10个元素 每个元素类型int parr2是数组指针
int (*parr3[10])[5];  // parr3 是一个数组  该数组有10个元素 每个元素是一个数组指针 该数组指针指向数组有5个 每个元素是int

