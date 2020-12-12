#include <iostream>
using namespace std;
#include "queue.cpp"

int main(){
    queue<int> q;
    q.enqueue(12);
    q.enqueue(10);

    cout<< q.front() << endl;
    cout<< q.size() <<endl;

    q.dequeue();
    cout<< q.front() <<endl;

    q.dequeue();
    try{
        cout<< q.front() <<endl;
    }
    catch(std::logic_error &err){
        cout<< err.what() <<endl;
    }
    q.enqueue('a');
    cout<< q.front() <<endl;
}