#include <iostream>
using namespace std; 
class Node {
  int val;
  Node* Next;
public:
  void set_val(int val);
  void set_next(Node* next);
  Node (int val );
  Node* get_next();
  int get_val();


};
Node :: Node (int val ){
  this->val = val;
  this->Next = NULL;

}
void Node :: set_val(int val){
  this->val = val;


}
void Node:: set_next(Node* next){
  this->Next = next;


}
Node * Node :: get_next() {
  return this->Next;
    }
int Node :: get_val (){
  return this->val;


}


class Queue{
  Node* front;
  Node* rear ; 
  int size;

public:
Queue (int val) ;
void enqueue(int val) ; 
void print_queue();
int  dequeue();
int get_front();
void is_empty();

};

Queue :: Queue (int val){
   this->size = 0 ;
  if (size == 0){
    Node* n = new Node(val);
    this->front = n;
    this->rear = n;
    size++;  
  }


  else{

  cout<<"Queue Already Initialize";

  }
}
void Queue ::  enqueue(int val){
  Node* n = new Node(val);
  Node* temp = this->rear;
  temp->set_next(n);
  this->rear = n;

}
int Queue::dequeue() {
  if (this->front == nullptr) {
    cout << "Queue is Empty";
    return -1;
  } else {
    Node* temp = this->front;
    int x = temp->get_val();
    this->front = this->front->get_next();

    if (this->front == nullptr) {
      this->rear = nullptr; 
    }

    delete temp;
    return x;
  }
}
void Queue :: print_queue(){
  if (front==NULL){
    cout<<"Queue is Empty"<<endl;
    return;
  }
 else{ Node* temp = front;
  cout<<"[ ";
  while(temp != NULL){
    cout<<temp->get_val()<<" ";
    temp = temp->get_next();
  }
  cout<<"]"<<endl;}
}
int Queue :: get_front(){

  return this->front->get_val();

}
void Queue:: is_empty (){
  if(this->front == nullptr)
    cout<<"Queue is Empty"<<endl;

}



int main(){

Queue q = Queue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  q.print_queue();
  q.dequeue();
  q.print_queue();
Queue z = Queue(90);
z.print_queue();
z.dequeue();
z.print_queue();
z.is_empty();




  return 0;  
}