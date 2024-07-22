pipeline{
    agent any

    stages{
        stage('Build'){
            steps{
                echo "=============Building the project============="
                bat """
                    gcc -o ahmed main.c
                    ahmed.exe
                """
            }
        }
        stage('Test'){
            steps{
                script{
                    echo "********************Testing the project********************"
                    bat """
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
                """
                }
            }
        }

    }
}
