#include <iostream>
using namespace std;

void printStars(int num, int limit)                         
{
        if (num >limit) return;              
        else{
        for (int q = 1; q <= num; q++)      
        {cout << "*";}
        cout << endl;

        printStars(num +1, limit);        

        for (int q = 1; q <= num; q++)      
        {cout << "*";} 

        cout << endl;
    } 

}




int main()
{        
    int number=5;  
    cin>>number;                                
    printStars(1, number);                                     

    return 0;
} // end of main 


//method2
// #include <iostream>
// using namespace std;

// void printStars(int num)                        
// {
//     if (num < 0) cout << endl << "Please enter a non negative number." << endl;

//         else{

//             if (num == 0) return;               

//             else{
            
//             printStars(num - 1);        

//             for (int q = 1; q <= num; q++)      
//             {cout << "*";} 

//             cout << endl;
//         } 
//     } 
// }

// int main()
// {
//     int number;                                             
//     cout << "Enter the number of lines in the grid: ";      

//     cin >> number;                                          
//     printStars(number);                                     
//     cout << endl << "Grid Pattern Complete - End of Program.";
//     return 0;
// } // end of main 

//  // end printStars