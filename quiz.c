#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int answer;//answer entered by user
int correct_answer;//true or correct answer
int Physics_marks=0,chemistry_marks=0,Maths_Marks=0;//marks of each section
int physics_correct=0,physics_incorrect=0,chemistry_correct=0,chemistry_incorrect=0,maths_correct=0,maths_incorrect=0;//number of currect or incorrect question in each sesctions
//this section consist of all the question of physics section
void Physics_quiz()
{
    printf("\t\t\t\t\t\t\t__PHYSICS__\n");
    //question 1:
    printf("Question1:\n");
    printf("Two vessels of same volume contain the same ideal gas at same temperature.\nIf the pressure in the vessel be in ratio of 1:2, than\n");
    //options
    printf("\n(1) Ratio of Average Kinetic energy = 1:3\n");
    printf("(2) Ratio of Root mean square velocity = 1:2\n");
    printf("(3) Ratio of average velocity = 1:2\n");
    printf("(4) Root mean number of molecule = 1:2\n");
    printf("Your answer: ");
    //answer input by user
    scanf("%d",&answer);
    //correct answer of the question 1 of physics
    correct_answer=4;
    if(answer==correct_answer)
    {
        Physics_marks=Physics_marks+4;
        physics_correct=physics_correct+1;
    }
    else{
        Physics_marks=Physics_marks-1;
        physics_incorrect=physics_incorrect+1;
    }
    //question 2:
    printf("\n\nQuestion2:\n");
    printf("The equation of a wave on a string having linear mass density 0.07 Kgm^-1 is given as \ny= 0.03(m)cos[2*3.14(t/0.08-x/0.8)]\nthe tension in the string is:");
    //options
    printf("\n(1) 14\n");
    printf("(2) 3.5\n");
    printf("(3) 7\n");
    printf("(4) 70\n");
    //answer input by user
    printf("Your answer: ");
    scanf("%d",&answer);
    //correct answer of the question 2 of physics
    correct_answer=3;
    if(answer==correct_answer)
    {
        Physics_marks=Physics_marks+4;
        physics_correct=physics_correct+1;
    }
    else{
        Physics_marks=Physics_marks-1;
        physics_incorrect=physics_incorrect+1;
    }
    //question 3:
    printf("\n\nQuestion3:\n");
    printf("A and B are two identical masses and A is moving with speed 5m/s and B is at rest.\nIf A collides with B elastically, speed of A after collision will be:-");
    //options
    printf("\n(1) 5/2 m/s\n");
    printf("(2) 5 m/s\n");
    printf("(3) 0 m/s\n");
    printf("(4) 2 m/s\n");
    printf("Your answer: ");
    //answer input by user
    scanf("%d",&answer);
    //correct answer of the question 3 of physics
    correct_answer=1;
    if(answer==correct_answer)
    {
        Physics_marks=Physics_marks+4;
        physics_correct=physics_correct+1;
    }
    else{
        Physics_marks=Physics_marks-1;
        physics_incorrect=physics_incorrect+1;
    }
    printf("\n__________________________________________________________________________________________________________________________________________________________________________________________________\n");
   
}
//this section consist of all the question of chemistry quiz
void Chemistry_quiz()
{
    printf("\t\t\t\t\t\t\t__CHEMISTRY__\n");
    //question 1:
    printf("Question1:\n");
    printf("If in urea [CO(NH2)2] there are 20 gm-atoms of nitrogen present than the mass of urea will be-\n");
    //options
    printf("\n(1) 600 gm\n");
    printf("(2) 60 gm\n");
    printf("(3) 6 kg\n");
    printf("(4) 120 gm\n");
    printf("Your answer: ");
    //answer input by user
    scanf("%d",&answer);
    //correct answer of the question 1 of chemistry
    correct_answer=1;
    if(answer==correct_answer)
    {
        chemistry_marks=chemistry_marks+4;
        chemistry_correct=chemistry_correct+1;
    }
    else{
        chemistry_marks=chemistry_marks-1;
        chemistry_incorrect=chemistry_incorrect+1;
    }
    //question 2:
    printf("\n\nQuestion2:\n");
    printf("Select incorrect option about cubic crystal system-");
    //options
    printf("\n(1) packing fraction along body diagonal in SC is 1/root(3)\n");
    printf("(2) 3.5\n");
    printf("(3) 7\n");
    printf("(4) 70\n");
    printf("Your answer: ");
    //answer input by user
    scanf("%d",&answer);
    //correct answer of the question 2 of chemistry
    correct_answer=3;
    if(answer==correct_answer)
    {
        chemistry_marks=chemistry_marks+4;
        chemistry_correct=chemistry_correct+1;
    }
    else{
        chemistry_marks=chemistry_marks-1;
        chemistry_incorrect=chemistry_incorrect+1;
    }
    //question 3:
    printf("\n\nQuestion3:\n");
    printf("For a second order reaction R -> p, time taken to reduce the concentration of R up to one forth of initial value,\nis how many times the half life");
    //options
    printf("\n(1) one\n");
    printf("(2) two\n");
    printf("(3) three\n");
    printf("(4) four\n");
    printf("Your answer: ");
    //answer input by user
    scanf("%d",&answer);
    //correct answer of the question 3 of chemistry
    correct_answer=3;
    if(answer==correct_answer)
    {
        chemistry_marks=chemistry_marks+4;
        chemistry_correct=chemistry_correct+1;
    }
    else{
        chemistry_marks=chemistry_marks-1;
        chemistry_incorrect=chemistry_incorrect+1;
    }
    printf("\n___________________________________________________________________________________________________________________________________________________________________________________________\n");
   
}
//this section consist of all the question of maths section
void Maths_quiz()
{
    printf("\t\t\t\t\t\t\t__MATHEMATICS__\n");
    //question 1:
    printf("Question1:\n");
    printf("The equation x + y + z = 6, x + 2y +3z = 10, x + 2y + mz = n give infinite number of values of triplet (x,y,z) if-\n");
    //options
    printf("\n(1) m = 3, n belongs to R\n");
    printf("(2) m = 3, n is not equal to 10\n");
    printf("(3) m=3,n=10\n");
    printf("(4) none of these\n");
    printf("Your answer: ");
    //answer input by user
    scanf("%d",&answer);
    //correct answer of the question 1 of maths
    correct_answer=3;
    if(answer==correct_answer)
    {
        Maths_Marks=Maths_Marks+4;
        maths_correct=maths_correct+1;
    }
    else{
        Maths_Marks=Maths_Marks-1;
        maths_incorrect=maths_incorrect+1;
    }
    //question 2:
    printf("\n\nQuestion2:\n");
    printf("The Equation of bisector of the lines represented by\n\t(y-mx)(y+mx) + 2y + 1 = 0 are-");
    //options
    printf("\n(1) x = 0, y = 0\n");
    printf("(2) x = 0, y = 1\n");
    printf("(3) x= 0, y = -1\n");
    printf("(4) x = -1, y = 0\n");
    printf("Your answer: ");
    //answer input by user
    scanf("%d",&answer);
    //correct answer of the question 2 of maths
    correct_answer=3;
    if(answer==correct_answer)
    {
        Maths_Marks=Maths_Marks+4;
        maths_correct=maths_correct+1;
    }
    else{
        Maths_Marks=Maths_Marks-1;
        maths_incorrect=maths_incorrect+1;
    }
    //question 3:
    printf("\n\nQuestion3:\n");
    printf("The curve represented by x = 3(cost+sint), y = 4(cost - sint), (where t is a parameter) is- ");
    //options
    printf("\n(1) Ellipse\n");
    printf("(2) Parabola\n");
    printf("(3) Hyperbola\n");
    printf("(4) circle\n");
    printf("Your answer: ");
    //answer input by user
    scanf("%d",&answer);
    //correct answer of the question 3 of maths
    correct_answer=1;
    if(answer==correct_answer)
    {
        Maths_Marks=Maths_Marks+4;
        maths_correct=maths_correct+1;
    }
    else{
        Maths_Marks=Maths_Marks-1;
        maths_incorrect=maths_incorrect+1;
    }
    printf("\n__________________________________________________________________________________________________________________________________________________________________________________________\n");


}

