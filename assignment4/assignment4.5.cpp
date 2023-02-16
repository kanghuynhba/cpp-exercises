#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"Enter a temperature: ";
	cin>>a;
	
	if (a<=-362)
	cout<<"Ethyl alcohol will freeze\n"<<"Mercury will freeze\n"<<"Oxygen will freeze\n"<<"Water will freeze";
	else if (a>-362 && a<=-306)
       {cout<<"Ethyl alcohol will freeze\n"<<" Water will freeze\n"<<"Mercury will freeze";}
	else if (a>-306 && a<=-173 )
       {cout<<"Oxygen will boiling\n"<<"Ethyl alcohol will freeze\n"<<" Mercury will freeze\n"<<"Water will freeze";}
	else if (a>-173 && a<=-38)
       {cout<<"Oxygen will boiling\n"<<"Mercury will freeze\n"<<"Water will freeze";}
	else if (a>-38 && a<=32)
       {cout<<"Oxygen will boiling\n"<<"Water will freeze";}
	else if (a>32 && a<172)
       {cout<<"Oxygen will boiling\n";}
	else if (a>=172 && a<212)
       {cout<<"Ethyl alcohol will boiling \n"<<"Water will boiling";}
	else if (a>=212 && a<676)
	   {cout<<"Ethyl alcohol will boiling\n"<<"Oxygen will boiling\n"<<"Water will boiling";}
	else cout<<"Ethyl alcohol will boiling\n"<<"Mercury will boiling\n"<<"Oxygen will boiling\n"<<"Water will boiling";
	
	return 0;		 
}