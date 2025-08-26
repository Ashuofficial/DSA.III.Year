// 21] Write a function that takes input as a String. It should return true
// if all characters in the
// string are unique, false otherwise. You cannot use additional data
// structure. (a-z and 1-9. No
// Unicode/Special character/Uppercase characters)

#include <iostream>
using namespace std;

bool uniqueCharacters(string str){
    int arr[128]={0};
    for(char ch: str){
        if(arr[(int)ch]>0){
            return false;
        }
        arr[(int)ch]++;
    }
    return true;


}

int main() {
    // Your code here
    string str;
    cout<<"Enter the string to check if it has unique characters or not :";
    cin>>str;

    if(uniqueCharacters(str)){
        cout<<"Characters are unique"<<endl;
    }else{
        cout<<"Not a unique characters"<<endl;
    }


    return 0;
}