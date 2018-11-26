// This is the implementation file queue.cpp.
// This is the implementation of the class Queue.
// The interface for the class Queue is in the header file queue.h.

#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <ctime>
#include "q2.h"

using namespace std;

namespace queuesavitch
{
    //Uses cstddef:
    Queue::Queue() : front(NULL), back(NULL)
    {
        //Intentionally empty.
    }

    Queue::Queue(const Queue& aQueue)
    {
        if(aQueue.empty( ))
        {
            front = back = NULL;
        }
        else
        {
            QueueNodePtr temp_ptr_old = aQueue.front;
            //temp_ptr_old moves through the nodes
            //from front to back of aQueue.
            QueueNodePtr temp_ptr_new;
            //temp_ptr_new is used to create new nodes.
            back = new QueueNode;
            back->ticketNumber = temp_ptr_old->ticketNumber;
            back->timeStamp = temp_ptr_old->timeStamp;
            back->link = NULL;
            front = back;
            //First node created and filled with data.
            //New nodes are now added AFTER this first node.
            temp_ptr_old = temp_ptr_old->link;
            //temp_ptr_old now points to second
            //node or NULL if there is no second node.
            while (temp_ptr_old != NULL)
            {
                temp_ptr_new = new QueueNode;
                back->ticketNumber = temp_ptr_old->ticketNumber;
                back->timeStamp = temp_ptr_old->timeStamp;
                temp_ptr_new->link = NULL;
                back->link = temp_ptr_new;
                back = temp_ptr_new;
                temp_ptr_old = temp_ptr_old->link;
            }
        }
    }

    Queue::~Queue()
    {
        while (! empty( ))
        {
            QueueNodePtr discard;
            discard = front;
            front = front->link;
            if (front == NULL) //if you removed the last node
                back = NULL;

            delete discard;
        }
    }

    //Uses cstddef:
    bool Queue::empty() const
    {
        return (back == NULL); //front == NULL would also work
    }

    //Uses cstddef:
    void Queue::add(int ticketNumberP)
    {
        if (empty())
        {
            front = new QueueNode;
            front->ticketNumber = ticketNumberP;
            front->timeStamp = static_cast<long>(time(NULL));
            front->link = NULL;
            back = front;
            cout << front->timeStamp << "." << endl;
        }

        else
        {
            QueueNodePtr temp_ptr;
            temp_ptr = new QueueNode;
            temp_ptr->ticketNumber = ticketNumberP;
            temp_ptr->timeStamp = static_cast<long>(time(NULL));
            cout << temp_ptr->timeStamp << "." << endl;
            temp_ptr->link = NULL;
            back->link = temp_ptr;
            back = temp_ptr;
        }
    }

    //Uses cstdlib and iostream:
    long Queue::remove()
    {
        if (empty())
        {
            cout << "Error: Removing an item from an empty queue.\n";
            exit(1);
        }

        long helpTime = static_cast<long>(time(NULL));

        cout << "Customer " << front->ticketNumber
             << " is being helped at time " << helpTime << ".";

        long timeWaiting =  helpTime - front->timeStamp;
        QueueNodePtr discard;
        discard = front;
        front = front->link;

        if(front == NULL) //if you removed the last node
        {
            back = NULL;
        }

        delete discard;

        return timeWaiting;
    }

    int Queue::nextCust()
    {
        int tempI = 0;
        tempI = front->ticketNumber;
        return tempI;

    }
}//queuesavitch