// Question 26 in the exercises --> https://shorturl.at/dqsz4
#include <iostream>

int main(){
    std::string str = "Vainqueur";
    int count = 0;
    int i = -1;
    while(true){
        i++;
        if(str[i] != '\0')
            count++;
        else
            break;
    }

    std::cout << "The String " << str << " is " << count << " Characters long\n";
}