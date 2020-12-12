#include <list>
#include <stdexcept>
#include <typeinfo>
#include <type_traits>
template<typename T>

class queue{
    private:
        std::list<T> stor;

    public:
        size_t size(){
            return this->stor.size();
        }

        void enqueue(T val){
            this->stor.push_back(val);
        } 

        void dequeue(){
            this->stor.pop_front();
        }

        int front(){
            if(this->empty()){
                throw std::logic_error("queue is empty");
            }
            return this->stor.front();
        }

        bool empty(){
            return this->stor.empty();
        }
};