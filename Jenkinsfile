pipeline{
    agent any

    stages{
        stage('Build'){
            steps{
                echo "=============Building the project============="
                bat """
                    gcc -o ahmed calc.c
                    ahmed.exe
                """
            }
        }
        stage('Test'){
            steps{
                script{
                    echo "=============Testing the project============="
                }
            }
        }

    }
}
