#include<iostream>
using namespace std;

// class nokta {
//     public:
//         int x,y;

//         nokta(){
//             x = 5; y = 9;
//         }

//         void goster(){
//             cout << " X: " << x << " Y: " << y << endl;
//         }
// };

// int main(){
//     nokta k1;
//     k1.goster();
//     k1.x = 10; k1.y = 20;
//     k1.goster();
// }

class nokta {
    private:
        int x,y;
    public:
        nokta(){
            x = 5; y = 9;
        }
        nokta(int a, int b){
            if(x<0 or y<0){
                x = 0; y = 0;
            }
            else{
                //cout << "0'dan buyuk bir deger girin ."<< endl;
                x = a; y = b;
            }
        }

        void goster(){
            cout << " X: " << x << " Y: " << y << endl;
        }
};

int main(){
    nokta k1, k2(-11,22);
    k1.goster();
    k2.goster();
}