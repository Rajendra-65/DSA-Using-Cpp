#include <iostream>

using namespace std;

int main () {
    string stringList[3] = {"ab","ab","abc"};
    string queries[3] = {"ab","abc","bc"};
    int count  = 0;
    int result[3];
    for (int i = 0 ; i < 3 ; i++) {
        count = 0;
        for(int j = 0 ; j < 3 ; j++){
            if (queries[i]!=stringList[j]){
                
            }else{
                count+=1;
            }
        }
        result[i] = count;
    }
    for(int i = 0 ; i < 3 ; i++){
        cout<<result[i];
    }
    return 0;
}