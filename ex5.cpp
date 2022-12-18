#include<iostream>
#include<set>
using namespace std;

bool rechercher(int a,set<int> my_set){
if(my_set.find(a)==my_set.end()){
    return false;
}
else {
    return true;
}

}

int main(){
set<int>set_nombre;
for( int i=0 ; i<101;i++ ) {
set_nombre.insert(i);
}



for (auto it = *set_nombre.begin();it != *set_nombre.end(); it++ ) {
    cout<<it<<"-";
}

    return 0;
}
