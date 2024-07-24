## How to BUILD and TEST with Jenkins :
### the Batch script we use inside Jenkins to build and run the Cmake of the Gtest 
```bat
set BUILD_DIR=build
if exist %BUILD_DIR% (
echo Folder %BUILD_DIR% exists.Deleting...
rmdir /s /q %BUILD_DIR%
echo Folder deleted.
)else (echo Folder %BUILD_DIR% does not exist.)

echo Creating new %BUILD_DIR% folder...
mkdir %BUILD_DIR%
echo Folder created.
cd build
cmake -G "MinGW Makefiles" ..
make -j
MyProject.exe
```

## The environmental Variables for Windows:
![image](https://github.com/user-attachments/assets/54f074f4-89c0-496e-8540-b03ea2f185c2)
        
# Troubleshooting
- #### gtest/gtest.h: No such file or directory #include "gtest/gtest.h"
Make sure that you have included the following in Vscode workspace
```bash
 "includePath": [
                "${workspaceFolder}/**",
                "C:\\Users\\study\\OneDrive\\Desktop\\v0.2",
                "C:\\googletest\\build\\output\\include\\gtest",
                "C:\\googletest\\build\\output\\include"
            ],

```

- ### To get a exe file of a  cpp usingGtest file:
```bash
g++ -fprofile-arcs -ftest-coverage -IC:\googletest\build\output\include -o test_calc calc.c test_calc.cpp -LC:\googletest\build\output\lib -lgtest -lgtest_main -pthread
```
-  specify the excutable name , replace with test_calc
-  specify the Cpp file , replace with test_calc.cpp
       
