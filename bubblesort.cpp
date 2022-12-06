#include <vector>
#include <algorithm> //This library give us some handy function swap
#include <iostream>
#include <random>

// This is a function to create random number between 1 and 10
static int random_int(){
    static std::random_device rd;
    static std::mt19937 prng{ rd() };
    static std::uniform_int_distribution<> d10{1, 10};
    return d10(prng);
}


template<class T>
class SortableVector{
    //By default element define in classes are private so no need to specify
    std::vector<T> v_;
public:
    //You dont need to specify constructor
    //Also, you dont need to specify destructor.
    //This is because the default constructor and destructor are ok.
    //The default constructor use item to item copy. In this case it's gonna copy the vector val_ wich is ok.
    //For the destructor, we don't need to do anything

    //Usually you use const T& to avoid copy
    void push_back(const T& val){
        v_.push_back(val);
    }

    //Here i don't really know what u want to do.
    //Do you want to sort your inner vector and return it ?
    //Or do you want to make a copy and return it ?

    //Let's make a static method so it helps us covering both cases.
    //This method is static so it can be used outside of an instance.
    //It's like a function that is define inside the scope of this class.
    static void bubble_sort(std::vector<T>& v){
        //Using the correct type is always better.
        //In this case it's the type that define the size of this particular vector is :
        size_t size = v.size();//Or with c++11 : auto size = v.size()
        bool change;
        do{
            change = false;
            for(int i = 0; i < size - 1; ++i){
                if(v[i-1] > v[i]){
                    std::swap(v[i-1],v[i]);
                    change = true;
                }
            }
        }
        while(change);
    }

    //This is the method version using the static one.
    std::vector<T>& bubble_sort(){
        bubble_sort(v_);
        return v_;
    }
};
int main() {
    SortableVector<int> ss;
    for(int k = 0; k < 10; ++k){
        ss.push_back(random_int());
    }
    for(auto& elem : ss.bubble_sort()){//C++ 11 foreach
        std::cout << elem << std::endl;
        return 0;
    }
}