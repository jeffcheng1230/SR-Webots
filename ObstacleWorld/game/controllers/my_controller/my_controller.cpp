#include <webots/Robot.hpp>
#include <webots/GPS.hpp>
#include <webots/Emitter.hpp>

using namespace webots;

int main(int argc, char **argv) {
	Robot *robot = new Robot();
	GPS *gps = robot->getGPS("gps");
	Emitter *emitter = robot->getEmitter("emitter");

	bool victim = true;
	const int robotID = 0; //0 for robot0, 1 for robot1
	int timeStep = (int)robot->getBasicTimeStep();
	char message[13];
	
	//memcpy(&message[0], &robotID, 4);
	
	gps->enable(timeStep);
	
	while (robot->step(timeStep) != -1) {
		if (victim) {
			float PosX = gps->getValues()[0] * 100, PosZ = gps->getValues()[2] * 100;
			memcpy(&message[0], &PosX, 4);
			memcpy(&message[4], &PosZ, 4);
			message[9] = 'T'; //'H' for letter H, 'S' for letter S, 'U' for letter U, 'T' for heat victim
			emitter->send(message, 9);
		}
	}
}