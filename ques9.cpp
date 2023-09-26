#include <bits/stdc++.h>
using namespace std;

void reverseQueueFirstKElements(
  int k, queue<int>& Queue)
{
  if (Queue.empty() == true
    || k > Queue.size())
    return;
  if (k <= 0)
    return;

  stack<int> Stack;

  for (int i = 0; i < k; i++) {
    Stack.push(Queue.front());
    Queue.pop();
  }

  while (!Stack.empty()) {
    Queue.push(Stack.top());
    Stack.pop();
  }

  for (int i = 0; i < Queue.size() - k; i++) {
    Queue.push(Queue.front());
    Queue.pop();
  }
}

void Print(queue<int>& Queue)
{
  while (!Queue.empty()) {
    cout << Queue.front() << " ";
    Queue.pop();
  }
}

int main()
{
  queue<int> Queue;
  Queue.push(5);
  Queue.push(10);
  Queue.push(15);
  Queue.push(20);
  Queue.push(25);
  
  int k = 3;
  reverseQueueFirstKElements(k, Queue);
  Print(Queue);
}