#include <stdio.h>
#include <kipr/graphics.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <rotate.h>
#include <angle_change.h>
#include <switch.h>
#include <laser.h>
#include <laser_beams.h>
#include <index_change.h>
#include <region_color_change.h>
#include <arrows.h>
#include <protractor.h>
#include <info.h>

//This website was used for all the rgb values of the colors
//https://www.rapidtables.com/web/color/RGB_Color.html


typedef struct struct_material {
  char name[5];
  double n;

} material;

double custom_index1(material mat[100], int mx, int my, double n1)
{
//material 1 upper
if (mx >= (530) && mx <= (550)) 
  {
    if (my >= (70) && my <= (90))
    {
      if (get_mouse_left_button() != 0)
      {
        n1 = mat[0].n;
      }
    }
  }

//material 2 upper
if (mx >= (530) && mx <= (550)) 
  {
    if (my >= (100) && my <= (120))
    {
      if (get_mouse_left_button() != 0)
      {
        n1 = mat[1].n;
      }
    }
  }

 //material 3 upper
if (mx >= (530) && mx <= (550))
  {
    if (my >= (130) && my <= (150))
    {
      if (get_mouse_left_button() != 0)
      {
        n1 = mat[2].n;
      }
    }
  }

//material 4 upper
if (mx >= (530) && mx <= (550))
  {
    if (my >= (160) && my <= (180))
    {
      if (get_mouse_left_button() != 0)
      {      
	n1 = mat[3].n;
      }
    }
  }

//material 5 upper
if (mx >= (530) && mx <= (550))
  {
    if (my >= (190) && my <= (210))
    {
      if (get_mouse_left_button() != 0)
      {
        n1 = mat[4].n;
      }
    }
  }
return n1;
}

double custom_index2(material mat[100], int mx, int my, double n2)
{
//material 1 lower
if (mx >= (530) && mx <= (550)) 
  {
    if (my >= (400) && my <= (420))
    {
      if (get_mouse_left_button() != 0)
      {
        n2 = mat[0].n;
      }
    }
  }

//material 2 lower
if (mx >= (530) && mx <= (550)) 
  {
    if (my >= (430) && my <= (450))
    {
      if (get_mouse_left_button() != 0)
      {
        n2 = mat[1].n;
      }
    }
  }

 //material 3 lower
if (mx >= (530) && mx <= (550))
  {
    if (my >= (460) && my <= (480))
    {
      if (get_mouse_left_button() != 0)
      {
        n2 = mat[2].n;
      }
    }
  }

//material 4 lower
if (mx >= (530) && mx <= (550))
  {
    if (my >= (490) && my <= (510))
    {
      if (get_mouse_left_button() != 0)
      {      
	n2 = mat[3].n;
      }
    }
  }

//material 5 lower
if (mx >= (530) && mx <= (550))
  {
    if (my >= (520) && my <= (530))
    {
      if (get_mouse_left_button() != 0)
      {
        n2 = mat[4].n;
      }
    }
  }
return n2;
}

//sorting the array
void sort_array(material mat[100], int len)
{
  int j,k, temp;
  char tempp[5];
  for (j = 0; j < len-1; ++j)
  {
    for (k = j + 1; k < len; ++k)
    {
      if (mat[j].n < mat[k].n)
      {
        temp = mat[j].n;
        mat[j].n = mat[k].n;
        mat[k].n = temp;

        strcpy(&tempp[5], mat[j].name);
        strcpy(mat[j].name, mat[k].name);
        strcpy(mat[k].name, &tempp[5]);
      }
    }
  }
  return;
}

void draw_mate()
{
  graphics_rectangle_fill(530, 70, 550, 90, 255, 153, 51); //material 1 upper
  graphics_rectangle_fill(530, 100, 550, 120, 255, 153, 51); //material 2 upper
  graphics_rectangle_fill(530, 130, 550, 150, 255, 153, 51); //material 3 upper
  graphics_rectangle_fill(530, 160, 550, 180, 255, 153, 51); //material 4 upper
  graphics_rectangle_fill(530, 190, 550, 210, 255, 153, 51); //material 5 upper

  graphics_rectangle_fill(530, 400, 550, 420, 255, 153, 51); //material 1 lower
  graphics_rectangle_fill(530, 430, 550, 450, 255, 153, 51); //material 2 lower
  graphics_rectangle_fill(530, 460, 550, 480, 255, 153, 51); //material 3 lower
  graphics_rectangle_fill(530, 490, 550, 510, 255, 153, 51); //material 4 lower
  graphics_rectangle_fill(530, 520, 550, 540, 255, 153, 51); //material 5 lower
  return;
}

void angle_of_incidence()
{
  g_printString("angle", 54, 505, 0, 0, 0, 1.5); //printing out the "angle"
  g_printString("of", 54, 525, 0, 0, 0, 1.5); //printing out the "of"
  g_printString("incidence", 54, 545, 0, 0, 0, 1.5); //printing out the "incidence"

  return;
}

