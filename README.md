# Arduino coordinates library

easy coordinates conversion for Arduino boards.
Convert from cartesian to polar coordinates and back again.

**Performance Note** : conversion takes place on `fromCartesian()` or `fromPolar()` calls. the library immediately calculates their counterparts.

## Methods

###    void fromCartesian(float x, float y)

takes (x,y) cartesian coordinates and convert them.

###    void fromPolar(float r, float phi)

takes aRadius and an Angle to calculate new coordinates

### Getters

get the current point's cartesian or polar axis.

	float getR() //get point's radius
	float getAngle() //get point's angle in Rad
	float getX() //get point's X axis position
	float getY() //get point's Y axis position


