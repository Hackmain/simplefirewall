#ifndef PACKET_PARSER_H
#define PACKET_PARSER_H

#include <vector>
#include <string>
#include "packet.h"


class PacketParser {
public:
    PacketParser(); // Corrected constructor name
    ~PacketParser(); // Corrected destructor name
    bool parsePacket(const std::string& packetData, std::vector<Packet>& packets);
};

#endif // PACKET_PARSER_H
