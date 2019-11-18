/*
    Name: Graham Atlee
    Course: csc1720
    Date: 11/18/2019

    Program to test the various operations on an unordered linked list
*/  
#include <iostream>
#include "unorderedLinkedList.h"

using namespace std; 

int main()
{
    unorderedLinkedList<int> listA, listB;          
    int num;

   
    cout << "Creating list with input 22 7 48 93 14 2 " << endl ;

        listA.insertLast(22);                      
        listA.insertLast(7);
        listA.insertLast(48);
        listA.insertLast(93);        
        listA.insertLast(14);
        listA.insertLast(2);
        
    cout << endl;
                       
    cout << "Length of listA: " 
         << listA.length() << endl;                 

    listB = listA;	   //test the assignment operator 

    cout << endl << "listB: ";                     
    listB.print();                                  
    cout << endl;                                   
    cout << "Length of listB: " 
         << listB.length() << endl;                 

    cout << endl << "Enter the number to be "
         << "deleted: ";                           
    cin >> num;                                     
    cout << endl;                                   

    listB.deleteNode(num);                          
	
    cout << "After deleting " << num 
         << endl << "listB: " ;                     
    listB.print();                                  
    cout << endl;                                

    cout << "Length of listB: " 
         << listB.length() << endl;              

    cout << endl << "Output listA " 
         << "using an iterator:" << endl;            

    linkedListIterator<int> it;                  

    for (it = listA.begin(); it != listA.end(); 
                             ++it)                  
        cout << *it << " ";                        
    cout << endl;   

/*
===============================================
NEW TEST EXTENSION 11/17/19
===============================================
*/                                

    cout << "Deleting smallest item in listA" << endl;

    listA.deleteSmallest();                                        
                                   

    cout << "listA: ";                      
    listA.print();                                  
    cout << endl;  

    
    cout << "printing listA in reverse order" << endl;
    listA.printReverse(listA.getFront());
    cout << endl;

    cout << "creating listC of characters" << endl;
    unorderedLinkedList<char> listC;

    cout << "Insert random letters k, j, r, e, p" << endl;
    listC.insertLast('k');
    listC.insertLast('j');
    listC.insertLast('r');   
    listC.insertLast('e');
    listC.insertLast('p');

    cout << "listC: "; 
    listC.print();
    cout << endl;


    return 0;					
}



