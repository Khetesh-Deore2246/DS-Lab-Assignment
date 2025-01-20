#include<bits/stdc++.h>
using namespace std;
 class string_
 { 
 	char c;
 	string  word;
 	int length;
 	int l_sub;
 	int start_sub;
 	
 	public:
 		void frequency();
 		void input();
 		void palindrome();
 		void substring();
 		void drop();
 		void replace();
 
 };
  void string_ :: input()
  {
  	cout<<"Enter the String : ";
  	cin>>word;
  	length =word.size();
  	cout<<"Enter the char : ";
  	cin>>c;
  	cout<<length<<endl;
  }
 void string_ :: frequency()
 {      int count=0;
 	for(int i=0;i<=length;i++)
 	{
 		if(word[i]==c)
 		{
 		   count++;
 		}
 	}
 	cout<<"frequency : "<<count<<endl;
 
 }
 void string_ :: palindrome()
 {    
	bool flag =false;
     for(int i=0; i<=(length/2)+1;i++)
     {  
       if(word[i]==word[length-1-i])
       {
         flag =true;
       }
       else
       {
          cout<<"False"<<endl;
          flag=false;
          break;
       }
     }
     if(flag)
     {
     cout<<"True"<<endl;
     }
 }
 void string_ :: substring()
 {
  	cout<<"Enter the starting position for sunstring: ";
  	cin>>start_sub;
  	cout<<"Enter the length for substring : ";
  	cin>>l_sub;
  	cout<<"Substring is :";
  	for(int i =start_sub;i<(start_sub+l_sub);i++)
  	{
  	  cout<<word[i];
  	}
  	cout<<endl;	
 }
 
 void string_ :: drop()
 {  string temp;
    temp=word;
    for(int i=0;i<=length;i++)
    {
       if(temp[i]==c)
       {
         temp[i]=word[i]-temp[i];
       }
    }
    cout<<"New String is "<<temp<<endl;
 }
 
 void string_ :: replace()
 {  char a,b;
   cout<<"Which chracter you want to replace :";
   cin>>a;
   cout<<"Enter the new character for replacement : ";
   cin>>b;
   string repl=word;
   for(int i=0;i<=length;i++)
   {
     if(repl[i]==a)
     {
       repl[i]=b;   
         }
   } 
   cout<<"New string with replacemet is : "<<repl<<endl;
 
 }
 int main()
 { 
	string_ s;
	s.input();
	s.frequency();
	s.palindrome();
	s.substring();
	s.drop();
	s.replace();
	return 0;
 }
