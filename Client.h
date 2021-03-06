#include <sys/socket.h>
#include <iostream>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <cstring>

class Client{
public:
    Client();
    void Run();
private:
    bool ClientStart();
    void ClientStop();
    int Handle ();
    int fd;
    char* buf = new char[1024];
    std::string user_input;
    sockaddr_in adr{};
};
