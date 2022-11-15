import datetime
import time

#this section consist of all the question of physics section
def Physics_quiz():
    #phsics_marks consist of marks of physics subject
    global Physics_marks
    #total correct and incorrect question of physics
    global physics_correct
    global physics_incorrect
    Physics_marks=0
    physics_correct=0
    physics_incorrect=0
    print("\t\t\t\t\t\t\t__PHYSICS__\n")
    #question 1:
    print("Question1:\n")
    print("Two vessels of same volume contain the same ideal gas at same temperature.\nIf the pressure in the vessel be in ratio of 1:2, than\n")
    #options
    print("\n(1) Ratio of Average Kinetic energy = 1:3\n")
    print("(2) Ratio of Root mean square velocity = 1:2\n")
    print("(3) Ratio of average velocity = 1:2\n")
    print("(4) Root mean number of molecule = 1:2\n")
    print("Your answer: ")
    #answer entered by user
    answer=int(input())
    #correct answer of question 1 of physics
    correct_answer=4
    if(answer==correct_answer):
        Physics_marks+=4
        physics_correct+=1
    
    else:
        Physics_marks-=1
        physics_incorrect+=1
    
    #question 2:
    print("\n\nQuestion2:\n")
    print("The equation of a wave on a string having linear mass density 0.07 Kgm^-1 is given as \ny= 0.03(m)cos[2*3.14(t/0.08-x/0.8)]\nthe tension in the string is:")
    #options
    print("\n(1) 14\n")
    print("(2) 3.5\n")
    print("(3) 7\n")
    print("(4) 70\n")
    print("Your answer: ")
    answer=int(input())
    #correct answer of question 2 of physics 
    correct_answer=3
    if(answer==correct_answer):
        Physics_marks=Physics_marks+4
        physics_correct=physics_correct+1
    
    else:
        Physics_marks=Physics_marks-1
        physics_incorrect=physics_incorrect+1
    
    #question 3:
    print("\n\nQuestion3:\n")
    print("A and B are two identical masses and A is moving with speed 5m/s and B is at rest.\nIf A collides with B elastically, speed of A after collision will be:-")
    #options
    print("\n(1) 5/2 m/s\n")
    print("(2) 5 m/s\n")
    print("(3) 0 m/s\n")
    print("(4) 2 m/s\n")
    print("Your answer: ")
    answer=int(input())
    #correct answer of question 3 of physics 
    correct_answer=1
    if(answer==correct_answer):
        Physics_marks=Physics_marks+4
        physics_correct=physics_correct+1
    
    else:
        Physics_marks=Physics_marks-1
        physics_incorrect=physics_incorrect+1
    
    print("\n__________________________________________________________________________________________________________________________________________________________________________________________________\n")


#this section consist of all the question of chemistry quiz
def Chemistry_quiz():
    global chemistry_marks
    global chemistry_correct
    global chemistry_incorrect
    chemistry_marks=0
    chemistry_correct=0
    chemistry_incorrect=0                       
    print("\t\t\t\t\t\t\t__CHEMISTRY__\n")
    #question 1:
    print("Question1:\n")
    print("If i urea [CO(NH2)2] there are 20 gm-atoms of nitrogen present than the mass of urea will be-\n")
    #options
    print("\n(1) 600 gm\n")
    print("(2) 60 gm\n")
    print("(3) 6 kg\n")
    print("(4) 120 gm\n")
    print("Your answer: ")
    answer=int(input())
    #correct answer of question 1 of chemistry 
    correct_answer=1
    if(answer==correct_answer):
    
        chemistry_marks=chemistry_marks+4
        chemistry_correct=chemistry_correct+1
    
    else:
        chemistry_marks=chemistry_marks-1
        chemistry_incorrect=chemistry_incorrect+1
    
    #question 2:
    print("\n\nQuestion2:\n")
    print("Select incorrect option about cubic crystal system-")
    #options
    print("\n(1) packing fraction along body diagonal in SC is 1/root(3)\n")
    print("(2) 3.5\n")
    print("(3) 7\n")
    print("(4) 70\n")
    print("Your answer: ")
    answer=int(input())
    #correct answer of question 2 of chemistry 
    correct_answer=3
    if(answer==correct_answer):
    
        chemistry_marks=chemistry_marks+4
        chemistry_correct=chemistry_correct+1
    
    else:
        chemistry_marks=chemistry_marks-1
        chemistry_incorrect=chemistry_incorrect+1
    
    #question 3:
    print("\n\nQuestion3:\n")
    print("For a second order reaction R -> p, time taken to reduce the concentration of R up to one forth of initial value,\nis how many times the half life")
    #options
    print("\n(1) one\n")
    print("(2) two\n")
    print("(3) three\n")
    print("(4) four\n")
    print("Your answer: ")
    answer=int(input())
    #correct answer of question 3 of chemistry 
    correct_answer=3
    if(answer==correct_answer):
    
        chemistry_marks=chemistry_marks+4
        chemistry_correct=chemistry_correct+1
    
    else:
        chemistry_marks=chemistry_marks-1
        chemistry_incorrect=chemistry_incorrect+1
    
    print("\n___________________________________________________________________________________________________________________________________________________________________________________________\n")
   

