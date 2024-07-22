pipeline{
    agent any

    stages{
        stage('Build'){
            steps{
                echo "=============Building the project============="
                bat """
                    gcc -o ahmed calc.c
                    ./ahmed
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