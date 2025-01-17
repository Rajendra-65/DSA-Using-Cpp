#include <iostream>

using namespace std;

int main() {

    int size;
    int num;

    cout<<"Enter the Array Size:";
    std::cin>>size;

    int Arr[size][size];

    for(int i = 0 ; i< size ; i++){
        for(int j = 0 ; j < size ; j++){
            cout<<"Enter the value for position: "<<i<<j<<":";
            std::cin>>num;
            Arr[i][j] = num;
        }
    }

    for(int k = 0 ; k < size ; k++){
        for(int l = 0; l < size ; l++){
            cout<<Arr[k][l]<<"\t";
        }
        cout<<endl;
    }

    int m = 0;

    for(int m = 0 ; m <= size -3 ; m++){
        for(int n = 0 ; n <= size-3 ; n++){
            int temp[3][3];
            for(int i = m ; i < m + 3 ; i++){
                for(int j = n ; j < n + 3 ; j++){
                    // cout<<Arr[i][j]<<"\t";
                    temp[i][j] = Arr[m + i][n + j];
                }
            }
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << temp[i][j] << "\t";
                }
                cout << endl;
            }
            cout << "-----------------\n";
        }
    }

    return 0;
}

