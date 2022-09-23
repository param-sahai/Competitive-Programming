#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}
   
void sort(map<string, int>& M)
{

    vector<pair<string, int> > A;

    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 int T;
 cin>>T;
 int t=T;
 while(T--){
    int N=0; //No of fabrics
    cin>>N;
    string C[N]; //Color
    int D[N]; //Durability
    int U[N]; //UniqueID4
    multimap<string, int>col;
    multimap<int, int>dur;
    for(int i=0;i<N;i++){
        cin>>C[i]>>D[i]>>U[i];
        col.insert(pair<string,int>(C[i],U[i]));    
        dur.insert(pair<int,int>(D[i],U[i]));    
    }
    // sort(col.begin(),col.end());
    // sort(dur.begin(),dur.end());
    // for(int i=0;i<N;i++){
    //     if(col[C[i]]==dur[D[i]])
    // }
    auto itr1 = col.begin();
    auto itr2 = dur.begin();
    int count=0;
    while(itr1!=col.end()){
        if(itr1->second == itr2->second)
        count++;
        itr1++;
        itr2++;
    }
    cout<<"Case #"<<(t-T)<<": "<<count<<"\n";
 }
 return 0;
}