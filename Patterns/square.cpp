#include<bits/stdc++.h>
using namespace std;

void square(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void lower(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"* "<<" ";
        }
        cout<<endl;
    }
}

void lowNum(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void lowNumsRow(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void upper(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pyramid(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        for(int j=0;j<5-i;j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void reversePyramid(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j<2*(5-i)-1;j++){
            cout<<"*";
        }

        for(int j=0;j<i;j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

int main(){
    pyramid();
    reversePyramid();
    return 0;
}