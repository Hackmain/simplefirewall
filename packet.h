#ifndef PACKET_H
#define PACKET_H

#include <string>
using namespace std;

class Packet {
public:
    Packet(const string& data, const string& srcIP, const string& destIP, const string& protocol);
    ~Packet();
    const std::string& getData() const;
    const std::string& getSrcIP() const;
    const std::string& getDestIP() const;
    const std::string& getProtocol() const;

private:
    std::string data;
    std::string srcIP;
    std::string destIP;
    std::string protocol;
};

#endif // PACKET_H
