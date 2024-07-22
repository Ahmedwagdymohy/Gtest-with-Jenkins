cmake_minimum_required(VERSION 3.0)     #specfing the minimum version of cmake



project(MyProject)                          #specfing the project name





# Specify the path to Google Test
set(GTEST_ROOT "C:/googletest")

# Include the Google Test directory
include_directories(${GTEST_ROOT}/googletest/include)
include_directories(${GTEST_ROOT}/googlemock/include)

# Link the Google Test libraries
link_directories(${GTEST_ROOT}/build/lib/Release)









#finding the package of the googletest
find_package(GTest REQUIRED)           #finding the package of the googletest on the local machine


#debuging message 
message("Hoooooray GTest_FOUND: ${GTest_FOUND} ---> Found Done")  #printing the value of the GTest_FOUND

#this step is required to enable the C test for the files
enable_testing()                       #enabling the Ctesting in the project




#assiging the files to the variables
set(SRC_FILE calc.c)
set(TST_FILE test_calc.cpp)


#adding the executable file to the project
add_executable(
    ${PROJECT_NAME}
    ${SRC_FILE}
    ${TST_FILE}
)



#static code
target_link_libraries(
    ${PROJECT_NAME}
    GTest::gtest
    GTest::gmock_main #required If we don't have amain code just the function.cpp

)


#makes the program knows which testfiles to take 
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})


set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 11)
