class CircleArea {
int r;
void display () {
double area = 3.14 * r * r;
System.out.println ("Area is :" + area);
}
public static void main (String[] args) {
CircleArea a = new CircleArea () ;
a.r = 5; 
a.display () ;								
}
}
