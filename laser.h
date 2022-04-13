//function to create the laser
void laser(double x, double y, double theta)
{

  //x = 50;
  //y = 310;
  double x_ref, y_ref, xx1, yy1;
  x_ref = 280;
  y_ref = 310;

  //xx1 = x_rot(x, y, x_ref, y_ref, theta);
  //yy1 = y_rot(x, y, x_ref, y_ref, theta);
  xx1 = x;
  yy1 = y;
  double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8;
  double x11, y11, x22, y22, x33, y33, x44, y44, x55, y55, x66, y66, x77, y77, x88, y88;

  x1 = xx1 - 40; //top left
  y1 = yy1 - 20;
  x2 = xx1 + 40; //top right
  y2 = yy1 - 20;
  x3 = xx1 + 40; //bottom right
  y3 = yy1 + 20;
  x4 = xx1 - 40; //bottom left
  y4 = yy1 + 20;

  x5 = xx1 + 40;		//top left
  y5 = yy1 - 20 + 5; 
  x6 = xx1 + 40; 		//bottom left
  y6 = yy1 + 20 - 5; 
  x7 = xx1 + 40 + 15;   //top right
  y7 = yy1 - 20 + 5;
  x8 = xx1 + 40 + 15; 	    //bottom right
  y8 = yy1 + 20 - 5; 

  x11 = x_rot(x1, y1, x_ref, y_ref, theta);
  y11 = y_rot(x1, y1, x_ref, y_ref, theta);
  x22 = x_rot(x2, y2, x_ref, y_ref, theta);
  y22 = y_rot(x2, y2, x_ref, y_ref, theta);
  x33 = x_rot(x3, y3, x_ref, y_ref, theta);
  y33 = y_rot(x3, y3, x_ref, y_ref, theta);
  x44 = x_rot(x4, y4, x_ref, y_ref, theta);
  y44 = y_rot(x4, y4, x_ref, y_ref, theta);
  x55 = x_rot(x5, y5, x_ref, y_ref, theta);
  y55 = y_rot(x5, y5, x_ref, y_ref, theta);
  x66 = x_rot(x6, y6, x_ref, y_ref, theta);
  y66 = y_rot(x6, y6, x_ref, y_ref, theta);
  x77 = x_rot(x7, y7, x_ref, y_ref, theta);
  y77 = y_rot(x7, y7, x_ref, y_ref, theta);
  x88 = x_rot(x8, y8, x_ref, y_ref, theta);
  y88 = y_rot(x8, y8, x_ref, y_ref, theta);

  /*
  graphics_triangle_fill(x1, y1, x2, y2, x3, y3, 100, 100, 100);
  graphics_triangle_fill(x1, y1, x3, y3, x4, y4,100, 100, 100);
  graphics_triangle_fill(x5, y5, x6, y6, x7, y7,50, 50, 50);
  graphics_triangle_fill(x6, y6, x7, y7, x8, y8,50, 50, 50);
*/
  graphics_triangle_fill(x11, y11, x22, y22, x33, y33, 100, 100, 100);
  graphics_triangle_fill(x11, y11, x33, y33, x44, y44,100, 100, 100);
  graphics_triangle_fill(x55, y55, x66, y66, x77, y77,50, 50, 50);
  graphics_triangle_fill(x66, y66, x77, y77, x88, y88,50, 50, 50);


  return;
}
