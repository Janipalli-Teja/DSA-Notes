#include<iostream>
#include<vector>

using namespace std;

vector<int> pairsum(vector<int> &vec,int target){
    vector<int> vec1;
    int front=0;
    int back=vec.size()-1;
    while(front<back){
        int sum=0;
        sum=vec[front]+vec[back];
        if(sum<target){
            front++;
        }
        else if(sum>target)
        {
            back--;
        }
        else
        {
            vec1.push_back(front);
            vec1.push_back(back);
            return vec1;
        }
    }
    return vec1;
    
}
int main(){
    int target=13;
    vector<int> vec={1,2,5,12};

    vector<int> ans=pairsum(vec,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;

}