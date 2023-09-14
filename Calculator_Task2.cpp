#include <iostream>
using namespace std;
int main()
{
    float a,b;
    float add,sub,mul,div;
    int choice;
    char divi=246;

    while(1)
    {
    cout<<"---------------------------------------------------------------------"<<endl;

    cout<<"|-------------------------THE CALCULATOR-----------------------------|"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"|\n|                       Enter first number                          |\n|"<<endl;
    cout<<"                                     ";
cin>>a;
    cout<<"|\n|                       Enter second number                         |\n|"<<endl;
    cout<<"                                     ";

cin>>b;


    cout<<"---------------------------------------------------------------------"<<endl;

    cout<<"|                            OPERATIONS                               |"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;


    cout<<"|                                                                     |\n|              1-ADDITION                                             |\n|              2-SUBTRACTION                                          |\n|              3-MULTIPLICATION                                       |\n|              4-DIVISION                                             |\n|\n|\n|";
    cin>>choice;


    if(choice==1)
    {
         add=a+b;
    cout<<"                                     ";

         cout<<a<<" + "<<b<<" = "<<add<<"\n"<<endl;
    }
    
else if(choice==2)
    {
         sub=a-b;
    cout<<"                                     ";

         cout<<a<<" - "<<b<<" = "<<sub<<"\n"<<endl;
    }

else if(choice==3)
    {
         mul=a*b;
    cout<<"                                     ";

         cout<<a<<" x "<<b<<" = "<<mul<<"\n"<<endl;
    }

else if(choice==4)
    {
         div=a/b;
    cout<<"                                     ";

         cout<<a<<" "<<divi<<" "<<b<<" = "<<div<<"\n"<<endl;
    }
   
   cout<<"              Do you want to continue using the calculator or Exit ?\n\n              If you want to continue press Y\n\n              If you want to exit press N"<<endl;
   char c;
   cin>>c;
   if (c=='N'||c=='n')
   break;
   
    }
}