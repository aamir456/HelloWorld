#include"Queue.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	CircularQueue q;
	cout << "Enqueue elements are: " << endl;
	cout << "Enqueue: ";q.Enqueue(70);
	
	//q.Display();
	cout << endl;
	cout << "Enqueue: ";q.Enqueue(40);
	
	//q.Display();
	cout << endl;
	cout << "Enqueue: ";q.Enqueue(50);
	
	//q.Display();
	cout << endl;
	cout << "Enqueue: ";q.Enqueue(60);
	
	//q.Display();
	cout << endl;
	cout << "Enqueue: ";q.Enqueue(30);
	cout << endl;

	cout << "Enqueue: ";q.Enqueue(90);
	
	//q.Display();
	cout << endl;
	cout << "Dequeue elements are: " << endl;
	cout << "Dequeue: ";
	q.Dequeue();
	cout << endl;
	cout << "Dequeue: ";
	q.Dequeue();
	cout << endl;
	cout << "Dequeue: ";
	q.Dequeue();
	cout << endl;
	cout << "Dequeue: ";
	q.Dequeue();
	cout << endl;
	cout << "Dequeue: ";
	q.Dequeue();
	cout << endl;
	cout << "Dequeue: ";
	q.Dequeue();
	cout << endl;
	cout << endl;
	cout << "Enqueue: "; q.Enqueue(40);
	cout << endl;
	cout << "Enqueue: "; q.Enqueue(40);
	cout << "Enqueue: "; q.Enqueue(40);
	cout << endl;
	cout << "Enqueue: "; q.Enqueue(40);
	cout << "Enqueue: "; q.Enqueue(40);
	cout << endl;
	cout << "Enqueue: "; q.Enqueue(40);
	/*cout << "Dequeue: ";
	cout << q.GetRear();*/
	_getch();
	return 0;
}