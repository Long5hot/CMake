

#include <iostream>
#include "dog.h"
#include "operations.h"
#include "log.h"

int main(){

	auto value = ((10 <=> 20) > 0);
	std::cout << std::boolalpha;

	std::cout << "Value : " << value << std::endl;

    double result = add(10,70);

    std::cout << "Result : " << result << std::endl;

    Dog dog1("Flitzy");
    dog1.print_info();
    
    log_data("Hello There", LogType::FATAL_ERROR);

    


    return 0;
}
