# On the Development of a Hypermobile Joint Protector

This repository is dedicated to the project of the lecture Interactive Systems 2020 (Theme 1 - Textile Circuits) at Saarland University. 
We develop a wearable joint protection assistant designed to support people suffering from hypermobility. The design of the joint protection assistant is chosen such that it does not affect the overall mobility but is able to give the user vibrotactile feedback if it perceives overstretching, e.g. during sports. Although we focus on elbow joints in this work only, feel welcome to adapt the proposed concept to other body regions or improve it. 

The proposed prototype keeps track of arm stretching with the help of a self-made stretch sensor and gives feedback if it finds the elbow being overstretched. As a consequence, it then notifies the user who can then fix their posture appropriately to protect their joint. If no overstretching is detected, the wearable should not give any feedback and is just nothing else than a usual arm sleeve. One clue is that to detect overstretching, we must initially configure the prototype before wearing. For that, the arm must be in a position in which it is stretched but not overstretched yet. This position will be used to configure the system such that it uses this position as reference when judging if the arm is in a healthy posture. 

More technically speaking, the decision when to activate the vibrotactile module is based on the measurements of the integrated stretch sensor on the inside of the am sleeve and a microcontroller programmed accordingly. The microcontroller uses the measurements of the stretch sensor to activate the vibro module if those measured values are larger than the initially determined treshold. It tells the module to stop the vibration if the measurement falls below this threshold again. In turn, this means that the microcontroller must  periodically take and interprete the current state of the stretch sensor. Note that the programming approach is currently rather simplified and might be prone to errors. The main focus is currently on the development of the wearable stretch sensor indicating the stretching degree and the vibrotactile actuator.


## Getting Started

These instructions will get you a copy of the project prototype and running on your local machine for your own development and testing purposes. The instructions also provide circuit diagrams (photos and .fzz) for rebuilding the prototype not only on Tinkercad but should also enable you to physically build a prototype (see Fritzing circuit .fzz (TODO) and .ino code).

The Media folder provides additional photos and videos of prototypes, experiments, materials, etc as reference (and to store my data in case that my PC breaks). 

### Prerequisites

What things you need to install the software and how to install them:

* For the code that will be run on the microcontroller (LilyPad), you might work with the Arduino IDE which can be downloaded [here](https://www.arduino.cc/en/Main/Software).

What hardware you need to construct the prototype:

* microcontroller, e.g., LilyPad
* stretch sensor, see [here](https://www.instructables.com/id/Felted-Crochet-Stretch-Sensor/), [here](https://www.kobakant.at/DIY/?p=1762), or [here](https://www.instructables.com/id/DIY-Breath-Sensor-with-Arduino-Conductive-Knitted-/). It is important that the measured resistance of the stretch sensor must change remarkably if it gets stretched!
* vibration module, see [here](https://www.kobakant.at/DIY/?p=8293)
* resistors (at least 2)
* NPN transistor
* diode
* capacitor
* conductive thread
* tight arm sleeve

## Running the code

The .ino code can be found in the folder ./Arduino Code

Open the code in your Arduino IDE and connect you microcontroller to your PC (note that you might need a FTDI breakout module and a mini USB cable).
Next, select the appropriate serial port and Arduino Board in the IDE tool bar. Then compile the program by clicking the check symbol and finally upload your program on the microcontroller by clicking on the right arrow. Now, you may disconnect the controller from your PC. For a more detailed description have a look at the [Sew Electric](http://sewelectric.org/diy-projects/3-programming-your-lilypad/) Website.


## Building the circuit

For building the circuit, you have two possibilities:

* first build, execute (and maybe advance) the prototype on Tinkercad and/or
* use the Fritzing file to directly rebuild your own physical prototype

### Tinkercad
An image and a simulation of my Tinkercad circuit can be found in the folder ./Media/Photos and ./Media/Videos, respecively. Note that for purposes of simplicity, the stretch sensor is represented by a potentiometer.
Rebuild the depicted circuit and copy/paste the Arduino code into the Tinkercad code bar to execute the prototype.

### Fritzing
The Fritzing circuit (.fzz) can be found in the folder ./Fritzing. (TODO. Not yet present!)

## Testing and Troubleshooting
(TODO. No experiences yet!)

## Built With

* [Arduino](https://www.arduino.cc/en/Main/Software) - Coded in Arduino IDE

