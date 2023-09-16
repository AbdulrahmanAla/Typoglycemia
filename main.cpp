#include<iostream>
#include<string>
using std::cin , std::cout, std::endl , std::string;



int main() {
   string input;
   int num_of_words=1;
   while (getline(cin, input)){
      
      long unsigned int counter=0;
      int old_counter=0;
      
      while ((input.find(' ', counter) != string::npos) ) {
         if ( counter < input.size() ) {
            counter =input.find(' ', counter);
            int temp = counter-2;

            //print the first letter
            if ((input.at(old_counter+1)) != ' '){
               cout << input.at(old_counter);
            }
            //cout << input.at(old_counter);
            
            for (int i =old_counter; i <temp ;temp-- ) {
               cout << input.at(temp);
            }

            
            if (num_of_words >9){
               cout << input.at(counter-1);
            }
            else{
               cout << input.at(counter-1) << ' ';
            }

            
            
            old_counter = counter+1;
            counter++;
            num_of_words++;
            if (num_of_words >10) {
               cout <<endl;
               num_of_words=1;
               }
         }
         if (!(input.find(' ', counter) != string::npos)&& (counter < input.size())) {
            old_counter= counter;
            counter= ((input.size())-1);
            long unsigned int temp = counter-1;

            cout<< input.at(old_counter);
            for (long unsigned int i=old_counter; i < temp; temp--) {
               cout <<input.at(temp);
            }
            cout <<  input.at(counter) <<' ';
            num_of_words++;


         }
         

      
         

            
      }
      
        
 
      
   }
   
   




   
}
