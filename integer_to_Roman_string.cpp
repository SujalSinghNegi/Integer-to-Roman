//24-06-2024, Author- Sujal Singh Negi, topic - Integer to RomanLetters
#include<bits/stdc++.h>
using namespace std;
string intToRoman(int num);

int main(){
    int num;
    cin>>num;
    cout<<intToRoman(num)<<endl;


return 0;
}

    string intToRoman(int num) {
        string s;
        int c=0;
        while(num){
            c++;
            int x=num%10;
            if(x==4){
                if(c==1) s+="VI";
                else if(c==2) s+="LX";
                else if(c==3) s+="DC";
            }else if(x==9){
                if(c==1) s+="XI";
                else if(c==2) s+="CX";
                else if(c==3) s+="MC";
            }else{
                if(x>4){
                    if(c==1){
                         
                        for(int i=6; i<=x; i++) s+='I';
                        s+="V";
                    }
                       
                else if(c==2){
                    
                   
                     for(int i=6; i<=x; i++) s+='X';
                     s+="L";
                } 
                else if(c==3){            
                     for(int i=6; i<=x; i++) s+='C';
                    s+="D";
                }
                   
                }else{
                      if(c==1){
                     
                        for(int i=1; i<=x; i++) s+='I';
                    }
                       
                else if(c==2){
                        
                     for(int i=1; i<=x; i++) s+='X';
                } 
                else if(c==3){
                                    
                     for(int i=1; i<=x; i++) s+='C';
                }else{
                     for(int i=1; i<=x; i++) s+='M';
                }
                }
            }
            
            num/=10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
