#ifndef RULE_MANAGER_H
#define RULE_MANAGER_H

#include <vector>
#include <string>
#include "firewall_rule.h"
#include "packet.h"
using namespace std;

class RuleManager {
public:
    RuleManager();
    ~RuleManager();
    bool addRule(const FirewallRule& rule);
    bool removeRule(const FirewallRule& rule);
    bool applyRules(const vector<const Packet*>& packets);
    const vector<FirewallRule>& getRules() const;

private:
    vector<FirewallRule> rules;
};

#endif // RULE_MANAGER_H
