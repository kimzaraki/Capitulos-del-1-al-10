constexpr int numberOfStudents{5};
int testScores[numberOfStudents]{};
testScores[2]=76;

enum StudentsNames
{
    kenny,//0
    kyle,//1
    stan,//2
    butters,//3
    cartman,//4
    max_students//5
};

int main()
{
    int testScores[max_students]{};
    testScores[stan]=76;

    return 0;
}