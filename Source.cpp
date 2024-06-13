#include <iostream>
#include <cstring>

 using namespace std;

 
const float vat = 0.09;

 
struct MENU
{
  
char name[225];
   
int price;
 
};

 
MENU menu[3] =
  { {"hamburger", 150000}, {"pizza", 300000}, {"hotdog", 230000} };

 
int main ()
{
  
cout << "menu: \n" << endl;
  
for (int i = 0; i < 3; i++)
	{
	  
cout <<"code:"<< i + 1 << endl;
	  
cout << "name : " << menu[i].name << endl;
	  
cout << "price : " << menu[i].price << "\n" << endl;
	
} 
 
char food[225];
cout<<"enter your order food:";
  
cin >> food;
  
 
for (int j = 0; j < 3; j++)
	{
	  
if (strcmp (food, menu[j].name) == 0)
		{
		  
cout << "total : " << menu[j].price << endl;
		  
cout << "total including VAT : " << menu[j].price * (1 +vat) << endl;
		
}
}
return 0;
}