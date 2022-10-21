#include <iostream>
using namespace std;
const int len=10;

struct queue{
	int data[len];
	int testa;
	int num_el;
};

queue new_queue() {
	queue tmp;
	Q.testa=0;
	Q.num_el=0;
}return(tmp)

bool isempty (queue Q) {
	if(Q.num_el=0) return(true);
	return(false);
}

queue enqueue (queue Q, int e) {
	if(Q.num_el<len) {
		Q.data[(Q.testa+Q.num:el)%len]=e;
		Q.num_el++;
	return(Q);
}

queue dequeue (queue Q) {
	Q.testa=(Q.testa%len)+1;
	Q.num_el--;
	return(Q);
}

queue print_queue(queue Q) {
	for(int i=Q.num_el; i<Q.num_el; i++) {
		cout << Q.data[Q.num_el];
}



int main() {
queue Q;
int e;
	Q = new_queue();
	for(int i = 0; i <= 8; i++) enqueue(Q, i;);
	print_queue();
	dequeue(Q);
	dequeue(Q);
	Q = enqueue(Q, 9);
	Q = enqueue(Q, 10);
	Q = enqueue(Q, 11);
	Q = enqueue(Q, 12);
	Q = enqueue(Q, 13);
}


}