int main()
{ 
  information();
  double n1, n2; //value of index of refraction
  n1 = 1;
  n2 = 1;
  int j;
  material mat[5];  

  FILE* outfile;

  double x, y;
  int mx, my;
  x = 50;
  y = 310;

  int turn = 1;
  int len = 0;

  double angle_inc = 15;

  graphics_open(560,620);

  while(get_key_state(KeyQ) == 0)
  {
    double pi = 22.0/7.0;

    double theta_inc = 0 - (angle_inc * pi/180);
    double theta_refl= (angle_inc * pi/180);
    double theta_refr = asin( (n1 * sin( (pi / 2) - theta_inc ) ) / n2);

    double blue_1 = color_upper(n1, blue_1); //changing color of upper region
    double blue_2 = color_upper(n2, blue_2); //changing color of lower region
    graphics_rectangle_fill(0, 0, 560, 310,158,110,blue_1); //upper half os screen
    graphics_rectangle_fill(0, 310, 560, 620,158,110,blue_2); //lower half of screen

    angle_of_incidence(); //print out "angle of incidence" on graphics screen

    graphics_rectangle_fill(510, 10, 540, 40, 255, 255, 0); //user input switch
    graphics_rectangle_fill(10, 10, 40, 40, 200, 0, 0); //switch 
    g_printString("Include a material", 320, 27, 0, 0, 0, 1.5); //include a material    

    draw_mate(); //making the boxes so that the user can choose between materials

    g_printString("switch", 11, 46, 0, 0, 0, 1.5); //printing out the "switch"

    arrows(); //drawing the arrows to change the angle

    get_mouse_position(&mx, &my);
    graphics_circle(mx, my,5, 255, 0, 0);
    turn = turn_switch(mx, my, turn); //changing the value of the turn to turn on/off the switch
    angle_inc = angle_change(mx, my, angle_inc); //user changing the incident angle

    outfile = fopen("materials.txt", "r");

    if(outfile == NULL)
    {
      outfile = fopen("materials.txt", "w");
    }
    else
    {
      outfile = fopen("materials.txt", "a");
    }

    if (mx >= (510) && mx <= (540))
    {
      if (my >= (10) && my <= (40))
      {
        if (get_mouse_left_button() != 0)
        {

          printf("Enter the name of the material:\n");
          scanf("%s", mat[len].name);

          printf("Enter the value for the index of refraction:\n");
          scanf("%lf", &mat[len].n);

          fprintf(outfile, "%s %lf\n", mat[len].name, mat[len].n);

          printf("%s is the name\n", mat[len].name);
          printf("%lf is index\n", mat[len].n);

          fclose(outfile);
          len = len + 1;
        }
      }
    }
    sort_array(mat,len);

    if (len > 5)
    {
      len = 5;
    }

    int k = 0;
    for(j=0;j<len;j++)
    {
      k = j * 30;
      g_printString(mat[j].name, 470, 73 + k, 0, 0, 0, 1.5);
      g_printInt((mat[j].n - 1) * 100, 2,440,73+k, 0, 0, 0, 1.5); //printing out the decimal part
      g_printString(".", 430,73+k, 0, 0, 0, 1.5); //printing out the "."
      g_printInt(1,1,420,73+k, 0, 0, 0, 1.5); //printing out the 1 part

      g_printString(mat[j].name, 470, 330 + 73 + k, 0, 0, 0, 1.5);
      g_printInt((mat[j].n * 100) - 100, 2,440,330 + 73+k, 0, 0, 0, 1.5); //printing out the decimal part
      g_printString(".", 430,330 + 73+k, 0, 0, 0, 1.5); //printing out the "."
      g_printInt(1,1,420,330 + 73+k, 0, 0, 0, 1.5); //printing out the 1 part

    }


    n1 = index_change_n1(mx, my, n1); //changing n1 using arrow keys
    int nn1 = (n1 - 1) * 100;
    g_printString("n1=", 470, 240, 0, 0, 0, 2.0); //printing out the "n1 = "
    g_printInt(nn1, 2,530, 240, 0, 0, 0, 2.0); //printing out the decimal part of n1
    g_printString(".", 520, 240, 0, 0, 0, 2.0); //printing out the "."
    g_printInt(1,1,512, 240, 0, 0, 0, 2.0); //printing out the 1 part of n1


    n2 = index_change_n2(mx, my, n2); //changing n2 using arrow keys
    int nn2 = (n2 - 1) * 100;
    g_printString("n2=", 470, 360, 0, 0, 0, 2.0); //printing out the "n2 = "
    g_printInt(nn2, 2,530, 360, 0, 0, 0, 2.0); //printing out the decimal part of n2
    g_printString(".", 520, 360, 0, 0, 0, 2.0); //printing out the "."
    g_printInt(1,1,512, 360, 0, 0, 0, 2.0); //printing out the 1 part of n2

    protr(); //drawing the protractor
    graphics_line(0, 310, 560, 310, 0, 0, 0); //line at the center of the screen

    if (turn % 2 == 0)
    {
      double theta_crit = asin( n2 / n1 );
      if (theta_inc > theta_crit)
      {
        line_inc(x,y,theta_inc);
        line_refl(theta_refl, 150);
      }
      else
      {
        line_inc(x,y,theta_inc);
        line_refl(theta_refl, 255);
        line_refr(theta_refr);
      }
    }
    
    n1 = custom_index1(mat, mx, my, n1);
    n2 = custom_index2(mat, mx, my, n2);

    laser(x,y,theta_inc); //drawing the laser
    graphics_update();

  }

  graphics_close();
  return 0;
}