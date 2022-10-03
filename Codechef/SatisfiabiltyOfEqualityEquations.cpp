#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int parent[26];
void initialize(){
   for(int i=0;i<26;i++){
    parent[i]=i;
 } 
}
int find(int x){
    if(parent[x]==x)
    return x;
    else
    return find(parent[x]);
}
void Union(int a, int b){
    int rep_a  = find(a);
    int rep_b  = find(b);
    if(rep_a==rep_b) return;
    parent[rep_b]=rep_a;

}
bool equationsPossible(vector<string>& equations) {
        for(auto e: equations){
            if(e[1]=='=')
            Union(e[0]-'a',e[3]-'a');
        }
        for(auto e: equations){
            if(e[1]=='!'){
                if(find(e[0]-'a')==find(e[3]-'a'))
                return false;
            }
        }
        return true;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<string>equations;
equations = {"a==b","b==c","b!=d","a==d"};
initialize();
cout<<equationsPossible(equations);

 

 return 0;
}