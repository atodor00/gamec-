using namespace std;

// encdec class with encrypt() and
// decrypt() member functions
class encdec
{
    int key;

    // File name to be encrypt
    string file = "geeksforgeeks.txt";
    char c;

public:
    encdec(string filee, int keyy)
    {
        file = filee;
        key = keyy;
    }
    void encrypt();
    void decrypt();
};

// Definition of encryption function
void encdec::encrypt()
{
    // Key to be used for encryption

    // Input stream
    fstream fin, fout;

    // Open input file
    // ios::binary- reading file
    // character by character
    fin.open(file, fstream::in);
    fout.open("temp.save.f", fstream::out);

    // Reading original file till
    // end of file
    while (fin >> noskipws >> c)
    {
        int temp = (c + key);

        // Write temp as char in
        // output file
        fout << (char)temp;
    }

    // Closing both files
    fin.close();
    fout.close();
}

// Definition of decryption function
void encdec::decrypt()
{

    fstream fin;
    fstream fout;
    fin.open("temp.save.f", fstream::in);
    fout.open(".save.txt", fstream::out);

    while (fin >> noskipws >> c)
    {

        // Remove the key from the
        // character
        int temp = (c - key);
        fout << (char)temp;
    }

    fin.close();
    fout.close();
}
