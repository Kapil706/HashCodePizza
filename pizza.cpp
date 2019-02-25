#include<fstream>
#include<iostream>
using namespace std;

int r,c,l,h; //l = ingredient, h = max cells
char arr[1000][1000];

// void createSlice(){

// }

// bool isMinimumIngridient(){

// }

void input(){
    bool firstline=true;

    ifstream infile;
    infile.open("input.in");

    ofstream output("output.out");

    while(infile){
        if(firstline){
        infile>>r>>c>>l>>h;
        firstline = false;
        }
        else{
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    infile>>arr[i][j];
                }
            }
            
        }
    }
    // cout<<r<<c<<l<<h;
    // cout<<endl;



    //     for(int i=0; i<r; i++){
    //             for(int j=0; j<c; j++){
    //                 cout<<arr[i][j];
    //             }
    //             cout<<endl;
    //         }
}



int main(){

    input();


}