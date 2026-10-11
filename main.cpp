#include <iostream>

int main() {
    std::cout << "Linux System Administration Toolkit" << std::endl;
        std::cout << "_________________________________________" << std::endl;
        std::cout << "                                         " << std::endl;  
    std::cout << "Version 1.0" << std::endl;
    std::cout << "1. System Information\n2. Disk Usage\n3. Memory Usage\n4. Running Processes\n5. Network Information\n6. Exit" << std::endl;
int choice;
    do {
    std::cout<< "choose an option " << std::endl;
    std::cin >> choice;
 if (choice == 6 ){
        std::cout << "Exiting Toolkit..." << std::endl;} 
     else if (choice ==1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 ){
       std::cout << "you selected option " << choice << std::endl;
      } else {
     std::cout << "Invalid choice. Please try again." << std::endl;
    }

} while (choice != 6);

 // if  (choice == 6) {
     //6
      //  std::cout << "Exiting Toolkit..." << std::endl;
    //} else if (choice ==1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 ){
      //  std::cout << "you selected option " << choice << std::endl;
   // } else {
      //  std::cout << "Invalid choice. Please try again." << std::endl;
   //}
    return 0;
    }
