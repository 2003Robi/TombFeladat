#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int n,i,v[1000],j,aux;
    srand(time(NULL));
    cout<<"n= ";
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        v[i]=rand()%100;
        cout<<v[i]<<" ";
    }
    for (i=0; i< n-1; i++)
        {
            for (j=i+1; j< n; j++)
            {

                if ( v[i]> v[j])
                {
                    aux= v[j];
                    v[j]= v[i];
                    v[i]=aux;

                }

            }

        }
        cout<<endl;
        cout<<"masodik legnagyobb szam "<<v[i-2]<<endl;


    return 0;
}
