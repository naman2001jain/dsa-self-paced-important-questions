#include<iostream>
#include<vector>
using namespace std;

bool mycomp(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}

bool canbemerged(pair<int,int> p1,pair<int,int> p2){
    int maxLeft = max(p1.first,p2.first);
    return (p1.first<=maxLeft && maxLeft<=p1.second) ? true : false;
}



int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > arr(n);
    vector<pair<int,int> > res;
    
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    std::sort(arr.begin(),arr.end(),mycomp);//ignore the warning.........
    int i=0;
    while(i<n){
        if(res.size()==0){//is empty
            cout<<"size is empty..\n";
            res.push_back(make_pair(arr[i].first, arr[i].second));
            cout<<"result in 1st iteration: "<<res.back().first<<","<<res.back().second<<endl;
            i++;
            continue;
        }
        if(canbemerged(res.back(),arr[i])){
            res.back().first = min(arr[i].first,res.back().first);   
            res.back().second = max(arr[i].second,res.back().second);
        }else{
            res.push_back(make_pair(arr[i].first,arr[i].second));
        }
        i++;
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i].first<<","<<res[i].second<<endl;
    }
    

}   