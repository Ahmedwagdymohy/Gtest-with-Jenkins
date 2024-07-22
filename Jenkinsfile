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
                    mkdir build
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
