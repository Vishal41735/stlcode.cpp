#include<iostream>
#include<vector>
#include<deque>
#include<array>
#include<map>
#include<set>
using namespace std;
int main(){

    // Fifth... now we leanr about STL map----------->>>>>>>>>>>>>>
        map<int, string> m;
        m[1] = "vishal";
        m[2] = "Sharma";
        m[3] = "vaisnavi";
        m[4] = "sharma";

        for(auto val: m){
            cout<<val.first<<endl;
            cout<<val.second<<endl;
        }

        cout<<"finding 13  :"<<m.count(13)<<endl;
        m.erase(4);
        for(auto val : m){
            cout<<val.first<<" "<<val.second<<" "<<endl;
        }






}
    // -----------------------------------------------------------------
    // fourth... we talk about  Set stl;
    // In sets all element are unique
    // In No midification is allow
    // how to defined set?????
//     set<int> s;
//     s.insert(100);
//     s.insert(200);
//     s.insert(300);
//     s.insert(100);
//     for(int i = 0; i<s.size(); i++){
//         cout<<  i <<" ";
//     }
     


// }

    // --------------------------------------------------------------------
        // third.. we learn about Deque stl
        // int deque both insertion and deletion posible from both side
        // ---this is also known as dynamic array
        // In the deque random access possible

//         deque<int> d;
//         d.push_back(100);
//         d.push_back(200);
//         d.push_back(300);
//         for(int i = 0; i<d.size(); i++){
//             cout<<d[i]<<" ";

//         }
//         d.pop_back();
//          for(int i = 0; i<d.size(); i++){
//             cout<<d[i]<<" ";
//          }

//          cout<<d.size();
//          cout<<endl;
//          cout<<d.empty();
//          cout<<endl;
//          cout<<d.front()<<endl;
//          cout<<d.back()<<endl;

// }

// ----------------------------------------------------------------------------
        // Second.  we learn about STL Vector
        // vector<int> v {1,2,3,4,5,6,7,8,9};
        // for(int i = 0; i<v.size(); i++){
        //     cout<<v[i]<<" ";

        // }

        //     vector<int> v;
        //     v.push_back(100);
        //     v.push_back(200);
        //     v.push_back(300);
        //     v.push_back(400);
            
        //     for(int i = 0; i<v.size(); i++){
        //         cout<<v[i]<<" ";// this is for printing vector element
        //     }
        //     cout<<endl;
        //      v.pop_back(); // this is for removing element from vector  
        //     for(int i = 0; i<v.size(); i++){
        //         cout<<v[i]<<" ";
        //         cout<<endl;
        //     }
        //     cout<<"Size of the array  is :  "<<v.size();
        //     cout<<endl;
        //     cout<<"Capacity of the array is :  "<<v.capacity();
        //     cout<<endl;

        //     cout<<"front Element of this vector is  :  "<<v.front();
        //     cout<<endl;

        //     cout<<"back Element of the array is  :  "<<v.back();
        //     cout<<endl;


        // }


    // -------------------------------------------------------------------------------

    // first.  we learn about STL array:::
    // libraries inclide krnin hoti  hai -->> #include<array> 
    // int arr[] = {1,2,5,6,3}; this is normal array..



    // .......>>>this is my stl array........<<<<<<<<
    //   array<int,4> a = {1,2,3,4}; 
    //   int size = a.size();
    //   for(int i  = 0; i<size; i++){
    //     cout<<a[i]<<" ";

    //     cout<<"Element at second index :  "<<a.at(2)<<endl;
    //     cout<<"Empty or not : "<<a.empty()<<endl;
    //     cout<<"first element of this array  :  "<<a.front()<<endl;
    //     cout<<"last elemnt of this array  is  :  "<<a.back()<<endl;




    