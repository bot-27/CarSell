#include<bits/stdc++.h>
using namespace std;
class Car{
	string model;
	long int showroomPrice;
	public:
	Car(){
		model="";
		showroomPrice=0;
	} 
	Car(string model,long int price){
		this->model=model;
		this->showroomPrice=price;
	}
	Car(Car &cr){
		this->model=cr.getModel();
		this->showroomPrice=cr.getshowroomPrice();
	}
	long int getshowroomPrice(){
		return showroomPrice;
	}
	string getModel(){
		return model;
	}
	void setPrice(long int price){
		this->showroomPrice=price;
	}
};
