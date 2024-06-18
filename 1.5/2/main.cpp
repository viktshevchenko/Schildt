#include <iostream>
#include <string>

class card {
    std::string title, author;
    int count{}; // зачем фигурные скобки?
public:
    void store (std::string title, std::string author, int count);
    void show ();
};

void card::store (std::string t, std::string a, int c) {
    title = std::move(t); // что это?
    author = std::move(a);
    count = c;
}

void card::show (){
    std::cout << title << " " << author << " " << count << std::endl;
}

int main() {
    card n1, n2;

    n1.store("1984","George Orwell",7);
    n2.store("Pride and Prejudice", "Jane Austen", 3);

    n1.show();
    n2.show();

    return 0;
}