//this is a section function which is used to ask user to which sectin of paper he want to attend first and then in succession
void Section()          
{
    //there are overall three section physics, chemistry, mathematics
    //which_section will first take input than next_section after completing first section
    int which_section,next_section; 
    printf("Enter: 1 to attempt Physics \n\t2 to attempt Chemistry \n\t3 to attempt Maths\n");
    scanf("%d",&which_section);
    if(which_section==1)
    {
        Physics_quiz();
        printf("\n\nEnter: 1 to attempt Chemistry \n\t2 to attempt Maths \n");
        scanf("%d",&next_section);
        if(next_section==1)
        {
           Chemistry_quiz();
           Maths_quiz();
        }
        if(next_section==2)
        {
            Maths_quiz();
            Chemistry_quiz();
        }
        
    }
    if(which_section==2)
    {
        Chemistry_quiz(); 
        printf("\n\nEnter: 1 to attempt Physics \n\t2 to attempt Maths \n");
        scanf("%d",&next_section);
        if(next_section==1)
        {
            Physics_quiz();
            Maths_quiz();
        }
        if(next_section==2)
        {
            Maths_quiz();
            Physics_quiz();
        }
         
    }
    if(which_section==3)
    {
        Maths_quiz();
        printf("\n\nEnter: 1 to attempt Physics \n\t2 to attempt Chemistry \n");
        scanf("%d",&next_section);
        if(next_section==1)
        {
            Physics_quiz();
            Chemistry_quiz();
        }
        if(next_section==2)
        {
            Chemistry_quiz();
            Physics_quiz();
        }
    }
}
//instruction function which print instruction of the mock test consisting of marking scheme and question type
void instruction()
{
    printf("_____________________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("\4 The quiz comprises of three sections:\n1.)Physics \n2.)Chemistry \n3.)Mathematics\n\n\4 If you entered any of the one sections you cannot leave until attempting all questions\n");
    printf("\4 All question are Multiple Choice Question(MCQ) based\n");
    printf("\4 Answering every question is compulsury\n");
    printf("\4 Each section contain 3 questions Each\n");
    printf("\4 Enter integer value such as 1, 2 ,3 ,4 for correct options\n");
    printf("------------------------------------------------------------------------------------------>\n");
    //marking scheme
    printf("\5 Marking Scheme:\n\n");
    printf("Each question is of: 4(four) Marks each\n");
    printf("Negative marking   : -1(one) Marks for each wrong attempt\n");
    printf("Each section is of : 12(Twelve) Marks \n");
    printf("Total quiz marks   : 36(Thirty Six) Marks\n");
    printf("____________________________________________________________________________________________________________________________________________________________________________________________\n");
    Section();
}
//welcome screen of our quiz 
void welcome()
{
    //in is input from user to know whether he/she want to start a quiz or not
    int in;          
    printf("\t\t\t\t\t\t\t\t\t\t\tWelcome to the Quiz Window\n");
    printf("\nEnter 1 to know the instruction and pattern of quiz:\n\n");
    scanf("%d",&in);
    //if user want to start the quiz we move to instruction function
    if(in==1)
    {
        instruction();
    }
    else
    {
        printf("!!Are you sure you wan't to exit!! \n enter 0 to exit else enter 1 to start ");
        scanf("%d",&in);
        if(in==0)
        {
            
        }
        else
        {
            instruction();
        }
    }
}
//function to return total marks obtained
int total_marks_obtained()
{
    int total=Maths_Marks+Physics_marks+chemistry_marks;
    return total;
}
//function consisting of marks in physics
int physics_mark()
{
    return Physics_marks;
}
//function consisting of marks in chemistry
int chemistry_mark()
{
    return chemistry_marks;
}
//function consisting of marks in maths
int Maths_Mark()
{
    return Maths_Marks;
}
//function which calculate average marks obtained
void average_marks_obtained()
{
    double average=((((float)Maths_Marks+(float)Physics_marks+(float)chemistry_marks)/36)*100);
    printf("Average marks obtained = %0.2f ",average);
}
//function which decide in which subject you need improvement
void improvment_subject()
{
    //using if-else statement to compare marks obtained in different subject and to tell in which subject improvement is needed
    if(Physics_marks<Maths_Marks&&Physics_marks<chemistry_marks&&Physics_marks<8)
    {
        printf("\nNeed improvement in *physics* got only %d marks\n",Physics_marks);
        
    }
    if(Physics_marks>Maths_Marks&&chemistry_marks>Maths_Marks&&Maths_Marks<8)
    {
        printf("\nNeed improvement in *Maths* got only %d marks\n",Maths_Marks);
    }
    if(Physics_marks>chemistry_marks&&chemistry_marks<Maths_Marks&&chemistry_marks)
    {
        printf("\nNeed improvement in *Chemistry* got only %d marks\n",chemistry_marks);
    }
    if(Physics_marks==chemistry_marks&&Physics_marks<Maths_Marks&&Physics_marks<8)
    {
        printf("\nNeed improvement in *physics* and *chemistry* marks are less than minimum required marks\n");
    }
    if(Physics_marks==Maths_Marks&&Physics_marks<chemistry_marks&&Physics_marks<8)
    {
        printf("\nNeed improvement in *physics* and *maths* marks are less than minimum required marks\n");
    }
    if(chemistry_marks==Maths_Marks&&Physics_marks>chemistry_marks&&chemistry_marks<8)
    {
        printf("\nNeed improvement in *chemistry* and *maths* marks are less than minimum required marks\n");
    }
    if(chemistry_marks+Physics_marks+Maths_Marks>20){
        printf("\nGood going keep it up!! overall marks are %d",chemistry_marks+Maths_Marks+Physics_marks); 
    }
    if(chemistry_marks==Maths_Marks&&Maths_Marks==Physics_marks&&Physics_marks<8)
    {
        printf("\nneed improvement in all the three subjects\n");
    }
    else
    {
        printf("\nDoing well keep practising\n");
    }

}
//function which is called at last to exit or end quiz
void end()
{
    printf("To improve your performance keep practising\n");
    printf("Thanks for attending our mock test\n");
    printf("To attend such more tests continue visiting us\n");
    printf("##################################################################################### End ###################################################################################################\n");
 
}
int main()
{
    //displayng current time and date before starting quiz
    time_t current;
    time(&current);
    printf("%s",ctime(&current));
    printf("\t\t\t\t\t\t\t\t\t\t\t\tMock Test\n");
    int i;//i is variable used to take some input from user and make decisions
    //To know how much time taken to attemp quiz we use time method
    clock_t t;
    //to know total time taken by a student in quiz we use clock() function
    t=clock();
    welcome();
    t=clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;//IN SECONDS
    printf("time taken = %0.2f minutes",time_taken/60);//Time in Minutes to be displayed on output
    printf("\n____________________________________________________________________________Quiz completed succesfully_________________________________________________________________________________\n");
    printf("\nTo see total marks obtained enter: 1\n");
    scanf("%d",&i);
    //print total marks obtained at output
    printf("\nTOTAL MARKS : %d\n",total_marks_obtained());
    printf("\n........................................................................................................................................................................................\n");
    //to see overall performance in quiz
    printf("\nTo see your overall performance press any alphanumeric key and press enter");
    scanf("%d",&i);
    printf("\nYour Overall Performance\n");
    //correct and incorrect answers in each sections
    printf("\n\32 Physics Correct Answers = %d\t\t\32 Physics Incorrect Answers = %d\n",physics_correct,physics_incorrect);
    printf("\32 Chemistry Correct Answers = %d\t\t\32 Chemistry Incorrect Answers = %d\n",chemistry_correct,chemistry_incorrect);
    printf("\32 Maths Correct Answers = %d\t\t\32 Maths Incorrect Answers = %d\n",maths_correct,maths_incorrect);
    //section wise score
    printf("\n Physics Score = %d\t\t\t Chemistry Score = %d\t\t\t Maths Score = %d\t\t\n",physics_mark(),chemistry_mark(),Maths_Mark());
    printf("******************************************************************************************************************************************************************************************\n");
    printf("Total question attempted correctly : %d\n",chemistry_correct+physics_correct+maths_correct);
    printf("Total incorrect attempt are : %d\n",chemistry_incorrect+physics_incorrect+maths_incorrect);
    //total negative marking happened 
    printf("Total negative marking is : %d\n",(chemistry_incorrect+physics_incorrect+maths_incorrect)*(-1));
    printf("Total marks obtained by all correct answers : %d\n",(chemistry_correct+physics_correct+maths_correct)*4);
    printf("Total marks : %d\n",total_marks_obtained());
    //average marks obtained
    average_marks_obtained();
    printf("\nTo see which subject need to be improved enter any alphanumerical key and press enter: ");
    scanf("%d",&i);
    printf("\n_________________________________________________________________________________Subject need to be improved________________________________________________________________________________\n");
    improvment_subject();
    end();
    
}