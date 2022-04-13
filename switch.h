//turn to turn the switch on and off
int turn_switch(int mx, int my, int turn)
    {
      if (mx >= (10) && mx <= (40))
      {
        if (my >= (10) && my <= (40))
        {
          if (get_mouse_left_button() != 0)
          {
            turn = turn + 1;
          }
        }
      }
      return turn;
    }