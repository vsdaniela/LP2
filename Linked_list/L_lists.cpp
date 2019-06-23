#include <iostream>

template <class T>
class linked_list
{
    struct node
    {
        T dato;
        node * p_next;
        node(const T & d, node * n1=nullptr){
            dato=d;
            p_next=n1;
        }
    };
    private:
        node * p_head;
	node * p_cola;
    public:
	class iterator
	{
		private:
			node* n;
		public:
			iterator(node * n_= nullptr){
				n=n_;
			}
			T & operator * (){
				return n->dato;			
			}
			iterator & operator ++(){
				n=n->p_next;
				return *this;			
			}
			/*iterator & operator --(){
				n=n->p_next;
				return *this;			
			}*/
			bool operator != (const iterator & it){
				return n!=it.n;			
			}
			~iterator()=default;			
	};
    public:
        linked_list(): p_head(nullptr),p_cola(nullptr){
        }
        ~linked_list(){
            node * del= p_head;
	    node * del2= p_cola;
            while(del){
                p_head=del->p_next;
                delete del;
                del=p_head;
            }
            while(del2){
                p_cola=del2->p_next;
                delete del2;
                del2=p_cola;
            }
        }
        void push_back(const T& d){
	    node* tmp=new node(d);
	    if(!p_head) p_head=p_cola=tmp;
            p_head->p_next=tmp;
	    p_head=tmp;
        }
	void push_front(const T& d){
	    node* tmp=new node(d);
	    if(!p_head) p_head=p_cola=tmp;
	    else{
		tmp->p_next=p_cola;
		p_cola=tmp;
	    }
        }
        void remove_front(){
            if(!p_cola) return;
            node * del= p_cola;
            p_cola=p_cola->p_next;
            delete del;
        }
        void remove_back(){
            if(!p_head) return;
            node * del= p_head;
            p_head=p_head->p_next;
            delete del;
        }
	iterator begin(){
		return iterator(p_cola);	
	}
	iterator end(){
		return iterator(nullptr);		
	}
};
int main()
{
    linked_list <int> li;
    li.push_front(14);
    li.push_front(23);
    li.push_front(212);
    li.push_front(45);
    for(linked_list<int>::iterator it=li.begin();it!=li.end();++it){
	std::cout<<*it<<std::endl;
    }

    return 0;
}
