#ifndef FIREWALL_RULE_H
#define FIREWALL_RULE_H

#include <string>
using namespace std;

class FirewallRule {
public:
    FirewallRule(const string& srcIP, const string& destIP, const string& protocol, const string& action);
    ~FirewallRule();
    const string& getSrcIP() const;
    const string& getDestIP() const;
    const string& getProtocol() const;
    const string& getAction() const;

private:
    string srcIP;
    string destIP;
    string protocol;
    string action;
};

#endif // FIREWALL_RULE_H
