#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};


int isEmpty(struct queue *q){
    if(q->r==q->f){
	return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r==q->size-1){
	return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
	printf("This Queue is full\n");
    }
    else{
	q->r++;
	q->arr[q->r] = val;
	 printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
	printf("This Queue is empty\n");
    }
    else{
	q->f++;
	a = q->arr[q->f];
    }
    return a;
}

int main(){
    // Initializing Queue (Array Implementation)
	int node;
    int i = 1; int j;
    int visited[7] = {0,0,0,0,0,0,0};
    int a [7][7] = {
	{0,1,1,1,0,0,0},
	{1,0,1,0,0,0,0},
	{1,1,0,1,1,0,0},
	{1,0,1,0,1,0,0},
	{0,0,1,1,0,1,1},
	{0,0,0,0,1,0,0},
	{0,0,0,0,1,0,0}
    };
    struct queue q;
    clrscr();
    q.size = 400;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    // BFS Implementation
    printf("%d", i);
    visited[i] = 1;
    enqueue(&q, i); // Enqueue i for exploration
    while (!isEmpty(&q))
    {
	int node = dequeue(&q);
	for ( j = 0; j < 7; j++)
	{
	    if(a[node][j] ==1 && visited[j] == 0){
		printf("%d", j);
		visited[j] = 1;
		enqueue(&q, j);
	    }
	}
    }
    getch();
    return 0;
}
Output
1Enqued element: 1
0Enqued element: 0
2Enqued element: 2
3Enqued element: 3
4Enqued element: 4
5Enqued element: 5
6Enqued element: 6
/tmp/9JVTz4ynTZ.o
1Enqued element: 1
0Enqued element: 0
2Enqued element: 2
3Enqued element: 3
4Enqued element: 4
5Enqued element: 5
6Enqued element: 6
