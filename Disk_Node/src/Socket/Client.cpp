//
// Created by mau on 6/14/21.
//
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <iostream>
#include <pthread.h>
#include <arpa/inet.h>


using namespace std;


int InitClient()
{
    int port;
    int clientSocket = socket(AF_INET,SOCK_STREAM,0);
    if(clientSocket == -1){
        return 1;
    }

    cout<<"Type the port address you want to connect : " << endl;
    cin >> port;
    string ipAddress = "127.0.0.1";

    sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    inet_pton(AF_INET,ipAddress.c_str(),&addr.sin_addr);

    int connectRes = connect(clientSocket,(sockaddr*)&addr,sizeof (addr));
    if(connectRes == 0){
        cout<< "You have connect to server !" << endl;
    }
    if(connectRes == -1){
        return 1;
    }

    char buf[4096];
    string userInput;


    do{

        getline(cin,userInput);

        int sendRes = send(clientSocket,userInput.c_str(),userInput.size()+1,0);

        if(sendRes == -1){
            cout<<"Could not send to server\r\n";
            continue;
        }


    }while(true);

}