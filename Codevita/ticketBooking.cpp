#include<iostream>
#include<vector>
#include<string>
using namespace std;
int count_(string str){
    int count=0;
    for(auto x:str){
        if(x=='_')
        count++;
    }
    return count;
}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int N;
     cin>>N;
     vector<int> Seats;
     string temp="";
     // vector<string> start_end[N];
     vector<string> v[N];
     //storing number of seats 
     for(int i=0;i<N;i++)
     {
        cin>>temp;
        v[i].push_back(temp);
        // if(temp[0]=='X')
        // start_end[i].push_back("X");
        // else if(temp[0]=='_')
        // start_end[i].push_back("_");
        // if(temp[temp.length()-1]=='X')
        // start_end[i].push_back("X");
        // else if(temp[temp.length()-1]=='_')
        // start_end[i].push_back("_");

        // start_end[i].push_back(temp[0]);
        Seats.push_back(count_(temp));
     }
     //storing number of groups in G
     cin>>temp;
     int ln=temp.length();
     vector<int> G;
     string s="",num="";
     for(int i=0;i<ln;i++){
        s=temp[i];
        if(s!=",")
        {
            num=num+s;
        }
        else{
        G.push_back(stoi(num));
        num="";
        }
     }
     G.push_back(stoi(num));
     // for(auto x:G){
     //     cout<<x<<" ";
     // }
    //storing ends here!
     int mid=0;
     if(G.size()%2==0)
     mid= (G.size()/2) + 1;
     else
     mid= (G.size()/2);

     //Sorting in Priority Queue
     vector<int>PQ;
     for(int i=mid;i<G.size();i++){
        PQ.push_back(G[i]);
     }
     for(int i=mid-1;i>=0;i--){
        PQ.push_back(G[i]);
     }
     //Sorting ends here!
     vector<string> res[N+1];
     int val=-1,p=-1,k=0;
     string test="";
     for(int i=0;i<PQ.size();i++)
     {
        p=i+1;
        val=PQ[i];
        for(int j=0;j<Seats.size();j++)
        {
            if(val<=Seats[j]){
            // cout<<j+1<<": "<<val<<": "<<p<<"\n";
            k=val;
            //         cout<<j-1;
            // test=to_string(p);
                while(k--){
                        test=to_string(p);

                    // cout<<to_string(p)<<"\n";
                    res[j].push_back(to_string(p));
                    // res[j-1].push_back("X");
                    // for(auto it=v[j].begin();it!=v[j].end();it++){
                    //     if(*it=="X")
                    //     *it="1";
                }

                // cout<<test<<"\n";
                // if(j==0)
                // res[j].push_back(test);
                // else if(j==1)
                // res[1].push_back(test);
                // else if(j==2)
                // res[2].push_back(test);

             test="";
             Seats[j]-=val;
             break;
            }
        }
     }
     char t=' ';
        for(int i=0;i<N;i++){
            int j=0;
            // cout<<v[i][0][1];
            // for(auto t=v[i].begin();t!=v[i].end();t++){
            for(auto it=res[i].begin();it!=res[i].end();it++){
            t=v[i][0][j];
                // cout<<*it<<" ";
                // if(it==res[i].end()-1)

            //     if(t=='_'){
            //         cout<<*it;
            //         j++;
            //     }
                if(t=='X')
                {
                    cout<<t;
                }
                    cout<<*it;
                    j++;
                //     t=t+2;
            }
            cout<<"\n";
        }
    

        // for(int i=0;i<N;i++){
        //     for(auto t=v[i].begin();t!=v[i].end();t++){
        //     cout<<*t;
        // }
        // cout<<"\n";
    

    // if(res.empty())
    //     cout<<"Yes";
    // else
    //     cout<<"No";
    

 return 0;
}