#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int m;cin>>m;

    vector<vector<pair<int,int> > > v;
    for(int i=0;i<=n;i++){
        vector<pair<int,int> > tmp;
        v.push_back(tmp);
    }

    for(int i=0;i<m;i++){
        int p,q,r;
        cin>>p>>q>>r;
        v[q].push_back(make_pair(p,r));
    }

    int dis1[n+1];
    int dis2[n+1];
    int bf[n+1];
    int lt[n+1];
    memset(bf,0,sizeof(bf));
    memset(lt,0,sizeof(lt));
    memset(dis1,0,sizeof(dis1));
    memset(dis2,0,sizeof(dis2));

    dis1[1]=1;
    dis2[1]=1;

    for(int i=0;i<n;i++){
        for(int j=2;j<=n;j++){
            if(dis1[j]==0&&dis2[j]==0){
                int judge=0;
                for(int k=0;k<v[j].size();k++){
                    if(dis1[v[j][k].first]==0){judge=1;break;}
                }
                if(judge==1){
                    continue;
                }
                int mi=INT_MAX;
                int mx=-1;
                for(int k=0;k<v[j].size();k++){
                    if(mi>dis1[v[j][k].first]+v[j][k].second){
                        bf[j]=v[j][k].first;
                        mi=dis1[v[j][k].first]+v[j][k].second;
                    }
                    if(mx<dis2[v[j][k].first]+v[j][k].second){
                        lt[j]=v[j][k].first;
                        mx=dis2[v[j][k].first]+v[j][k].second;
                    }
                }
                dis1[j]=mi;dis2[j]=mx;
            }
        }
    }

    int mx=0;
    int c;
    for(int i=1;i<=n;i++){
        cout<<i<<' '<<dis1[i]<<' '<<dis2[i]<<' '<<dis2[i]-dis1[i]<<endl;
        if(mx<dis1[i]){
            mx=dis1[i];
            c=i;
        }
    }
    int now=c;
    while(now!=0){
        cout<<now<<"->";
        now=bf[now];
    }
    
    
}


/*
17 25
1 2 1
1 3 7
1 4 10
1 5 2
1 6 4
2 7 5
3 7 2
4 7 4
4 8 5
5 8 6
6 8 7
7 9 3
7 10 9
8 7 1
10 11 5
9 15 10
11 15 2
8 12 9
8 13 3
12 14 4
13 14 7
14 15 10
15 16 9
14 17 4
17 16 2
*/