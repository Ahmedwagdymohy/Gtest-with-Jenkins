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
