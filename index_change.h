double index_change_n1(int mx, int my, double n1)
{
  //to increase n1
  if (mx >= (520) && mx <= (550))
  {
    if (my >= (270) && my <= (300))
    {
      if (get_mouse_left_button() != 0)
      {
        n1 = n1 + 0.01;

        if (n1 >= 1.6)
        {
          n1 = 1.6;
        }

      }
    }
  }

  //to decrease n1
  if (mx >= (480) && mx <= (510))
  {
    if (my >= (270) && my <= (300))
    {
      if (get_mouse_left_button() != 0)
      {
        n1 = n1 - 0.01;

        if (n1 <= 1.0)
        {
          n1 = 1.0;
        }

      }
    }
  }
  //g_printInt(s.number, s.minNumDigits, s.x - 4, s.y-2, s.R4, s.G4, s.B4, s.scale);
  //g_printInt(n1, 4, 100, 100, 0, 0, 0, 1);
  return n1;
}

double index_change_n2(int mx, int my, double n2)
{
  //to increase n2
  if (mx >= (520) && mx <= (550))
  {
    if (my >= (320) && my <= (350))
    {
      if (get_mouse_left_button() != 0)
      {
        n2 = n2 + 0.01;

        if (n2 >= 1.6)
        {
          n2 = 1.6;
        }

      }
    }
  }

  //to decrease n2
  if (mx >= (480) && mx <= (510))
  {
    if (my >= (320) && my <= (350))
    {
      if (get_mouse_left_button() != 0)
      {
        n2 = n2 - 0.01;

        if (n2 <= 1.0)
        {
          n2 = 1.0;
        }

      }
    }
  }
  return n2;
}