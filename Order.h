#include"Car.h"
#include"Fee.h"
class Order:public Fee{
	Car car;
	bool isAdditional_accessories_subscribed;
	bool isInsurance_subscribed;
	long int discount;
	int discountType;
	int amountOfDiscount;
	public:
	Order(){
		isAdditional_accessories_subscribed=false;
		isInsurance_subscribed=false;
		discount=0;
	}
	Order(Car &car,bool isAdditional_accessories_subscribed,bool isInsurance_subscribed,int amountOfDiscount){
		this->car=car;
		this->isAdditional_accessories_subscribed=isAdditional_accessories_subscribed;
		this->isInsurance_subscribed=isInsurance_subscribed;
		this->discount=0;
		this->amountOfDiscount=amountOfDiscount;
	}
	void calculate_discount(){
		if(!isAdditional_accessories_subscribed&&!isInsurance_subscribed){
			discount=0;
			return;
		}
		if(amountOfDiscount<100){
			discount=amountOfDiscount*car.getshowroomPrice();
			discount/=100;
		}else{
			discount-=amountOfDiscount;
		}
	}
	long int calculate_total(){
		long int total=0;
		total+=car.getshowroomPrice();
		total+=getRTO_cost();
		total+=getTCS_charges();
		calculate_discount();
		if(discount>30000){
			discount=30000;
		}
		total-=discount;
		return total;
	}
	Car getCar(){
		return this->car;
	}
	bool getIsAdditional_accessories_subscribed(){
		return this->isAdditional_accessories_subscribed;
	}
	bool getIsInsurance_subscribed(){
		return this->isInsurance_subscribed;
	}
	long int getDiscount(){
		return this->discount;
	}
};
