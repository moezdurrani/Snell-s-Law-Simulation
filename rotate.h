// compute rotated x given angle r in radians
// note - sign is changed to + because in graphics Y  axis points down
double xR(double x0, double y0, double r)
{
  return (x0*cos(r) + y0*sin(r)); // return the rotated value of X
} 


// compute rotated y given rot angle in radians
// note + sign is changed to - because in graphics Y axis points down
double yR(double x0, double y0, double r)
{ 
  return (y0*cos(r) - x0*sin(r)); // return the rotated value of Y
}

//Rotating the x-coordinate
double x_rot(double x0, double y0, double x_ref, double y_ref, double theta)
{
  return x_ref + xR(x0-x_ref,y0-y_ref, theta); 
}

//Rotating the y-coordinate
double y_rot(double x0, double y0, double x_ref, double y_ref, double theta)
{
  return y_ref + yR (x0-x_ref,y0-y_ref, theta); 
}