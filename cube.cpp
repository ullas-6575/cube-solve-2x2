#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define For(i, a, b) for (int i = a; i < b; i++)
#define all(v) v.begin(), v.end()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<string> cube = {"RRRR", "GGGG", "YYYY", "BBBB", "OOOO", "WWWW"};
    int op;
    int type;
    char ch;
    while(cin>>op){
        cin>>type>>ch;
        if(type==2){
            string temp;
            if(ch=='L'){
                temp=cube[0];
                cube[0]=cube[1];
                cube[1]=cube[2];
                cube[2]=cube[3];
                cube[3]=temp;
            }
            else if(ch=='R'){
                temp=cube[3];
                cube[3]=cube[2];
                cube[2]=cube[1];
                cube[1]=cube[0];
                cube[0]=temp;

            }
            else if(ch=='U'){
                temp=cube[0];
                cube[0]=cube[5];
                cube[5]=cube[2];
                cube[2]=cube[4];
                cube[4]=temp;
            }
            else {
                temp=cube[0];
                cube[0]=cube[4];
                cube[4]=cube[2];
                cube[2]=cube[5];
                cube[5]=temp;
            }
        }
        else {
             string temp;
            if(ch=='L'){
                temp=cube[0];
                cube[0][3]=cube[1][3];
                cube[0][2]=cube[1][2];
                cube[1][3]=cube[2][3];
                cube[1][2]=cube[2][2];
                cube[2][3]=cube[3][3];
                cube[2][2]=cube[3][2];
                cube[3][3]=temp[3];
                cube[3][2]=temp[2];
            }
            else if(ch=='R'){             



                 temp=cube[3];
                cube[3][2]=cube[2][2];
                cube[3][3]=cube[2][3];
                cube[2][2]=cube[1][2];
                cube[2][3]=cube[1][3];
                cube[1][2]=cube[0][2];
                cube[1][3]=cube[0][3];
                cube[0][2]=temp[2];
                cube[0][3]=temp[3];

            }
            else if(ch=='U'){
                temp=cube[0];
                cube[0][1]=cube[5][1];
                cube[0][3]=cube[5][3];
                cube[5][1]=cube[2][1];
                cube[5][3]=cube[2][3];
                cube[2][1]=cube[4][1];
                cube[2][3]=cube[4][3];
                cube[4][1]=temp[1];
                cube[4][3]=temp[3];
            }
            else {
                 temp=cube[0];
                cube[0][1]=cube[4][1];
                cube[0][3]=cube[4][3];
                cube[4][1]=cube[2][1];
                cube[4][3]=cube[2][3];
                cube[2][1]=cube[5][1];
                cube[2][3]=cube[5][3];
                cube[5][1]=temp[1];
                cube[5][3]=temp[3];
            }
        }
        cout<<cube[0][0]<<" "<<cube[0][1]<<"\n";
        cout<<cube[0][2]<<" "<<cube[0][3]<<"\n";
        cout<<"\n";
    }
    return 0;
}