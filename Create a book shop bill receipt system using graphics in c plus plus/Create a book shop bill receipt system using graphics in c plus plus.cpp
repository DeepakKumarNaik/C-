// Using Dev C++(GCC)
//Name: Deepak Kumar Naik

#include<iostream>
#include<graphics.h>
using namespace std;
void clrscr(void){
	system("cls");
}
class billing{
	public:
		
string name(void){
	return "Deepak";
}
	private:
	int i,bill_no,date,month,year,model_no,quantity;
	float price,x;
	char result[100],product_name[100];	
	
	public:
void get_data(void);
string display(string);


string deepak(string d1){
	if(d1=="Deepak"){
		x=1;
		return d1;
	}
	
	else{
		x=0;
		return "0";
	}
	}

};
	void billing::get_data(void){
		clrscr();
			cout<<"--------------------------------------------------"<<endl;
			cout<<"     Welcome To Book Shop Billing System"<<endl;
				cout<<"--------------------------------------------------"<<endl;
			
			//Bill no	
	cout<<"--------------------"<<endl;
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"|  Enter Bill No : |"<<endl;
    cout<<"|Data Type: Integer|"<<endl;
    cout<<"| Maximum Length=5 |"<<endl;
	
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"--------------------"<<endl;
	cin>>bill_no;	
//Date-Month-Year
clrscr();	
	cout<<"--------------------"<<endl;
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"|   Today's Date   |"<<endl;
    cout<<"| Date-Month-Year  |"<<endl;
    cout<<"| Format:dd-mm-yy  |"<<endl;
	
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"--------------------"<<endl;	
//Date
clrscr();    
    cout<<"--------------------"<<endl;
    cout<<"|   Enter Date :   |"<<endl;
    cout<<"|    Like : 03     |"<<endl;
    cout<<"--------------------"<<endl;	
    cin>>date;
    //Month
	clrscr();    
    cout<<"--------------------"<<endl;
    cout<<"|   Enter Month :  |"<<endl;
    cout<<"|    Like : 10     |"<<endl;
    cout<<"--------------------"<<endl;	
    cin>>month;
    //Date 
	clrscr();   
    cout<<"--------------------"<<endl;
    cout<<"|   Enter Year :   |"<<endl;
    cout<<"|    Like : 1998   |"<<endl;
    cout<<"--------------------"<<endl;	
    cin>>year;

//product name	
clrscr();
	cout<<"--------------------"<<endl;
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"|  Product Name :  |"<<endl;
    cout<<"| Do not use space |"<<endl;
    cout<<"|Maximum Length=10 |"<<endl;
	
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"--------------------"<<endl;
	cin>>product_name;	

//Model No	
clrscr();
	cout<<"--------------------"<<endl;
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"| Enter Model No : |"<<endl;
    cout<<"|Data Type: Integer|"<<endl;
    cout<<"| Maximum Length=5 |"<<endl;
	
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"--------------------"<<endl;
	cin>>model_no;	

//Quantity
clrscr();	
	cout<<"--------------------"<<endl;
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"| Enter Quantity : |"<<endl;
	cout<<"|Data Type: Integer|"<<endl;
	cout<<"| Maximum Length=5 |"<<endl;
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"--------------------"<<endl;
	cin>>quantity;	

//Price	
clrscr();
	cout<<"--------------------"<<endl;
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"|Enter Price/unit :|"<<endl;
    cout<<"|Format:rupee.paise|"<<endl;
    cout<<"|    Like: 15.50   |"<<endl;
    cout<<"|Maximum Length=5 |"<<endl;
	
	for(i=0;i<=1;i++){
	cout<<"|                  |"<<endl;	
}
    cout<<"--------------------"<<endl;	
    cin>>price;

};

string billing::display(string d2){
clrscr();
if(d2!="Deepak"){
			return "Do not change the name "+d2+" !";
		}
		else{
			
 int n = d2.length(); 
     // declaring character array 
char char_array[n + 1]; 
// copying the contents of the string to char array 
  strcpy(char_array, d2.c_str()); 
    
	//
	initwindow(800*x,500*x,"Book Shop Bill Receipt",0,0);
	rectangle(50*x,50*x,750*x,450*x);
	line(50*x,100*x,750*x,100*x); //top
	line(50*x,150*x,750*x,150*x);//2nd top
	line(100*x,100*x,100*x,450*x); //sl no
	line(250*x,100*x,250*x,450*x); //product name
	line(350*x,100*x,350*x,450*x);//model no
	line(450*x,100*x,450*x,450*x);//quantity
	line(600*x,100*x,600*x,450*x);//price/unit
	
	//title
	
	sprintf(result,"Book Shop Bill Receipt");
	outtextxy(350*x,10*x,result);

//set bill no and date

sprintf(result,"Date:");
	outtextxy(52*x,70*x,result);
	sprintf(result,"%i : %i : %i",date,month,year);
	outtextxy(92*x,70*x,result);
	sprintf(result,"Bill No:");
	outtextxy(600*x,70*x,result);
	sprintf(result,"%i",bill_no);
	outtextxy(680*x,70*x,result);

//set heading
sprintf(result,"Sl No");
	outtextxy(52*x,125*x,result);
	sprintf(result,"Product Name");
	outtextxy(110*x,125*x,result);
	sprintf(result,"Model No");
	outtextxy(260*x,125*x,result);
	sprintf(result,"Quantity");
	outtextxy(360*x,125*x,result);
	sprintf(result,"Price/Unit");
	outtextxy(460*x,125*x,result);
	sprintf(result,"Total Price");
	outtextxy(610*x,125*x,result);
	//display result
	sprintf(result,"1");
	outtextxy(52*x,155*x,result);
	sprintf(result,"%s",product_name);
	outtextxy(110*x,155*x,result);
	sprintf(result,"%i",model_no);
	outtextxy(260*x,155*x,result);
	sprintf(result,"%i",quantity);
	outtextxy(360*x,155*x,result);
	sprintf(result,"%f",price);
	outtextxy(460*x,155*x,result);
	sprintf(result,"%f",quantity*price);
	outtextxy(610*x,155*x,result);

		sprintf(result,"Design and developed by %s",char_array);
outtextxy(50*x,460*x,result); 
getch();
}
}


int main()
{ string name;
	billing bill;
	
bill.get_data();
name=bill.display(bill.deepak(bill.name()));
cout<<name;

return 0;	
}