#this section consist of all the question of maths section
def Maths_quiz():
    global Maths_Marks
    global maths_correct
    global maths_incorrect
    maths_correct=0
    Maths_Marks=0
    maths_incorrect=0
    print("\t\t\t\t\t\t\t__MATHEMATICS__\n")
    #question 1:
    print("Question1:\n")
    print("The equation x + y + z = 6, x + 2y +3z = 10, x + 2y + mz = n give infinite number of values of triplet (x,y,z) if-\n")
    #options
    print("\n(1) m = 3, n belongs to R\n")
    print("(2) m = 3, n is not equal to 10\n")
    print("(3) m=3,n=10\n")
    print("(4) none of these\n")
    print("Your answer: ")
    answer=int(input())
    #correct answer of question 1 of maths 
    correct_answer=3
    if(answer==correct_answer):
    
        Maths_Marks=Maths_Marks+4
        maths_correct=maths_correct+1
    
    else:
        Maths_Marks=Maths_Marks-1
        maths_incorrect=maths_incorrect+1
    
    #question 2:
    print("\n\nQuestion2:\n")
    print("The Equation of bisector of the lines represented by\n\t(y-mx)(y+mx) + 2y + 1 = 0 are-")
    #options
    print("\n(1) x = 0, y = 0\n")
    print("(2) x = 0, y = 1\n")
    print("(3) x= 0, y = -1\n")
    print("(4) x = -1, y = 0\n")
    print("Your answer: ")
    answer=int(input())
    #correct answer of question 2 of maths 
    correct_answer=3
    if(answer==correct_answer):
    
        Maths_Marks=Maths_Marks+4
        maths_correct=maths_correct+1
    
    else:
        Maths_Marks=Maths_Marks-1
        maths_incorrect=maths_incorrect+1
    
    #question 3:
    print("\n\nQuestion3:\n")
    print("The curve represented by x = 3(cost+sint), y = 4(cost - sint), (where t is a parameter) is- ")
    #options
    print("\n(1) Ellipse\n")
    print("(2) Parabola\n")
    print("(3) Hyperbola\n")
    print("(4) circle\n")
    print("Your answer: ")
    answer=int(input())
    #correct answer of question 3 of maths 
    correct_answer=1
    if(answer==correct_answer):
    
        Maths_Marks=Maths_Marks+4
        maths_correct=maths_correct+1
    
    else:
        Maths_Marks=Maths_Marks-1
        maths_incorrect=maths_incorrect+1
    
    print("\n__________________________________________________________________________________________________________________________________________________________________________________________\n")
   


