#include<iostream>
using namespace std;
int compare_triplets(int a[],int b[]){
    int scoreA = 0, scoreB = 0;
     for (int i=0;i<3;i++) {
       if (a[i] > b[i]) {
            scoreA++;
        } else if (a[i] < b[i]) {
            scoreB++;
        }
     }
    cout << scoreA << scoreB; 
    return 0;

}
int main(){
    int a[3],b[3];
    for(int i=0;i<3;i++){
    
        cin >> a[i]>>b[i];
        
    }
    compare_triplets(a,b);

}