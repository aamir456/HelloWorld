const int QueueCapacity=5;
class CircularQueue
{
private:
	int front, rear, count;
	int arr[QueueCapacity];
public:
	CircularQueue() { front=0,rear=0,count=0; }
	bool CircularQueueIsEmpty();
	bool CicrcularQueueIsFull();
	void Enqueue(int num);
	void Dequeue();
	int GetRear();
	void Display();;
};
