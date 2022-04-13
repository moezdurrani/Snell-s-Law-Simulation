void protr()
{
  double pi = 22.0/7.0;

  double x_ref, y_ref;
  x_ref = 280;
  y_ref = 310;

  double x1, y1, x2, y2;
  x1 = 370;
  y1 = 310;
  x2 = 390;
  y2 = 310;

  double xx1[50], yy1[50], xx2[50], yy2[50];

  int i = 0;
  int k = 0;
  double j = 0;
  
  graphics_circle_fill(x_ref, y_ref, 110, 0, 255, 0);
  graphics_circle(x_ref, y_ref, 110, 0, 0, 0);
  
  while(i < 36)
  {  
  
  xx1[i] = x_rot(x1, y1, x_ref, y_ref, j * pi / 180);
  yy1[i] = y_rot(x1, y1, x_ref, y_ref, j * pi / 180);
  xx2[k] = x_rot(x2, y2, x_ref, y_ref, j * pi / 180);
  yy2[k] = y_rot(x2, y2, x_ref, y_ref, j * pi / 180);
  
  graphics_line(xx1[i], yy1[i], xx2[k], yy2[k], 0, 0, 0);
    
    i++;
    k++;
    j = j + 10;
  }
  
  g_printInt(0, 1,275, 224, 0, 0, 0, 1.5); //0 angle upper
  g_printInt(0, 1,275, 380, 0, 0, 0, 1.5); //0 angle lower
  
  g_printInt(90, 2,350, 300, 0, 0, 0, 1.5); //90 angle right
  g_printInt(90, 2,200, 300, 0, 0, 0, 1.5); //90 angle left
  
  g_printInt(60, 2,337, 260, 0, 0, 0, 1.5); //60 angle top right
  g_printInt(60, 2,210, 260, 0, 0, 0, 1.5); //60 angle top left
  
   g_printInt(30, 2,315, 233, 0, 0, 0, 1.5); //30 angle top right
  g_printInt(30, 2,235, 233, 0, 0, 0, 1.5); //30 angle top left
  
  g_printInt(30, 2,310, 375, 0, 0, 0, 1.5); //30 angle bottom right
  g_printInt(30, 2,230, 370, 0, 0, 0, 1.5); //30 angle bottom left
  
  g_printInt(60, 2,320, 345, 0, 0, 0, 1.5); //60 angle bottom right
  g_printInt(60, 2,205, 335, 0, 0, 0, 1.5); //60 angle bottom left

  return;
}