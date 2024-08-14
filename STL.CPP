#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    cout<<"front of the queue is "<<q.front() <<endl;
    q.push(12);
    cout<<"front of the queue is "<<q.front() <<endl;
    q.push(20);
    cout<<"front of the queue is "<<q.front() <<endl;
    cout<<"size of the queue is "<<q.size() <<endl;
    q.pop();
    cout<<"size of the queue is "<<q.front() <<endl;
    if(q.empty())
    {
        cout<<"queue is empty "<<endl;
    }
    else
    {
        cout<<"queue is not empty "<<endl;
    }
    return 0;
}