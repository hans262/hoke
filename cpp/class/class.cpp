#include <iostream>
#include <vector>
using namespace std;

class Line
{
public:
  static int count;
  void setLength(double len)
  {
    this->length = len;
  };
  double getLength(void)
  {
    return this->length;
  };
  Line(double len)
  {
    this->length = len;
  };

private:
  double length;

protected:
};

int Line::count = 0;

int main()
{
  Line line(9.0);
  cout << "Length of line : " << line.getLength() << endl;

  line.setLength(6.0);
  cout << "Length of line : " << line.getLength() << endl;

  cout << "Count of line : " << Line::count << endl;
  return 0;
}