#this is a section function which is used to change section from one to other
def Section():           

    #which_section will first take input than next_section
    print("Enter: 1 to attempt Physics \n\t2 to attempt Chemistry \n\t3 to attempt Maths\n")
    which_section=int(input())
    if(which_section==1):
        Physics_quiz()
        print("\n\nEnter: 1 to attempt Chemistry \n\t2 to attempt Maths \n")
        next_section=int(input())
        if(next_section==1):
           Chemistry_quiz()
           Maths_quiz()
        if(next_section==2):
            Maths_quiz()
            Chemistry_quiz()
        
        
    
    if(which_section==2):
    
        Chemistry_quiz() 
        print("\n\nEnter: 1 to attempt Physics \n\t2 to attempt Maths \n")
        next_section=int(input())
        if(next_section==1):
        
            Physics_quiz()
            Maths_quiz()
        
        if(next_section==2):
        
            Maths_quiz()
            Physics_quiz()
        
         
    
    if(which_section==3):
    
        Maths_quiz()
        print("\n\nEnter: 1 to attempt Physics \n\t2 to attempt Chemistry \n")
        next_section=int(input())
        if(next_section==1):
            Physics_quiz()
            Chemistry_quiz()
        
        if(next_section==2):
            Chemistry_quiz()
            Physics_quiz()
        


#instruction function which print instruction of the mock test
def instruction():

    print("_____________________________________________________________________________________________________________________________________________________________________________________________\n")
    print("\4 The quiz comprises of three sections:\n1.)Physics \n2.)Chemistry \n3.)Mathematics\n\n\4 If you entered any of the one sections you cannot leave until attempting all questions\n")
    print("\4 All question are Multiple Choice Question(MCQ) based\n")
    print("\4 Answering every question is compulsury\n")
    print("\4 Each section contain 3 questions Each\n")
    print("\4 Enter integer value such as 1, 2 ,3 ,4 for correct options\n")
    print("------------------------------------------------------------------------------------------>\n")
    #marking scheme
    print("\5 Marking Scheme:\n\n")
    print("Each question is of: 4(four) Marks each\n")
    print("Negative marking   : -1(one) Marks for each wrong attempt\n")
    print("Each section is of : 12(Twelve) Marks \n")
    print("Total quiz marks   : 36(Thirty Six) Marks\n")
    print("____________________________________________________________________________________________________________________________________________________________________________________________\n")
    Section()

#welcome screen of our quiz 
def welcome():
    #in is input from user to know whether he/she want to start a quiz or not 
    print("\t\t\t\t\t\t\t\t\t\t\tWelcome to the Quiz Window\n")
    print("\nEnter 1 to know the instruction and pattern of quiz:\n\n")
    inp=int(input())
    #if user want to start the quiz we move to instruction function
    if(inp==1):
    
        instruction()
    
    else:
    
        print("!!Are you sure you wan't to exit!! \n enter 0 to exit else enter 1 to start ")
        inp=int(input())
        if(inp==1):
            instruction()
        
    
#total marks obtained
def total_marks_obtained():
    total=int(Maths_Marks)+int(Physics_marks)+int(chemistry_marks)
    return total

#physics mark
def physics_mark():

    return Physics_marks

#chemistry marks
def chemistry_mark():

    return chemistry_marks

#maths marks
def Maths_Mark():

    return Maths_Marks

#average marks obtained
def average_marks_obtained():

    average=(((Maths_Marks+Physics_marks+chemistry_marks)/36)*100)
    print("Average marks obtained = {:.2f}".format(average))

