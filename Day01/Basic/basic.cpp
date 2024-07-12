#include<bits/stdc++.h>
using namespace std;

int TotalSum(int num1,int num2){
   return (num1+num2);
}

int max(int num1,int num2){
    if(num1 > num2){
     return(num1);
    }
    else{
        return(num2);
    }
}

int main(){
// cout <<"Welcome back abhishek to dsa world"<<endl<<"Now this time you will complete it"<<endl;



// int num1, num2;
// int avg;

// cout<<"Enter the number1 and number 2"<<endl;
// cin>>num1>>num2;

// avg = (num1+num2)/2;

// cout<<"Averge of two number is : "<<avg<<endl;

// cout<<"for storing largre number we use long long"<<endl;
// long long y = 342343535345;
// cout<<y;


// //string and getline*********************
// string s1,s2;
// cin>>s1>>s2;
// cout<<s1<<" "<<s2<<endl;

// string str;
// getline(cin,str);
// cout<<str<<endl;


// char ch = 'g';
// cout<<ch<<endl;


//ranges of data types
// int -> -10^9 to 10^9
// long -> -10^12 to 10^12
// long long -> -10^18 to 10^18 

// if-else statemment***************

//check for adult or not;

// int age;
// cout<<"Enter the age"<<endl;
// cin>>age;

// if(age >= 18){
//     cout<<"Congrats you are in adult stage"<<endl;
// }
// else{
//     cout<<"You are not in adult states"<<endl;
// }

//check for greter between threee numbers

// int num1,num2,num3;
// cout<<"Enter the number of num1 and num2, num3"<<endl;
// cin>>num1>>num2>>num3;

// if(num1>num2 && num1>num3){
//     cout<<"greater number is : "<<num1;
// }
// else if(num2 > num3){
//     cout<<"Grater number is "<<num2;
// }
// else{
//     cout<<"Grater number is "<<num3;
// }

//grade system;

// int marks;
// cout<<"Enter the marks you obtained in the exam to check your grade"<<endl;
// cin>>marks;

// if(marks < 25){
//     cout<<"F";
// }
// else if(marks <= 40){
//     cout<<"E";
// }
// else if(marks <= 50){
//       cout<<"D";
// }
// else if(marks <= 60){
//     cout<<"C";
// }
// else if(marks  <= 80){
//     cout<<"B";
// }
// else if(marks<=100){
//     cout<<"A";
// }


//switch::************

// int DayNum;
// cin>>DayNum;

// switch (DayNum)
// {
// case 1:
// cout<<"Monday";
//     break;
// case 2:
// cout<<"Tuesday";
//     break;
// case 3:
// cout<<"Wednesday";
//     break;
// case 4:
// cout<<"thrusday";
//     break;
// case 5:
// cout<<"Friday";
//     break;
// case 6:
// cout<<"Saturday";
//     break;
// case 7:
// cout<<"Sunday";
// break;

// default:
// cout<<"Invalid input";
// }

//Array and string*******

// int arr[4];
// cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

// arr[3] += 10;
// cout<<arr[3];

//in 2D array
// int arr[3][4];

// arr[1][3] = 78;

// cout<< arr[1][3];

//string
// string str = "abhjishek";
// cout<<str.size();
// str[str.size()-1] = '4';
// cout<<str;


//foor loops and while loops::
// for(int i=1;i<10;i += 2){ 
//   cout<<i<<" ";
// }

// while*****
// int i=1;
// while (i<10)
// {
//     cout<<i<<" ";
//     i++;
// }

// int i=1;
// do
// {
//     cout<<i<<" ";
//     i++;
// } while (i>10);
// cout<<i;

// ****function

int num1= 23;
int num2  = 34;

int sum  =  TotalSum(num1,num2);
cout<<"Sum using function is"<<num1<<" "<<num2<<" sum is"<<sum;

int maxValue = max(num1,num2);
cout<<"Maximum value is "<<" "<<maxValue;

return  0;
}
