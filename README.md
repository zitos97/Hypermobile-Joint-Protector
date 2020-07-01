# On the Development of a Hypermobile Joint Protector

This repository is dedicated to the project of the lecture Interactive Systems 2020 (Theme 1 - Textile Circuits) at Saarland University. 
The joint protection assistant is a wearable designed to support people suffering from hypermobility. The design of the joint protection assistant is chosen such that it does not affect the overall mobility, i.e., can be worn as a simple tight and elastic arm sleeve (when focussing on the elbow joint only), but is able to give the user vibrotactile feedback if it perceives overstretching. Although we focus on elbow joints in this work only, feel welcome to adapt the proposed concept to other body regions or improve it. 

The proposed prototype keeps track of arm stretching, e.g., during workouts, and gives feedback if it finds the elbow being stretched too much. As a consequence, it then notifies the user who can then fix their posture appropriately to protect their joint. If no overstretching is detected, the wearable does not give any feedback and is just nothing else than a usual arm sleeve. To detect overstretching, we must initially configurate the prototype when before wearing. For that, the arm must be in a position in which it is stretched but not overstretched yet. This position will be used to configure the system such that it uses this position as reference when judging if the arm is in a healthy posture. After initializing the system, the user can start his activities without further taking care of the device. Note that the programming approach is currently rather simplified and might be prone to errors. The main focus is currently on the development of the wearable sensor and vibrotactile actuator.

The decision when to activate the vibrotactile module is based on the measurements of an integrated stretch sensor on the inside of the am sleeve and a microcontroller programmed accordingly. The microcontroller uses the measurements of the stretch sensor to activate the vibro module if those measured values are larger than the initially determined treshold. It tells the module to stop the vibration if the measurement falls below this threshold again. In turn, this means that the microcontroller must  periodically take and interprete the current state of the stretch sensor. 

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

What things you need to install the software and how to install them:

* For the code that will be run on the microcontroller (LilyPad), you might work with the Arduino IDE which can be downloaded [here](https://www.arduino.cc/en/Main/Software).

What hardware you need to construct the prototype:

* TODO
* TODO
* TODO

## Running the code

Explain how to run the code on LilyPad

## Building the circuit
TODO
### Tinkercad

## Testing the prototype
TODO

## Built With

* [Arduino](https://www.arduino.cc/en/Main/Software) - Coded in Arduino IDE

