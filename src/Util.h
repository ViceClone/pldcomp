#include <string>

using namespace std;

class Util {
    public:
       static void read_file(string file_name);
       static void log_file(std::ofstream& testLogStream, string file_name);
};