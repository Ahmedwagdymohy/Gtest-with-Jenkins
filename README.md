## The Bat script working with this :
                        set BUILD_DIR=build

         if exist %BUILD_DIR% (
         echo Folder %BUILD_DIR% exists. Deleting...
         rmdir /s /q %BUILD_DIR%
         echo Folder deleted.
         ) else (
         echo Folder %BUILD_DIR% does not exist.
                 )

        echo Creating new %BUILD_DIR% folder...
        mkdir %BUILD_DIR%
        echo Folder created.
        cd build
        cmake -G "MinGW Makefiles" ..
        make -j
        MyProject.exe
## The environmental Variables:
![image](https://github.com/user-attachments/assets/54f074f4-89c0-496e-8540-b03ea2f185c2)
        

        
