#include<bits/stdc++.h>
using namespace std;
class Fee{
	int RTO_cost;
	int insurance;
	int TCS_charges;
	int additional_accessories;
	public:
	fee(){
		RTO_cost=113990;
		insurance=47300;
		TCS_charges=11000;
		additional_accessories=15000;
	}
	int getRTO_cost(){
		return RTO_cost;
	}
	int getInsurance(){
		return insurance;
	}
	int getTCS_charges(){
		return TCS_charges;
	}
	int getAdditional_accessories(){
		return additional_accessories;
	}
};
