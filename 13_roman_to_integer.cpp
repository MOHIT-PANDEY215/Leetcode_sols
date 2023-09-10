#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int number=0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='I'){
                if(i==s.length()-1)
            number+=1;
            else if(s[i+1]=='V'||s[i+1]=='X')
            number-=1;
            else number++;
            }
            else if(s[i]=='V')
            number+=5;
            else if(s[i]=='X'){
                if(i==s.length()-1)
                    number+=10;
                else if(s[i+1]=='L'||s[i+1]=='C')
                number-=10;
                else number+=10;
            }
            else if(s[i]=='L')
            number+=50;
            else if(s[i]=='C'){
                if(i==s.length()-1)
                    number+=100;
                else if(s[i+1]=='D'||s[i+1]=='M')
                number-=100;
                else number+=100;
            }
            
            else if(s[i]=='D')
            number+=500;
            else if(s[i]=='M')
            number+=1000;
            
        }
        cout<<number<<" ";

        return 0;
}