#include <string>
#include "json.h"

using json = nlohmann::json;

int main(int argc, char** argv)
{
    json j = json::new_parse(argv[1]);

    std::cerr << j.dump(4) << "\n";
    return 0;
}
