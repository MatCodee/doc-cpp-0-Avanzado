#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt",ios::out);
    string line;

    // Este te da un punto del flujo
    streambuf* sfream_buffer_cout = cout.rdbuf(); 
    streambuf* stream_buffer_cin = cin.rdbuf();

    // obtenemos el streambuffer del file
    streambuf* stream_buffer_file = file.rdbuf();

    // redireccionamos la salida al archivo file
    cout.rdbuf(stream_buffer_file);
    

    return 0;
}