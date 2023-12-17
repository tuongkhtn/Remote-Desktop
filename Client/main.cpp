#include "Slide1.h"
#include "Slide2.h"
#include "Client.h"
#include "Mouse.h"
Mouse mouseState;

int main() {

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Network Programming");

	std::vector<std::pair<char*, int>> connected_params;
	connected_params.push_back({ (char*)"172.20.16.161", 8080 });
	connected_params.push_back({ (char*)"172.20.34.42", 8080 });
	connected_params.push_back({ (char*)"172.20.10.195", 8080 });

	Slide1 slide1;
	Client client;

	client.setConnectPars(connected_params);

	slide1.run(window, client);

	for (int i = 0; i < connected_params.size(); i++) {
		delete connected_params[i].first;
	}

	return 0;
}