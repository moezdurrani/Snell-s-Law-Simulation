void arrows()
{

  graphics_triangle_fill(10, 540, 40, 540, 25, 510, 0, 0, 255); // to upper the angle
  graphics_triangle_fill(10, 550, 40, 550, 25, 580, 0, 0, 255); // to lower the angle
  graphics_line(5, 505, 5, 585, 0  ,0 , 0); //left line
  graphics_line(5, 505, 45, 505, 0  ,0 , 0); //top line
  graphics_line(45, 505, 45, 585, 0  ,0 , 0); //rightline
  graphics_line(5, 585, 45, 585, 0  ,0 , 0); //bottom line


  graphics_triangle_fill(520, 300, 520, 270, 550, 285 , 0, 0, 255); //to increase n1
  graphics_triangle_fill(510, 300, 510, 270, 480, 285 , 0, 0, 255); //to decrease n1
  graphics_line(475, 265, 555, 265, 0, 0, 0); //top line
  graphics_line(555, 265, 555, 305, 0, 0, 0); //right line
  graphics_line(475, 305, 555, 305, 0, 0, 0); //bottom line
  graphics_line(475, 265, 475, 305, 0, 0, 0); //left line



  graphics_triangle_fill(520, 350, 520, 320, 550, 335 , 0, 0, 255); //to increase n2
  graphics_triangle_fill(510, 350, 510, 320, 480, 335 , 0, 0, 255); //to decrease n2
  graphics_line(475, 315, 555, 315, 0, 0, 0); //top line
  graphics_line(555, 315, 555, 355, 0, 0, 0); //right line
  graphics_line(475, 355, 555, 355, 0, 0, 0); //bottom line
  graphics_line(475, 315, 475, 355, 0, 0, 0); //left line

  return;
}
