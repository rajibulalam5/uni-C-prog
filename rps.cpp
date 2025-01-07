#include<iostream>
#include<string>
using namespace std;

main(){
string rock, paper, scissors,choice1,choice2;
cout <<"enter your choice"<<endl;
cin>>choice1;
cout<<"\n\nplayer 2 enter your choice"<<endl;
cin>>choice2;
if(choice1=="rock"&&choice2=="paper"){
    cout<<"\n\nplayer 2 win"<<endl;
}else if(choice1=="paper"&& choice2=="rock"){
    cout<<"\n\nplayer 1 win"<<endl;
}else if(choice1=="scissors"&& choice2=="paper"){
    cout<<"\n\nplayer one win"<<endl;
}else if(choice1=="paper"&&choice2=="scissors"){
    cout<<"\n\nplayer one win"<<endl;
}else if (choice1=="scissors"&&choice2=="rock"){
    cout<<"\n\nplayer 2 win"<<endl;
}else if(choice2=="scissors"&&choice1=="rock"){
    cout<<"\n\nplayer 1 win"<<endl;
}else if(choice1==choice2){
    cout<<"\n\nboth input is same try again"<<endl;
}else
{cout<<"\ninvalid"<<endl;}
return 0;
}