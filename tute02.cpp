#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double salary, netsalary	;
  int etype, otHrs, otRate;
  
   cout << "Enter the emplyee type : ";
   cin >> etype ;
   cout << "Enter the salary : ";
   cin >> salary ;
   cout << "Enter the othrs : ";
   cin >> otHrs ;
   
    switch (etype)
	    {
	    	
           case 1 : otRate = 1000;
           break;
           case 2 : otRate = 1500;
           break;
           default : otRate = 1700;
           break;
           
         }
          
         netsalary = salary + otHrs*otRate;
         cout << "net salary is : " << setiosflags (ios::fixed)<<setprecision(2)<<netsalary<<endl;
        
	return 0;
}

