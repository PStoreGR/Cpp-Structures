#include <iostream>
using namespace std;

#define N 100


class Heap{
	public:
		Heap();
		void initHeap();
		int enqueue(int in_queue);
		int dequeue();
		bool emptyHeap();
		bool fullHeap();	
		int countHeapItems();	
		int seeItemsPos(int pos);
		int replaceHeapItems(int pos, int item);
		void displayHeapItems();
		void menuOfHeap();
	private:
		int array[N];
		int start;
		int finish;		
};


int main(){
	
	Heap h;
	int choice,pos,val;
	
	do{
		h.menuOfHeap();
		cout << ">>>";
		cin >> choice;
		switch(choice){
			case 1:
				system("CLS");
				cout << "Insert(enqueue) item in Heap : ";
				cin >> val;
				cout << endl << endl;
				h.enqueue(val);
				cout << endl << endl << endl << endl << endl << endl;
				system("PAUSE");				
				system("CLS");
				break;
			case 2:
				system("CLS");
				cout << "Removing(dequeue) item..... " << h.dequeue() << endl<< endl << endl;
				system("PAUSE");
				system("CLS");
				break;
			case 3:
				system("CLS");
				h.displayHeapItems();
				system("PAUSE");
				system("CLS");
				break;
			case 4:
				system("CLS");
				if(h.emptyHeap()){
					cout << "The Heap is Empty..." << endl << endl << endl;
				}
				else{
					cout << "Heap have a few items press 3 to see them!!" << endl << endl << endl;
				}
				system("PAUSE");
				system("CLS");
				break;
			case 5:
				system("CLS");
				if(h.fullHeap()){
					cout << "Heap is Full....." << endl << endl << endl;
				}
				else{
					cout << "Heap is not Full you can push item in... " << endl << endl << endl;
				}
				system("PAUSE");
				system("CLS");
				break;
			case 6:
				system("CLS");
				cout << "The items in Heap is : " << h.countHeapItems() << endl<< endl << endl;
				system("PAUSE");
				system("CLS");
				break;
			case 7:
				system("CLS");
				cout << "Give the position you want to replace the item :";
				cin >> pos;
				cout << "Give the item you want to replace : ";
				cin >> val;
				h.replaceHeapItems(pos,val);
				system("PAUSE");
				system("CLS");
				break;
			case 8:
				system("CLS");
				cout << "Give the position you want to check :";
				cin >> pos;
				cout << "The item in position " << pos << " is : " << h.seeItemsPos(pos) << endl << endl << endl;
				system("PAUSE");
				system("CLS");
				break;
		}		
	}while(choice != 0);	
	
	
	system("PAUSE");
	return 0;
	
}


Heap::Heap(){
	
	initHeap();
}


void Heap::initHeap(){
	
	finish = -1;
	
	for(int i=0; i<N; i++){
		array[start] = 0;
	}
}

bool Heap::emptyHeap(){
	
	if(finish == -1){		
		return true;
	}
	else{
		return false;
	}
}


bool Heap::fullHeap(){
	
	if(finish == (N-1)){		
		return true;
	}
	else{
		return false;
	}
}


int Heap::enqueue(int in_queue){
	
	if(fullHeap()){
		cout << "The Heap is FULL!" << endl << endl;
	}
	else{
		finish++;
		array[finish] = in_queue;
		cout << "Insert(enqueue) complete!! " << endl << endl << endl;
	}	
}


int Heap::dequeue(){
	
	int item;
	
	if(emptyHeap()){
		cout << "The Heap is EMPTY!!" << endl << endl;
		return 0;
	}
	else{
		item = array[0];
		for(int i=0; i<finish; i++){
			array[i] = array[i+1];
		}
		array[finish] = 0;
		finish--;
		return item;
	}
}

int Heap::countHeapItems(){
	return (finish+1);
}

int Heap::seeItemsPos(int pos){
	
	if(emptyHeap()){
		cout << "The Heap is EMPTY!!" << endl << endl;
		return 0;
		cout << endl << endl << endl << endl << endl << endl;
	}
	else{
		return array[pos];
		cout << endl << endl << endl << endl << endl << endl;
	}
}

int Heap::replaceHeapItems(int pos, int item){
	
	array[pos] = item;
	cout << "The item has change in location : " << pos << endl << endl;
	cout << endl << endl << endl << endl << endl << endl;
}

void Heap::displayHeapItems(){
	
	cout << "This is the items of Heap..." << endl << endl << endl;
	
	for(int i=0; i<N; i++){
		if(emptyHeap()){
			array[i] = 0;
			cout << array[i] << endl;
		}
		else{
			cout << array[i] << endl;
		}
	}
	
	cout << endl << endl << endl << endl << endl << endl;
}

void Heap::menuOfHeap(){	
	
	cout << "============================================="<< endl;
	cout << "\t      Heap Menu " << endl;
	cout << "============================================="<< endl;
	cout << "1. Insert(enqueue) item in Heap" << endl;
	cout << "2. Remove(dequeue) item from Heap" << endl;
	cout << "3. Display items of Heap" << endl;
	cout << "4. Check if Heap is Empty" << endl;
	cout << "5. Check if Heap is Full" << endl;
	cout << "6. Count Heap items" << endl;
	cout << "7. Replace item in Heap" << endl;
	cout << "8. Check item position" << endl;
	cout << "============================================="<< endl;
	cout << endl << "NOTE : Press 0 to exit!" << endl << endl << endl;
}
