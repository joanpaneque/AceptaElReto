// Joan Paneque

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos, l;
    cin>>casos;
    while(casos--)
    {
        int c1=0,c2=0,c3=0;
        cin>>c1>>c2>>c3;
        string aux="";
        cin>>aux;
        l = aux.length();
        for(int i=0;i<l;i++)
        {
                switch(aux[i])
            {
                case 'M': c1--; break;
                case 'A': c2--; break;
                case 'C': c3--;  break;
                case 'R': c1--;c2--; break;
                case 'N': c2--;c3--;c1--; break;
                case 'V': c2--;c3--; break;
                case 'L': c1--;c3--; break;
                case 'B': break;
            }
        }           
                  if(c1<0||c2<0||c3<0)
                      cout<<"NO"<<"\n";
                  else
                      cout<<"SI"<<" "<<c1<<" "<<c2<<" "<<c3<<"\n";
    }       
    return 0;
}