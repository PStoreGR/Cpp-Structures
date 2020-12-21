#include <iostream>
#include <string>
using namespace std;

class Vivlio{
	private:
		int price;
	
	public:		
		string title;
		int pages;
		
		Vivlio(string, int ,int);
		Vivlio(string, int);
		Vivlio(string);
		
		void setPrice(int);
		int getPrice();
		void printAll();
		void printOne();
};



Vivlio::Vivlio(string title, int pages, int price){
	title = " ";
	pages = 0;
	setPrice(0);
}

Vivlio::Vivlio(string title, int pages){
	title = " ";
	setPrice(0);
}

Vivlio::Vivlio(string title){
	title = " ";
}

void Vivlio::setPrice(int temp){
	price = temp;
}

int Vivlio::getPrice(){
	return price;
}

void Vivlio::printOne(){
	cout<<"Title : "<<title<<endl;
}

void Vivlio::printAll(){
	cout<<"\n"<<"Title : "<<title<<"\t"<<"Pages : "<<pages<<"\t"<<"Price : "<<getPrice() <<endl;
}


int main(){
	string title;
	int pages, price;
	
	Vivlio book1(title), book2(title, pages, price), book3(title, price);
	
	
	book1.printOne();
	book2.printAll();
		
	book1.pages = book2.pages = book3.pages = 100;
	
	book1.printAll();
	book2.printAll();
	book3.printAll();
	
	return 0;
}