#subject in which improvements is needed or has got less marks as compared to other subject
def improvment_subject():
    if(Physics_marks<Maths_Marks and Physics_marks<chemistry_marks and Physics_marks<8):
        print("\nNeed improvement in *physics* got only" ,Physics_marks, "marks\n")
        
    if(Physics_marks>Maths_Marks and chemistry_marks>Maths_Marks and Maths_Marks<8):
        print("\nNeed improvement in *Maths* got only" ,Maths_Marks," marks\n")
    if(Physics_marks>chemistry_marks and chemistry_marks<Maths_Marks and chemistry_marks):
    
        print("\nNeed improvement in *Chemistry* got only ",chemistry_marks, " marks\n")
    if(Physics_marks==chemistry_marks and Physics_marks<Maths_Marks and Physics_marks<8):
       print("\nNeed improvement in *physics* and *chemistry* marks are less than minimum required marks\n")
    
    if(Physics_marks==Maths_Marks and Physics_marks<chemistry_marks and Physics_marks<8):
        print("\nNeed improvement in *physics* and *maths* marks are less than minimum required marks\n");
    
    if(chemistry_marks==Maths_Marks and Physics_marks>chemistry_marks and chemistry_marks<8):
        print("\nNeed improvement in *chemistry* and *maths* marks are less than minimum required marks\n")
    if((chemistry_marks+Physics_marks+Maths_Marks)>20):
        print("\nGood going keep it up!! Overall marks are ",chemistry_marks+Physics_marks+Maths_Marks)    
    
    if(chemistry_marks==Maths_Marks and Maths_Marks==Physics_marks and Physics_marks<8):
    
        print("\nneed improvement in all the three subjects\n")
    
    else:
    
        print("\nDoing well keep practising\n")
def End():
    print("\4To improve your performance keep practising")
    print("\4Thanks for attending our mock test")
    print("\4To attend such more tests continue visiting us\n")
    print("##################################################################################### End ###################################################################################################\n")
    
def main():
    #the current date and time are printed 
    now=datetime.datetime.now()
    print("Current date and time : ")
    print(now.strftime("%Y-%m-%d %H:%M:%S"))
    print("\t\t\t\t\t\t\t\t\t\t\t\tMock Test\n")
    #i is variable used to take some input from user and make decisions
    #To know how much time taken to attemp quiz we use time method
    start_time=time.time()
    welcome()
    end_time=time.time()
    #printing time taken to complete the quiz
    time_taken = end_time-start_time;#IN SECONDS
    print("time taken = {:.2f}".format(time_taken/60)," minutes")
    print("\n____________________________________________________________________________Quiz completed succesfully_________________________________________________________________________________\n")
    print("\nTo see total marks obtained enter: 1\n")
    i=int(input())
    total=Physics_marks+chemistry_marks+Maths_Marks
    #total marks obtained
    print("\nTOTAL MARKS : ",total,"\n")
    print("\n........................................................................................................................................................................................\n")
    print("\nTo see your overall performance press any alphanumeric key and press enter")
    i=int(input())
    print("\nYour Overall Performance\n")
    print("\n\32 Physics Correct Answers = ",physics_correct,"\t\t\32 Physics Incorrect Answers = ",physics_incorrect,"\n")
    print("\32 Chemistry Correct Answers =" ,chemistry_correct,"\t\32 Chemistry Incorrect Answers = ",chemistry_incorrect,"\n")
    print("\32 Maths Correct Answers = ",maths_correct,"\t\t\32 Maths Incorrect Answers = ",maths_incorrect,"\n")
    print("\n Physics Score = ",physics_mark(),"\t\t\t Chemistry Score = ",chemistry_mark(),"\t\t\t Maths Score = ",Maths_Mark(),"\t\t\n")
    print("******************************************************************************************************************************************************************************************\n")
    print("Total question attempted correctly : ",chemistry_correct+physics_correct+maths_correct,"\n")
    print("Total incorrect attempt are : ",chemistry_incorrect+physics_incorrect+maths_incorrect,"\n")
    #total negative marking printing
    print("Total negative marking is : ",(chemistry_incorrect+physics_incorrect+maths_incorrect)*(-1),"\n")
    print("Total marks obtained by all correct answers : ",(chemistry_correct+physics_correct+maths_correct)*4,"\n")
    print("Total marks : ",total_marks_obtained(),"\n")
    #to print average marks obtained
    average_marks_obtained()
    print("\n_________________________________________________________________________________Subject need to be improved________________________________________________________________________________\n")
    #calling improvement subject to know which subject need to be improved
    i=int(input("To see subject you need improvements enter any alphanumeric key and press enter:"))
    improvment_subject()
    End()
if __name__=="__main__":
    main()    

