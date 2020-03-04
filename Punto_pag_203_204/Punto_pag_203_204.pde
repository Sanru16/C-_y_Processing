Punto pt;



void setup() {
  size(100, 100);
  smooth();
  noStroke();
  pt = new Punto(33, 50, 30, 1.5);
    
}
void draw() {
  background(0);
  pt.mostrar();
}

class Punto{
    float x, y, d, vel;
    int dir = 1;
    
    Punto(float xpos, float ypos, float dia, float sp){
      x = xpos;
      y = ypos;
      d = dia;
      vel = sp;
  }
    
    void mover(){
      y = (vel * dir);
      if ((y > (height - d/2)) || (y < d/2)){
        dir *= -1;
      }
    }
        
    void mostrar(){
        ellipse(x, y, d, d);
    }
}