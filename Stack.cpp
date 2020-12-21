#include <iostream>
using namespace std;


#define N 100



class Stack{
	
	public:
		Stack();
		void initStack();
		void pushInStack(int push);
		int popOutOfStack();
		bool emptyStack();
		bool fullStack();
		int countStackItems();
		int seeItemsPos(int pos);
		int fetchingStackItems(int pos, int item);
		void displayStackItems();
		void menuOfStack();
	private:
		int peak;
		int array[N];
		
};	


int main(){
	
	Stack s;
	int choice,pos,val;
	
	do{
		s.menuOfStack();
		cout << ">>>";
		cin >> choice;
		switch(choice){
			case 1:
				system("CLS");
				cout << "Give an item to push : ";
				cin >> val;
				s.pushInStack(val);
				system("CLS");
				break;
			case 2:
				system("CLS");
				cout << "Popimg item..... " << s.popOutOfStack() << endl<< endl << endl;
				system("PAUSE");
				system("CLS");
				break;
			case 3:
				system("CLS");
				s.displayStackItems();
				system("PAUSE");
				system("CLS");
				break;
			case 4:
				system("CLS");
				if(s.emptyStack()){
					cout << "The Stack is Empty..." << endl << endl << endl;
				}
				else{
					cout << "Stack have a few items press 3 to see them!!" << endl << endl << endl;
				}
				system("PAUSE");
				system("CLS");
				break;
			case 5:
				system("CLS");
				if(s.fullStack()){
					cout << "Stack is Full....." << endl << endl << endl;
				}
				else{
					cout << "Stack is not Full you can push item in... " << endl << endl << endl;
				}
				system("PAUSE");
				system("CLS");
				break;
			case 6:
				system("CLS");
				cout << "The items in Stack is : " << s.countStackItems() << endl<< endl << endl;
				system("PAUSE");
				system("CLS");
				break;
			case 7:
				system("CLS");
				cout << "Give the position you want to replace the item :";
				cin >> pos;
				cout << "Give the item you want to replace : ";
				cin >> val;
				s.fetchingStackItems(pos,val);
				system("PAUSE");
				system("CLS");
				break;
			case 8:
				system("CLS");
				cout << "Give the position you want to check :";
				cin >> pos;
				cout << "The item in position " << pos << " is : " << s.seeItemsPos(pos) << endl << endl << endl;
				system("PAUSE");
				system("CLS");
				break;
		}		
	}while(choice != 0);	
	
	
	system("PAUSE");
	return 0;
}


Stack::Stack(){
	
	peak = -1;	
	initStack();
}



void Stack::initStack(){
	
	for(int i=0; i<N; i++){
		array[i] = 0;
	}	
}


bool Stack::emptyStack(){
	
	if(peak == -1){		
		return true;
	}
	else{
		return false;
	}
}


bool Stack::fullStack(){
	
	if(peak == (N-1)){		
		return true;
	}
	else{
		return false;
	}
}


void Stack::pushInStack(int push){
	
	if(fullStack()){
		cout << "The Stack is FULL!" << endl << endl;
	}
	else{
		peak++;
		array[peak] = push;
	}	
}


int Stack::popOutOfStack(){
	int popItem;
	
	if(emptyStack()){
		cout << "The Stack is EMPTY!!" << endl << endl;
		return 0;
	}
	else{
		popItem = array[peak];
		array[peak] = 0;
		peak--;
		return popItem;
	}	
}

int Stack::countStackItems(){
	return (peak+1);
}


int Stack::seeItemsPos(int pos){
	
	if(emptyStack()){
		cout << "The Stack is EMPTY!!" << endl << endl;
		return 0;
		cout << endl << endl << endl << endl << endl << endl;
	}
	else{
		return array[pos];
		cout << endl << endl << endl << endl << endl << endl;
	}
}

int Stack::fetchingStackItems(int pos, int item){
	
	array[pos] = item;
	cout << "The item has change in location : " << pos << endl << endl;
	cout << endl << endl << endl << endl << endl << endl;
}

void Stack::displayStackItems(){
	
	cout << "This is the items of Stack..." << endl << endl << endl;
	
	for(int i=N-1; i>=0; i--){
		cout << array[i] << endl;
	}
	
	cout << endl << endl << endl << endl << endl << endl;
}

void Stack::menuOfStack(){	
	
	cout << "============================================="<< endl;
	cout << "\t      Stack Menu " << endl;
	cout << "============================================="<< endl;
	cout << "1. Push item in Stack" << endl;
	cout << "2. Pop item from Stack" << endl;
	cout << "3. Display items of Stack" << endl;
	cout << "4. Check if Stack is Empty" << endl;
	cout << "5. Check if Stack is Full" << endl;
	cout << "6.	Count Stack items" << endl;
	cout << "7.	Replace item in Stack" << endl;
	cout << "8.	Check item position" << endl;
	cout << "============================================="<< endl;
	cout << endl << "NOTE : Press 0 to exit!" << endl << endl << endl;
}

