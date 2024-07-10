#include <iostream>
#include <string>
using namespace std;
#include "firewall.h"

int main(){
	//Initialzatiom the firewall
	Firewall firewall;
	
	//load firewall rules form a file or database
	firewall.loadRules("firewall_rules.txt");
	
	//strat the firewall processing loop
	firewall.start();
	
	//run the firewall until user stop it 
	string command;
	while (true){
		cout << "enter a command  (add/remove/quit)";
		cin >> command;
		if (command == "quit"){
			break;
		}else if (command == "add"){
			string rule;
			cout << "enter your rule to add it please:";
			getline(cin, rule);
			firewall.addRules(rule);
		}else if (command == "remove"){
			string rule;
			cout << "enter your rule to remove it please:";
			getline(cin, rule);
			firewall.addRules(rule);
		}
	}
	// stop the firewall loop
	firewall.stop();
	
	return 0 ;

}
