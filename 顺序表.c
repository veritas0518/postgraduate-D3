////#include<stdio.h>
////#include<stdlib.h>
//#include"SeqList.h"
////typedef int SLDataType;    //动态顺序表
////typedef struct SeqList {
////	SLDataType* a;
////	int size;           //有效数据的个数
////	int capacity;   //容量空间的大小
////}SL;
//void SeqListInit(SL *ps) {
//	/*s.size = 0;
//	s.a = NULL;
//	s.capacity = 0;*/
//	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
//	if (ps->a = NULL) {
//		printf("申请内存失败");
//		exit(-1);
//	}
//	ps->size = 0;
//	ps->capacity = 4;
//}
//void SeqListPrint(SL* ps) {
//	assert(ps);
//	for (int i = 0; i < ps->size; ++i) {
//		printf("%d", ps->a[i]);
//	}
//	printf("\n");
//}
////尾插尾删，头插头删
//void SeqListPushBack(SL* ps, SLDataType x) {
//	assert(ps);
//	ps->a[ps->size] = x;
//	ps->size++;
//}
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);//要插入的数据
//void SeqListPopFront(SL* ps);
////任意位置的插入删除
//void SeqListInsert(SL* ps, int pos, SLDataType x);  //pos是位置 position
//void SeqListErase(SL* ps, int pos, SLDataType x);
//
//
//
//
//
//
//
//
//
