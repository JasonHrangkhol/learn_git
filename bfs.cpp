/*        <<<<<.......O RENGPA NIH OMPUI ROH.NINIH.....>>>>>
<<<<<......OMPUI INCHU ETIN RENG THO THEI KITI...........>>>>>>     */
#include<bits/stdc++.h>
using namespace std;
/* <<<<<<< ..................>>>>>>>>> */
#define ll long long
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define pil pair<ll,ll>
#define fi first
#define sec second
#define lb lower_bound
#define ub upper_bound
#define vll vector<ll>
#define vect(v,n) vll v(n); rep(i,0,n) cin>>v[i];
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define endl '\n'
#define cases ll tc;cin>>tc;while(tc--)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/* <<<<<<<<<<<<.......................>>>>>>>> */
 
void fileio() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
#endif
}
void bfs(unordered_map<char,vector<char>>&m,unordered_map<char,bool>&visited,char src)
{
    queue<char>q;
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
        cout<<src<<" ";
        for(auto it:m[src])
        {
            if(visited[it]==false)
            {
                q.push(it);
                visited[it]=true;
            }
        }
        q.pop();
        src=q.front();        
    }
}
void solve(){
    int n,e;
    cin>>n>>e;
    unordered_map<char,vector<char>>m;
    unordered_map<char,bool>visited;
    char x,y;
    rep(i,0,e)
    {
        cin>>x>>y;
        m[x].pb(y);
        m[y].pb(x);
        visited[x]=false;
        visited[y]=false;
    }
    for(auto it:m)
    {
        if(visited[it.first]==false)
            bfs(m,visited,it.first);
    }        
}
int main()
{
    fastio;fileio();
    solve();
    return 0;
}