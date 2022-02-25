#include<iostream>
using namespace std;

  class Register {
  	
  	public:
  	string username, password;
  };
   class Login{
   	public:
   	string inpUsername, inpPassword;
   };
   
   int main(){
   	
   	//Resister 
    Register newUser;
    
    cout<<"Welcome back! please register:";
    
	cout<<"\nEnter your desired username:";
	cin>>newUser.username;
	
	cout<<"\nEnter user desired password:"; 
	cin>>newUser.password;
	
	cout<<"Sucessfully resistered your account , please login below."; 
	
	//Login
	
	Login newLogin;
	cout<<"\nUsername:";
    cin>>newLogin.inpUsername;
    
   cout<<"\nPassword:";
   cin>>newLogin.inpPassword;
   
   if(newLogin.inpUsername == newUser.username && newLogin.inpPassword == newUser.password)
   {
   cout<<"\nSucessfully logged in, loading your dashboard....!";
}
   else{
   	cout<<"loging failed please try again later";
   	
}
}
