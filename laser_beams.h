//function to create the incident ray

void line_inc(double x1, double y1, double theta)
{
  double x_ref, y_ref, x11, y11;
  x_ref = 280;
  y_ref = 310;

  x11 = x_rot(x1, y1, x_ref, y_ref, theta);
  y11 = y_rot(x1, y1, x_ref, y_ref, theta);

  graphics_line(x11, y11, x_ref, y_ref, 150, 0, 0);

  return;
}

//function to create the reflected ray
void line_refl(double theta, int r)
{
  double x_ref, y_ref, x11, y11;
  x_ref = 280;
  y_ref = 310;
  double x1 = 1000;
  double y1 = 310;
  
  x11 = x_rot(x1, y1, x_ref, y_ref, theta);
  y11 = y_rot(x1, y1, x_ref, y_ref, theta);

  graphics_line(x11, y11, x_ref, y_ref, r , 0, 0);

  return;
}

//function to create the refracted ray
void line_refr(double theta)
{
  double x_ref, y_ref, x1, y1, x11, y11;
  x_ref = 280;
  y_ref = 310;
  
  x1 = 280;
  y1 = 1000;

  x11 = x_rot(x1, y1, x_ref, y_ref, theta);
  y11 = y_rot(x1, y1, x_ref, y_ref, theta);

  graphics_line(x11, y11, x_ref, y_ref, 150, 0, 0);

  return;
}


