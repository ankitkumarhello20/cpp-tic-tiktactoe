#include <iostream>
using namespace std;

class tiktok{
    public:
    int count,m=0;
    char o;
    char a1='1',a2='2',a3='3';
    char b1='4',b2='5',b3='6';
    char c1='7',c2='8',c3='9';
    void takeinput();
    void update(int n);
    void print();
    void winnerend();
};
void tiktok::takeinput(){
    cin>>o;
}
void tiktok::winnerend(){
   if(m==0) 
 {  if(a1==b1&&b1==c1)
    {printf("player with %c wins",a1);
   
        count=1;
    }
   if(a1==a2&&a2==a3)
    {printf("player with %c wins",a1);
    
        count=1;
    }
    if(a1==b2&&b2==c3)
    {printf("player with %c wins",a1);

        count=1;
    }
    if(b1==b2&&b2==b3)
    {printf("player with %c wins",b1);
   
        count=1;
    }
    if(c1==c2&&c2==c3)
    {printf("player with %c wins",c1);
    
        count=1;
    }    
    if(a3==b2&&b2==c1)
    {printf("player with %c wins",a3);
    
        count =1;
    }
 }    
   if(count==1)
    {
        exit(0);
    }
   
}

void tiktok::print(){
    
            printf("%c %c %c\n%c %c %c\n%c %c %c\n",a1,a2,a3,b1,b2,b3,c1,c2,c3);
       
   
}
void tiktok::update(int n){
    switch(n){
        case 1: { 
                  if(o=='O')
                   {
                       a1='O';
                   }
                  else if(o=='X')
                   { 
                       a1='X';
                   }
                break;
                }
        case 2: {  
                   if(o=='O')
                   { a2='O';
                    
                   }
                   else if(o=='X')
                   { a2='X';
                   
                   }
                break;
                }
        case 3: {if(o=='O')
                a3='O';
               else if(o=='X')
                a3='X';
                break;}
        case 4: {if(o=='O')
                b1='O';
               else if(o=='X')
                b1='X';}
                break;
        case 5: {  
                   if(o=='O')
                   { b2='O';
                    
                   }
                  else if(o=='X')
                   { b2='X';
                    
                   }
                break;
                }
        case 6: {if(o=='O')
                b3='O';
                else if(o=='X')
                b3='X';
                break;}
        case 7: {if(o=='O')
                c1='O';
                else if(o=='X')
                c1='X';
                break;}
        case 8: {if(o=='O')
                c2='O';
                else if(o=='X')
                c2='X'; 
                break;}
        case 9: {if(o=='O')
                c3='O';
                else if(o=='X')
                c3='X';
                break;}
        
    }
}

int main(){
    int n;
    
    tiktok hi;
    hi.print();
    for(int i=0;i<10;i++){
    printf("enter position 1 to 9 and O for zero and X for cross \n");
    cin>>n;
    hi.takeinput();
    hi.update(n);
    hi.print();
    hi.winnerend();
    }
    printf("noone wins draw");
    return 0;
    
}
