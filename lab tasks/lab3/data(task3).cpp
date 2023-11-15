//ab
#include<iostream>
using namespace std;
class Arraybased{
    private:
    int *arr=0,length,*curr;
    public:
       Arraybased(int size){
        cout<<"Constructor is callesd:"<<endl;
        int* arr=new int[size];
        length=0;
       }
      void start(){
        curr=arr;

      }
      void next(){
        curr++;

      }
      void tail(){
        curr=arr+length-1;
      }
      void back(){
        curr--;
      }
      void insertAt(int val,int pos){
         tail();
         for(int i=length;i>=pos;i--){
            *(curr+1)=*curr;
            back();
         }
        *(curr+1)=val;
        length++;
      }
      void insert(int val,int size){
        start();
          if(length==size)
          {
            cout<<"list full!";
          }
          else
          {
            curr+=length;
            *curr=val;
            length++;
            cout<<"running:"<<endl;
          }
      }
      void printlist(){
        start();
        for(int i=0;i<length;i++){
            cout<<"Arrays element:"<<*curr++<<endl;
        }

      }
      bool searchele(int val){
          start();
          for(int i=1;i<=length;i++){
            if(*curr==val){
                cout<<"yes"<<endl;
                return true;
            }
            next();
          }
          return false;
      }
    //   void deleteele(int val,int length){
    //     start();
    //     for(int i=0;i<length;i++){
    //         if(*curr==val){
    //             delete (*curr);
    //         }
    //         next();
    //     }

    //   }
      void reverselist(int size){
        tail();
            for(int i=size;i>0;i--){
               cout<<"array in reverse :"<<*curr--<<endl;
         }
        }
    bool isfull(int size){
        if(length==size){
            cout<<"the array is full:"<<endl;
            return true;
        }
        else
            return false;


    }
    bool isempty(int size){
        if(length==0){
            cout<<"the array is empty:"<<endl;
            return true;
        }
        else
          return false;

    }
    void sort(int size){
        start();
	    for(int j=0;j<size;j++){
           for(int i=1; i<=size; i++){
             int temp;
              if(*(curr+i)>*(curr+j)){
               swap(*(curr+i),*(curr+j));

            }
     }
 }
      for(int i=0; i<size; i++){
        cout<<"decending order array:"<<*curr++<<endl;
      }
    
}

      ~Arraybased(){
        cout<<"destructor is called:"<<endl;
      }
};
int main(){

    int size;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    Arraybased obj(size);

    cout<<"2. void insert(x)"<<endl;
     cout<< "3. void insertAt(x)"<<endl;
                cout<<"4. void printList()"<<endl;
                cout<<"5. void searchElement(x)"<<endl;
                cout<<"6. void deleteElement(x)"<<endl;
                cout<<"7. void reverseList()"<<endl;
                cout<<"8. void sort()"<<endl;
                cout<<"9. bool isFull()"<<endl;
                cout<<"10. bool isEmpty()"<<endl;
                cout<<"11. void emptyList ( )"<<endl;
    int x;
    cout<<"Enter operation you want to do:";
    cin>>x;
    if(x==2){
        obj.insert(22,size);
        obj.insert(12,size);
        obj.insert(13,size);
        obj.insert(14,size);
        obj.insert(15,size);
        obj.insert(16,size);
        obj.insert(26,size);
        obj.insert(27,size);
        obj.insert(28,size);
        obj.insert(29,size);

    }
    else if(x==3){
        obj.insertAt(11,4);
    }
    else if(x==4){
        obj.printlist();
    }
    else if(x==5){
        obj.searchele(4);
    }
    // else if(x==6){
    //     obj.deleteele(5);
    // }
    else if(x==7){
        obj.reverselist(size);
    }
    else if(x==8){
        obj.sort(size);
    }
    else if(x==9){
        obj.isfull(size);
    }
    else if(x==10){
        obj.isempty(size);
    }
    // else if(x==11){
    //     obj.emptylist(arr);
    // }


}