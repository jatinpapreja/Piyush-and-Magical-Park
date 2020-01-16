#include<iostream>
using namespace std;
int main()
{
    int n,m,min_strength,strength;
    cin>>n>>m>>min_strength>>strength;
    cin.get();
    char s[n][2*m];
    for(int i=0; i<n; i++)
    {
        cin.getline(s[i],2*m);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*m-1; j=j+2)
        {
            if(strength<min_strength)
            {
                cout<<"No";
                return 0;
            }
            if(j>0)

            {
                if(s[i][j]=='.')
                    strength -= 3;
                else if(s[i][j]=='*')
                {
                    strength +=4;
                }
                else
                {
                    strength--;
                    break;
                }
            }
            else
            {
                if(s[i][j]=='.')
                    strength -= 2;
                else if(s[i][j]=='*')
                {
                    strength +=5;
                }
                else
                {
                    strength--;
                    break;
                }
            }
        }
    }
        if(strength>=min_strength)
            {cout<<"Yes"<<endl;
            cout<<strength;}

        else
            cout<<"No";
        cout<<endl;
        return 0;
    }
