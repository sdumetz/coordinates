# Arduino Coordinates Library

Coordinates is a C++ Library. It has been developed to perform conversions
between [cartesian](Glossary/Cartesian%20Coordinate%20System.md) and [polar](Glossary/Polar%20Coordinate%20System.md) coordinate systems.
To know more about concepts refer [Glossary](#Glossary).

## Features

### Intuitive Syntax

Coordinates has a simple syntax.
Just two function calls are enough to get the conversions done.

* Call [fromCartesian()](/Functions/fromCartesian().adoc) - to convert cartesian coordinates to polar coordinates.

* Call [fromPolar()](/Functions/fromPolar().adoc) - to convert polar coordinates to cartesian coordinates.

### Better Precision

`Coordinates` provides a `class` to seamlessly convert cartesian coordinates to polar coordinates or vice versa.
It uses floating point math to do so with quadrant checking to always give better precision.

### Functions

Refer [Function list](/Functions) to know about the funtions offered by `Coordinates`.

* [fromCartesian()](/Functions/fromCartesian().adoc)

* [fromPolar()](Functions/fromPolar().adoc)

* [getAngle()](Functions/getAngle().adoc)

* [getR()](/Functions/getR().adoc)

* [getX()](/Functions/getX().adoc)

* [getY()](/Functions/getY().adoc)

## Installation

How to install **Coordinates** library? <br>
You can install **Coordinates** in either of the two ways depending on how you are using the Arduino IDE.

* Option 1: If you are working offline using Arduino IDE please follow the
  steps as given in :
  <br>[Install library in Arduino IDE](https://www.arduino.cc/en/guide/libraries#toc2)

* Option 2: If you are working online using [Arduino Web Editor](https://create.arduino.cc/editor) follow these steps:
  * Sign in to your account.

  * Open or create a new **Sketch**  in which you wish to use this library.

  * Click on **Library Manager** in **Libraries** tab.

  * Choose your board and the topic (*optional*)

  * Search for '*Coordinates*', *star* it and now click **Done**.

  * Go to **Favorites** section inside the **Libraries** tab and search for '*Coordinates*'.

  * Hover the mouse over it and click **Include** or just type "`#include <Coordinates.h>`"

     in your 'Sketch'.

## Example Usage

* [Conversions](examples/Conversions) - Compares coordiante values resulting after conversion using the library and actual coordinate values obtained using sensors.

## Glossary

* [Cartesian Coordinate System](Glossary/Cartesian%20Coordinate%20System.md)

* [Polar Coordinate System](Glossary/Polar%20Coordinate%20System.md)

* [Conversion between Cartesian and Polar Coordinate Systems](Glossary/Conversion.md) 

## Contribute

We are glad you want to contribute!
Any open source project grows because of the contributions by the community.
You can contribute to the following:

* [Issue Tracking](https://github.com/sdumetz/coordinates/issues)
* [Source Code](https://github.com/sdumetz/coordinates/tree/master/src)
* [Examples](examples): Add a project that uses `Coordinates` library.
* If you have anything else in mind feel free to open a [Pull Request](https://github.com/sdumetz/coordinates/pulls).

> Note : Please go through [CONTRIBUTING.md](CONTRIBUTING.md) before contributing.  

## Support

If you are having issues, or require any help please let us know
[here](https://github.com/sdumetz/coordinates/issues).

## Licence

The project is licenced under the  [GNU Lesser General Public License v3.0](https://github.com/sdumetz/coordinates/blob/master/LICENSE).
