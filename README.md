# Low-Fi Prototype of a Hypermobile Joint Protector Assistant

This repository is dedicated to the project of the lecture Interactive Systems 2020 (Theme 1 - Textile Circuits) at Saarland University. 
We aimed for the development of an eTextile concept that supports people suffering from hypermobility. The design of the joint protection assistant is chosen such that it does not affect the overall mobility but constantly keeps track of critical overextensions. When detecting such an overextension which might occur, e.g., during sports, the user is noticed immediately such that they can fix their posture appropriately. Although we focus on elbow joints only, feel welcome to adapt the proposed concept to other body regions or to further advance the overall concept. 

Our proposed low-fi prototype keeps track of arm stretchings with the help of a self-made, crocheted stretch sensor constantly measuring the degree of (over)extension. When identifying a possibly overextended elbow, the user is notified by some vibrotactile feedback. If no overstretching is detected, the wearable should not be perceived as such and is nothing else than a usual arm sleeve. One clue for the detection of overextensions is the required initial configuration of the prototype before using it. For that, the arm must be held in a position in which it is stretched but not overextended yet. This position/measured degree of extension will be used to configure the system since it acts as a threshold for identifying overextensions. 

More technically speaking, the decision when to activate the vibrotactile module is based on the measurements of the integrated stretch sensor on the inside of the am sleeve and a microcontroller programmed accordingly. The microcontroller uses the measurements of the stretch sensor to activate the vibe module if those measured values are larger than the initially determined threshold. It tells the module to stop vibration if the measurement falls below this threshold again. In turn, this means that the microcontroller must periodically take and interpret the current state of our stretch sensor. An LED might be used in addition to the vibration module to offer some visual feedback, as well.

## Getting Started

These instructions will get you a copy of the project prototype and running on your local machine for your own development and testing purposes. The instructions also provide circuit diagrams (photos and .fzz) for rebuilding the prototype not only on Tinkercad but should also enable you to physically build a prototype (see Fritzing circuit .fzz and .ino code).

More details on how to crochet your own stretch sensor can be found in the report (see .pdf file).

The Media folder provides additional photos and videos of prototypes, experiments, materials, etc as reference. 

### Prerequisites

What you need to install the software and how to install them:

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
* Elastic Bands and Velcro Strips (Optional)
  * added to the sleeve to ensure that the sleeve is fixed on the arm
  * no hard requirement, depends on the elasticity of the sleeve
* Alligator Clips (Optional)
  * not a hard requirement but eases the multimeter use
* Sewable Coin Cell Battery Holder (3V) (Optional)
  * not a hard requirement for the prototype as you can power it as well via your computer (Remark: You might need an extra breakout module depending on the microcontroller you use!)
* Coin Cell Battery (3V)

## Running the code

The .ino code can be found in the folder ./Arduino Code

Open the code in your Arduino IDE and connect you microcontroller to your PC (note that you might need a FTDI breakout module and a mini USB cable).
Next, select the appropriate serial port and Arduino Board in the IDE tool bar. Then compile the program by clicking the check symbol and finally upload your program on the microcontroller by clicking on the right arrow. Now, you may disconnect the controller from your PC. For a more detailed description have a look at the [Sew Electric](http://sewelectric.org/diy-projects/3-programming-your-lilypad/) Website.


## Building the circuit

For building the circuit, you have two possibilities:

* first build, execute (and maybe advance) the prototype on Tinkercad and/or
* use the Fritzing file to directly rebuild your own physical prototype
* it is recommended to first sketch the circuit on top of the sleeve using a erasable textile marker

### Tinkercad

An image and a simulation of my Tinkercad circuit can be found in the folder ./Media/Photos and ./Media/Videos, respecively. Note that for purposes of simplicity, the stretch sensor is represented by a potentiometer.
Rebuild the depicted circuit and copy/paste the Arduino code from ./Arduino Code/tinkercadPrototype into the Tinkercad code bar to execute the prototype.

### Fritzing

The Fritzing circuit (.fzz) can be found in the folder ./Fritzing.

## Testing and Troubleshooting

* In case that your prototype or some parts do not work at all, check for loose connections. I.e., check if the threads are connected tightly to the microcontroller and to the electrical components such as resitors and transistors.
* To avoid short circuits etc., ensure that there are no conductive yarns crossing each other. In case of crossings, make sure to insulate them such that the threads do no touch each other. The same holds for the yarns' ends that should not touch each other. Tip: You can use, e.g., some hot glue or Sugru to insulate the yarn crossings.
* Use a power source that fits your microcontroller (usually between 3.3V and 5V).
* Make sure to use the multimeter for testing purposes correctly. I.e., ensure that there is no loose contact between the conductive parts and the multimeter clips. An inappropriate use might give you unreliable testing results (as demonstrated in the ./Media/Videos/misusedMultimeter.mp4).

## Built With

* [Arduino](https://www.arduino.cc/en/Main/Software) - Coded in Arduino IDE

