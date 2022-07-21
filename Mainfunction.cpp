#include"Order.h"
int main(){
	cout<<"WelCome\n";
	map<string,long int> mp;
	mp["Polo Trendline"]=870000;
	mp["Polo Highline"]=1009000;
	mp["Virtus Trendline"]=1105000;
	mp["Virtus Highline"]=1308000;
	mp["Taigun Trendline"]=1489000;
	mp["Taigun Highline"]=1542000;
	mp["Taigun Topline"]=1771000;
	
	string selected_car_name="";
	int isInsurance_subscribed;
	int isAdditional_accessories_subscribed;
	int discountType;
	int discountAmountRespective;
	Fee fee;
	while(1){
		cout<<"Choose your next car(name)\n";
		int i=1;
		for(auto it:mp){
			cout<<i++<<". "<<it.first<<endl;
		}
		cin>>selected_car_name;
		if(mp.find(selected_car_name)==mp.end()){
			cout<<"Please Select from the given Option\n";
			continue;
		}
		cout<<"Do you want Insurance?(please select number)\n1.YES\n0.NO";
		cin>>isInsurance_subscribed;
		cout<<"Do you want Additional Accesories?(please select number)\n1.YES\n0.NO";
		cin>>isAdditional_accessories_subscribed;
		cout<<"Enter The Discount Amount(Respective of above choise)";
		cin>>discountAmountRespective;
		Car tmpCar(selected_car_name,mp[selected_car_name]);
		Order order(tmpCar,isInsurance_subscribed!=0,isAdditional_accessories_subscribed!=0,discountAmountRespective);
		long int total=order.calculate_total();
		
		
		cout<<"The Bill:\nThe total cost is"<<total<<"\n";
		cout<<"("<<order.getCar().getModel()<<" "<<order.getCar().getshowroomPrice();
		cout<<fee.getRTO_cost()<<"(RTO) + ";
		if(isInsurance_subscribed==1){
			cout<<fee.getInsurance()<<"(Insurance) + ";
		}	
		cout<<fee.getTCS_charges()<<"(TCS) + ";
		if(isAdditional_accessories_subscribed==1){
			cout<<fee.getAdditional_accessories()<<"(Additional Accessories) -";
		}
		
		cout<<order.getDiscount()<<"(Dealer discount)\n";
		 
		cout<<"Do you want to stop?\n1.Yes\n0.No";
		int br;
		cin>>br;
		if(br==1)break;
	}
	return 0;
}
