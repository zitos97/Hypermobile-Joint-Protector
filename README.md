# On the Development of a Hypermobile Joint Protector

This repository is dedicated to the project of the lecture Interactive Systems 2020 (Theme 1 - Textile Circuits) at Saarland University. 
We develop a wearable joint protection assistant designed to support people suffering from hypermobility. The design of the joint protection assistant is chosen such that it does not affect the overall mobility but is able to give the user vibrotactile feedback if it perceives overstretching, e.g. during sports. Although we focus on elbow joints in this work only, feel welcome to adapt the proposed concept to other body regions or generally advance it. 

The proposed prototype keeps track of arm stretching with the help of a self-made stretch sensor and gives feedback if it finds the elbow being overstretched. As a consequence, it then notifies the user who can then fix their posture appropriately to protect their joint. If no overstretching is detected, the wearable should not give any feedback and is just nothing else than a usual arm sleeve. One clue for the detection of overextensions is that we must initially configure the prototype before wearing. For that, the arm must be in a position in which it is stretched but not overextended yet. This position will be used to configure the system such that it uses this position as reference when judging if the arm is in a healthy posture. 

More technically speaking, the decision when to activate the vibrotactile module is based on the measurements of the integrated stretch sensor on the inside of the am sleeve and a microcontroller programmed accordingly. The microcontroller uses the measurements of the stretch sensor to activate the vibe module if those measured values are larger than the initially determined threshold. It tells the module to stop the vibration if the measurement falls below this threshold again. In turn, this means that the microcontroller must periodically take and interpret the current state of the stretch sensor. An LED might be used in addition to the vibration module to offer some visual feedback, as well.

## Getting Started

These instructions will get you a copy of the project prototype and running on your local machine for your own development and testing purposes. The instructions also provide circuit diagrams (photos and .fzz) for rebuilding the prototype not only on Tinkercad but should also enable you to physically build a prototype (see Fritzing circuit .fzz and .ino code).

The Media folder provides additional photos and videos of prototypes, experiments, materials, etc as reference. 

### Prerequisites

What things you need to install the software and how to install them:

* For the code that will be run on the microcontroller (LilyPad), you might work with the Arduino IDE which can be downloaded [here](https://www.arduino.cc/en/Main/Software).

**Required Hardware**

* Arm Sleeve (e. g. for cyclists) or Compression Sleeve
  * must be tight and elastic
* Non-Conductive Elastic Wool / Yarn (TODO Thickness)
  * e. g., Merino wool 
* Conductive Yarn / Thread
  * e. g., Bobbin (Stainless Steel) Thread
* Multimeter
* Shaftless Vibration Motor
  * should work with at least 3.3V
* LED
* Resistors
  * at least one 1k  Ω, one 330  Ω, and one 150   Ω resistor
* Lilypad Arduino 328 Main Board
  * many other microcontrollers would work as well
* NPN Transistor, Diode, Capacitor
  * requires a 2N2222 or 2N3904  NPN Transistor,  1N4001 Diode, and a 0.1µF ceramic capacitor
* Sugru Silicone
  * can be replaced by any other insulating, flexible material
* Small Piece of Plastic
* Crochet Hook
* Sewing Needle
* Snap Assortment (Male and Female)
* Scissor
* Hot Glue
* Elastic Bands and Velcro Strips
  * add it to the sleeve to ensure that the sleeve is fixed on the arm
  * no hard requirement, depends on the elasticity of the sleeve
* Alligator Clips
  * not a hard requirement but eases the multimeter use
* Sewable Coin Cell Battery Holder (3V)
  * not a hard requirement for the prototype as you can power it as well via your computer (attention, you might need an extra breakout module depending on the microcontroller you use!)
* Coin Cell Battery (3V)

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
Rebuild the depicted circuit and copy/paste the Arduino code from ./Arduino Code/tinkercadPrototype into the Tinkercad code bar to execute the prototype.

### Fritzing

The Fritzing circuit (.fzz) can be found in the folder ./Fritzing.

## Testing and Troubleshooting

* In case that your prototype or some parts do not work at all, check for loose connections. I.e., check if the threads are connected tightly to the microcontroller and to the electrical components such as resitors and transistors.
* To avoid short circuits etc., ensure that there are no conductive yarns crossing each other. In case of crossings, make sure to isolate them such that the threads do no touch each other. The same hold for the yarns' ends that should not touch each other.
* Use a power source that fits your microcontroller (usually between 3.3V and 5V).
* Make sure to use the multimeter for testing purposes correctly. I.e., ensure that there is no loose contact between the conductive parts and the multimeter clips. An inappropriate use might give you unreliable testing results (demonstrated in the ./Media/Videos/misusedMultimeter.mp4).

## Built With

* [Arduino](https://www.arduino.cc/en/Main/Software) - Coded in Arduino IDE

