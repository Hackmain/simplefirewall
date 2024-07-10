#ifndef FIREWALL_H
#define FIREWALL_H

#include <vector>
#include <string>
#include "packet_parser.h"
#include "rule_manager.h"
using namespace std;

class Firewall{
public:
	Firewall();
	~Firewall();
	void loadRules(const string& filename);
	void addRules(const string& rule);
	void removeRules(const string& rule);
	void start();
	void stop();
	
private:
	PacketParser packetParser;
	RuleManager ruleManager;
	bool running;	

};

#endif //FIREWALL_H
