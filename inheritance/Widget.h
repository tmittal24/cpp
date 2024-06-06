#include <string>
using namespace std;

class Widget
{
public:
    Widget();
    explicit Widget(string value);
    void enable();
    void disable();
    bool isEnabled();

private:
    bool enabled;
};