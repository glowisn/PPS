// https://www.acmicpc.net/problem/2941
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  int count = 0;

  cin >> s;
  
  for(int i = 0; i < s.length() ;i++){

    if(s[i] == 'c' ){
      if(s[i+1] == '=' && s.length() >= i+1 ){
        i++;
      }else if(s[i+1] == '-' && s.length() >= i+1){
        i++;
      }
    }else if(s[i] == 'd'){
      if(s[i+1] == 'z' && s.length() >= i+1){
        if(s[i+2] == '=' && s.length() >= i+2){
          i++;i++;
          // cout << s[i-2] << s[i-1]  << s[i] << " detected, iter plused " << endl;
        }
      }else if(s[i+1] == '-' && s.length() >= i+1){
        i++;
      }
    }else if(s[i] == 'l'){
      if(s[i+1] == 'j' && s.length() >= i+1){
        i++;
      }
    }else if(s[i] == 'n'){
      if(s[i+1] == 'j' && s.length() >= i+1){
        i++;
      }
    }else if(s[i] =='s'){
      if(s[i+1] == '=' && s.length() >= i+1){
        i++;
      }
    }else if(s[i] == 'z'){
      if(s[i+1] == '=' && s.length() >= i+1){
        i++;
      }
    }else{
    }

    count++;
    // cout << s[i] << " here , count plus " << endl;
  }

cout << count;
}