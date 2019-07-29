#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

class Song {
    friend ostream &operator<<(ostream &os, const Song &s);
    string name, artist;
    int rating;
public:
    Song() = default;
    Song(string name, string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}

    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

ostream &operator<<(ostream &os, const Song &s) {
    os << setw(20) << left << s.name
       << setw(30) << left << s.artist
       << setw(2) << left << s.rating;

       return os;
}

void display_menu() {
    cout << "\nF - Play First Song" << endl;
    cout << "N - Play Next song" << endl;
    cout << "P - Play Previous song" << endl;
    cout << "A - Add and play a new Song at current location" << endl;
    cout << "L - List the current playlist" << endl;
    cout << "===============================================" << endl;
    cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    cout << "\nPlaying: ";
    cout << song << endl;
}

void display_playlist(const list<Song> &playlist, const Song &current_song) {
    for (auto const &song : playlist)
        cout << song << endl;
    play_current_song(current_song);
}

void add_new_song(list<Song> &playlist) {
    cout << "Enter name: ";
    string name;
    cin >> name;
    cout << "Enter artist: ";
    string artist;
    cin >> artist;
    cout << "Enter rating (1-5): ";
    int rating;
    cin >> rating;

    Song new_song(name, artist, rating);
    playlist.push_front(new_song);

    cout << "\nSong has been added." << endl;
}

int main() {

    list<Song> playlist{
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camila Cabello", 5},
        {"Pray For Me", "The Weekend and K. Lamar", 4},
        {"The Middle", "Zedd, Maren Morris & Grey", 5},
        {"Wait", "Maroone 5", 4},
        {"Whatever It Takes", "Imagine Dragons", 3}          
    };
    
    list<Song>::iterator current_song = playlist.begin();

    char option;
    do
    {
        cout << '\n';
        display_playlist(playlist, *current_song);
        display_menu();
        cin >> option;
        option = toupper(option);
        switch (option)
        {
        case 'F':
            current_song = playlist.begin();
            play_current_song(*current_song);
            break;

        case 'N':
            if (current_song == playlist.end())
                current_song = playlist.begin();
            current_song++;
            play_current_song(*current_song);
            break;

        case 'P':
            if (current_song == playlist.begin())
                current_song = playlist.end();
            current_song--;
            play_current_song(*current_song);
            break;       

        case 'A':
            add_new_song(playlist);
            break;

        case 'L':
            display_playlist(playlist, *current_song);
            break;         
        
        case 'Q':
            cout << "\nThanks for listening! Bye!" << endl;
            break;

        default:
        cout << "\nYou chose wrong option" << endl;
            break;
        }
            
    } while (option != 'Q');

    system("pause");
    return 0;
}
