//In the field of programming, Iteration Statements are helpful when we need a specific task in repetition.
//They are essential as they reduce hours of work to seconds. An iteration is a sequence of instructions that is continually repeated until a certain condition is reached.
//As per given statement you need to implement the task using iterations.
//A number is said to be valid if it is divisible by 8. Develop a logic that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers.
#include<iostream>
using namespace std;
class valid{
 int num, count = 0;
 public:
 valid(){
 for(int i = 0;;i++){
 cout << "Enter number " << endl;
 cin >> num;
 if(num%8 == 0){
 count++;
 }
 else{
 break;
 }
 }
 cout << "Total " << count << " numbers are valid numbers."<< endl;
 }
};
int main(){
valid obj;
return 0;
}