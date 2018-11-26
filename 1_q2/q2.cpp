/**
* @file q2.cpp
* @author Shengcong Zhou * @Date 2018.May.30
* @version 1.0
* @section DESCRIPTION
*/
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.May.30______________ //
// ____ 301336141 ______ //

#include <iostream>
#include <string>

using namespace std;

// Global variable
int const TERRIBLE = 1;
int const BAD = 2;
int const OK = 3;
int const GOOD = 4;
int const GREAT = 5;

/**
 * @brief This class defines information about a movie
 */
class Movie
{
public:
    Movie(string name, string rating);

    // Accessor declarations
    string getMovieName();
    string getMpaaRating();

    // Mutator declarations
    void setMovieName(string name);
    void setMpaaRating(string rating);

    void addRating(int rating);
    double getAverage();
    void output(Movie& theMovie);

private:
    string movieName;
    string mpaaRating;
    int numRated1;
    int numRated2;
    int numRated3;
    int numRated4;
    int numRated5;
};


int main()
{
    // Object constructor, accessor, mutator driver program
    cout << "Testing object constructor, mutator, accessor\n";
    cout << "Creating test object\n";
    Movie test("TestMovie", "R");
    cout << "Testing constructor: result should be\n"
            "Movie name: TestMovie\nMPAA rating: R\n";
    cout << endl << "Result:\nMovie name: " << test.getMovieName() << endl
         << "MPAA rating: " << test.getMpaaRating() << endl << endl;

    // Function addRating, getAverage driver program
    cout << "Testing function addRating\nAdding test ratings:\n";
    test.addRating(1);
    cout << "Testing function getAverage\nGetting average: result should be\n"
            "Average rating: 1\n";
    cout << endl << "Result:\nAverage rating: " << test.getAverage()
         << endl << endl;

    cout << "Test driving completed\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";

    // Main program
    // Create object then add 5 ratings
    Movie sevenSamrai("Seven Samurai", "PG-13");
    sevenSamrai.addRating(1);
    sevenSamrai.addRating(2);
    sevenSamrai.addRating(3);
    sevenSamrai.addRating(4);
    sevenSamrai.addRating(5);

    // Create object then add 5 ratings
    Movie spiderMan("Spider Man", "PG-13");
    spiderMan.addRating(4);
    spiderMan.addRating(4);
    spiderMan.addRating(4);
    spiderMan.addRating(5);
    spiderMan.addRating(5);

    // Display object information
    sevenSamrai.output(sevenSamrai);
    spiderMan.output(spiderMan);

    return 0;
}

// Constructor definition
Movie::Movie(string name, string rating)
{
    movieName = name;
    mpaaRating = rating;
    numRated1 = 0;
    numRated2 = 0;
    numRated3 = 0;
    numRated4 = 0;
    numRated5 = 0;
}

// Accessor definitions
string Movie::getMovieName()
{
    return movieName;
}
string Movie::getMpaaRating()
{
    return mpaaRating;
}

// Mutator definitions
void Movie::setMovieName(string name)
{
    movieName = name;
}
void Movie::setMpaaRating(string rating)
{
    mpaaRating = rating;
}

/**
 * @brief This function adds count to each rating depends on the rating
 *
 * @param rating is the rating
 * @return void
 */
void Movie::addRating(int rating)
{
    switch(rating) {
        case TERRIBLE:
            numRated1++;
            break;
        case BAD:
            numRated2++;
            break;
        case OK:
            numRated3++;
            break;
        case GOOD:
            numRated4++;
            break;
        case GREAT:
            numRated5++;
            break;
        default:
            cerr << "ERROR: invalid rating\nTerminating\n";
            exit(0);
    }
}

/**
 * @brief This function calculates the average rating
 *
 * @return double averageRating
 */
double Movie::getAverage()
{
    double averageRating =
            (double)((numRated1 * TERRIBLE) + (numRated2 * BAD)+
            (numRated3 * OK) + (numRated4 * GOOD) + (numRated5 * GREAT)) /
            (numRated1 + numRated2 + numRated3 + numRated4 + numRated5);

    return averageRating;
}

/**
 * @brief This function displays the movie information
 *
 * @param theMovie
 * @return void
 */
void Movie::output(Movie& theMovie)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "Movie name: " << theMovie.getMovieName()
         << "\nMPPA rating: " << theMovie.getMpaaRating()
         << "\nAverage rating: " << theMovie.getAverage() << endl << endl;
}