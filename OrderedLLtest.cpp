//Program to test the various operations on an ordered linked list
  
#include <iostream>
#include "orderedLinkedList.h"
 
using namespace std;
 
int main()
{
    orderedLinkedList<int> list1, list2;        
    int num; 

                                       

    cout << "Creating list with input 77 11 44 99 33 55" << endl ;

        list1.insertLast(77);                      
        list1.insertLast(11);
        list1.insertLast(44);
        list1.insertLast(99);        
        list1.insertLast(33);
        list1.insertLast(55);

    cout << endl;                               


    cout << "list1: ";                  
    list1.print();                             
    cout << endl;            
    
        
    list2 = list1; //test the assignment operator 

    cout << "list2: ";                 
    list2.print();                              
    cout << endl;                              

    cout << "Enter the number to be "
         << "deleted: ";                        
    cin >> num;                               
    cout << endl;                               

    list2.deleteNode(num);                     

    cout << "After deleting "
         << num << endl << "list2: " ;         
    list2.print();                              
    cout<<endl;  

cout << endl << "Output list1 " 
         << "using an iterator:" << endl;            

    linkedListIterator<int> it;                  

    for (it = list1.begin(); it != list1.end(); 
                             ++it)                  
        cout << *it << " ";                        
    cout << endl;

/*
====================================================
NEW TEST EXTENSION 11/17/19
====================================================
*/
    cout << "deleting smallest element from the list1" << endl;

    list1.deleteSmallest();

    cout << "list1: ";                  
    list1.print();                             
    cout << endl;   

    return 0;					
}



