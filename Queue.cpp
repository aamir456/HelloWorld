#include"Queue.h"
#include <iostream>
#include <conio.h>
using namespace std;
bool CircularQueue::CircularQueueIsEmpty()
{
	if (count==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool CircularQueue::CicrcularQueueIsFull()
{
	if (count ==QueueCapacity)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void CircularQueue::Enqueue(int num)
{
	int item;
	if (!CicrcularQueueIsFull())
	{
		arr[rear] = num;
		item = arr[rear];
		rear = (rear+1) % QueueCapacity;
		
		rear++;
		count++; 
		cout << item;;
	}
	else
	{
		
		cout << "Queue is Full: ";
	}
}
void CircularQueue::Dequeue()
{
	int item;
	if (!CircularQueueIsEmpty())
	{
		/*front = QueueCapacity - 1;*/
		item = arr[front];
		front = (front+1) % QueueCapacity;
		front++;
		count--;
		cout << item;;
		
	}
	else
	{
		cout << "Queue is Empty: ";
	}
}
int CircularQueue::GetRear()
{
	if (!CircularQueueIsEmpty())
	{
		return arr[rear];

	}
	else
	{
		cout << "Queue is Empty: ";
		return -1;
	}
}
void CircularQueue::Display()
{
		cout << arr[rear];
}
//void CircularQueue::GreaterNumber()
//{
//	int max = 0;
//	for (int i = 0; i < rear; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			cout << "Greatest Element in queue: " << max;
//		}
//	}
//}