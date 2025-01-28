#include<iostream>
using namespapce std;

int main()
{int studentID, password, nextofkeen;
string name, surname, sponsorship;
cout<<"enter password"<<endl;
cin>>password;
for (int i=0; i<2; i++)
if(password==7644){
cout<<"correct"<<"\n";
 
 cout<<"\n studentID: ";
 cin>>studentID;
 
 cout<<"\n name: ";
 cin>>name;
 
 cout<<"\n surname: ";
 cin>>surname;
 
 cout<<"\n nextofkeen: ";
 cin>>nextofkeen;
 
 cout<<"\n sponsorship: ";
 cin>>sponsorship;
 
 cout<<"\n********************************"<<endl;
 cout<<"studentID: "<<studentID<<endl;
 cout<<"********************************"<<endl;
 cout<<"name: "<<name<<endl;
 cout<<"********************************"<<endl;
 cout<<"surname: "<<surname<<endl;
 cout<<"********************************"<<endl;
 cout<<"nextofkeen: "<<nextofkeen<<endl;
 cout<<"********************************"<<endl;
 cout <<"sponsorship: "<<sponsorship<<endl;
cout<<"********************************"<<endl;
 
 } 
 
 
 else{
 cout<<"not correct"<<endl;}
 
 
 cout<<"(goodbye)";
    return 0;
}