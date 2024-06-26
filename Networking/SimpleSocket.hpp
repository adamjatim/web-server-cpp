// 
// Homo Deus
// 1/21/21
// 
// Homo Deus C++ Library
// SimpleSocket.hpp
// 
// Adam Rahmat Ilahi
// 



#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE
{
  class SimpleSocket
  {
    private:
      struct sockaddr_in address;
      int sock;
      int connection;

    public:
      // Constructor
      SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
      // Virtual function to connect to network
      virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
      // Function to test the sockets and connections
      void test_connection(int);
      // Getter functions 
      struct sockaddr_in get_address();
      int get_sock();
      int get_connection();
      // Setter functions
      void set_connection(int con);
  };
}

#endif /* SimpleSocket_hpp */