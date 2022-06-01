#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Student.h"
TEST_CASE( "Arguments initialized") {
    Student s;
    set_student(s, "Stepan", 5, 4, 4);
    
    REQUIRE(get_surname(s)  == "Stepan");
    REQUIRE(get_programming(s)  == 5);
}
