#include <iostream>
#include <queue> ///Required for priority queue
#include "PQ.h" ///includes our header file PQ
using namespace std;

void PQ::run()
{
  //  pQueue.size ==(5);
pQueue.push(9);  ///the .push() function inserts a new element in the queue
pQueue.push(10);
pQueue.push(11);
pQueue.push(12);
pQueue.push(13);


pQueue.pop();  ///the .pop() function erases the first element from the queue which is 13
 cout <<"Values are printed based off their Priority \n"<<endl;

while (!pQueue.empty())
{
    cout <<" "<< ' '<<pQueue.top()<<endl;
    cout <<"\n";

    pQueue.pop();
}


}
