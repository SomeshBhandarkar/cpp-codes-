#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int arr[5];
    int itemCount;

public:
    Queue()
    {
        itemCount = 0;
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if((rear+1)%5 == front)
            return true;
        else
            return false;
    }

    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
        }
        else
        {
            rear = (rear+1)%5;
            arr[rear] = val;
        }
        itemCount++;    
    }

    void dequeue()
    {
        int x = 0;
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return x;
        }
        else if (rear == front)
        {
            x = arr[rear];
            rear = -1;
            front = -1;
            itemCount--;
            return x;
        }
        else
        {
            cout << "Front value: " << front << endl;
            x = arr[front];
            arr[front] = 0;
            front = (front+1)%5;
            itemCount--;
            return x;
        }
    }

    int count()
    {
        return (itemCount);
    }

    void display()
    {
        cout << "All the values in the Queue are: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Queue q1;
    int value, option;

    do
    {
        cout << "What operation do you want to perform? Select option (1-6). Enter 0 to exit." << endl;
        cout << "1. Enqueue() " << endl;
        cout << "2. Dequeue() " << endl;
        cout << "3. isEmpty() " << endl;
        cout << "4. isFull() " << endl;
        cout << "5. count() " << endl;
        cout << "6. Display() " << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Enqueue operation \nEnter an item to the Queue" << endl;
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << "Dequeue operation \nValue Dequeued : " << q1.dequeue() << endl;
            break;
        case 3:
            if (q1.isEmpty())
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                cout << "Queue is not Empty" << endl;
            }
            break;
        case 4:
            if (q1.isFull())
            {
                cout << "Queue is full" << endl;
            }
            else
            {
                cout << "Queue is not full" << endl;
            }
            break;
        case 5:
            cout << "Count operation \ncount is: " << q1.count() << endl;
            break;
        case 6:
            cout << "Display operation - " << endl;
            q1.display();
            break;
        case 7:
            system("cls");
            break;

        default:
            cout << "Invalid operation" << endl;
            break;
        }
    } while (option != 0);

    return 0;
}