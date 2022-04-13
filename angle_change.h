double angle_change(int mx, int my, double angle)
{

  if (mx >= (10) && mx <= (40))
  {
    if (my >= (550) && my <= (580))
    {
      if (get_mouse_left_button() != 0)
        //if (get_key_state(KeyDown) != 0 )
      {
        angle = angle - 1;
      }
    }
  }

  //to increase the angle
  if (mx >= (10) && mx <= (40))
  {
    if (my >= (510) && my <= (540))
    {
      if (get_mouse_left_button() != 0)
        //if (get_key_state(KeyDown) != 0 )
      {
        angle = angle + 1;
      }
    }
  }
  return angle;
}