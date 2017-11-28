#include <iostream>
#include <vector>

using namespace std;
int main(){
    int e,v;
    cin >> e >> v;
    int tbl[e][e];
    for(int i=0;i<e;i++)
    {
        for (int j=0;j<e;j++)
        {
            tbl[i][j] = -1;
        }
    }
    for(int i=0;i<v;i++)
    {
        int s,f,w;
        cin >> s >> f >> w;
        if(w<tbl[s][f] || tbl[s][f]==-1)
        {
            tbl[s][f]=w;
            tbl[f][s]=w;
        }
    }
}
