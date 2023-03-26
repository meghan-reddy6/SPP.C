#include<stdio.h>
#include<stdlib.h>




int main(){
    int u_inp, cor_typ;
    float cur_attendance, req_attendance, classes_attended, total_classes, req_classes, con_classes, rem_classes,  max_attendance;
    float int_conv, tot_marks, sec_marks, pe_1, pe_2, quiz, assignments, total_int, req_marks, tar_marks;
    printf("*******************Welcome to Student Metric Calculator*********************\n");
    printf("Select the option\n");
    printf("1. Attendance Calculator\t");
    printf("2. Marks Converter\t");
    printf("\n                 3. Marks Calculator\t");
    printf("\nInput: ");
    scanf("\n%d",&u_inp);
    switch(u_inp)
    {
        case 1: 
        printf("***ATTENDANCE CALCULATOR***\t");
        printf("\nEnter your current attendance percentage: ");
        scanf("%f", &cur_attendance);

        printf("Enter the required attendance percentage: ");
        scanf("%f", &req_attendance);

        printf("Enter the total number of classes: ");
        scanf("%f", &total_classes);

        printf("Enter the total number of classes completed till now: ");
        scanf("%f", &con_classes);

        rem_classes = total_classes - con_classes;
        printf("Remaining classes : %.0f\n", rem_classes);

        classes_attended = ((cur_attendance /100) * con_classes);
        printf("\nClasses attended till now: %.0f", classes_attended);

        req_classes = (((req_attendance/100)*total_classes)-(classes_attended) );
        max_attendance = (((classes_attended + rem_classes)/(total_classes))*100);
        if(req_classes > rem_classes)
        {
            printf("\nYour required percent can't be reached");
            printf("\nYou can reach %.2f %% if you attend all classes from now", max_attendance);
        }
        else
        {
            printf("\nreqired no of classes to be attended : %.0f", req_classes);
        }
        break;

        case 2:
        printf("\t Marks converter");
        printf("\nExam conducted for: ");
        scanf("%f", &tot_marks);
        printf("\n Secured marks: ");
        scanf("%f", &sec_marks);
        printf("\nInternals converted to: ");
        scanf("%f",&int_conv);
        float conv_marks =(((sec_marks)/(tot_marks)) * int_conv);
        if(conv_marks > int_conv)
        {
            printf("\nPlease check the given values");
        }
        else{
            printf("\nYour converted marks : %.2f", conv_marks);
        }

        break;

        case 3:
        printf("Marks calculator \t");
    printf("Enter Periodical 1 marks/ Lab Experiments   :  ");
    scanf("%f", &pe_1);
    printf("Enter Periodical 2 marks/ Records           :  ");
    scanf("%f", &pe_2);
    printf("Enter Quiz marks + viva                     :  ");
    scanf("%f", &quiz);
    printf("Enter Assignment marks  + prj marks/End lab :  ");
    scanf("%f", &assignments);
    printf("Enter requried marks                        :  ");
    scanf("%f", &req_marks);
    total_int = pe_1 + pe_2 + quiz + assignments;
    printf("Your total internal marks                   : %.2f", total_int);
    printf("\nSelect the course type\n");
    printf("1 . 50 - 50 course \t");
    printf("2 . 65-  35 course \t");
    printf("3 . 70 - 30 course \t");
    printf("4 . 80 - 20 course \t");
    printf("\n Input : ");
    scanf("%d", &cor_typ);
    switch (cor_typ)
    {
    case 1:
        if (total_int <= 50)
        {
           tar_marks =  req_marks - total_int;
           if (tar_marks > 50)
           {
            printf(" You can't get your desired marks\n");
            printf("\nThe possible marks you can reach is : %.2f", total_int + 50.00);
           }
           else
           {
            printf("Required marks to reach your target : %.2f", tar_marks);

           }
        }
        else
        {
            printf("Enter valid internals\n");
        }
        break;
    case 2:
            if (total_int <= 65)
        {
           tar_marks =  req_marks - total_int;
           if (tar_marks > 35)
           {
            printf(" You can't get your desired marks\n");
            printf("If you score full in your end sem\n");
            printf("\nThe possible marks you can reach is : %.2f", total_int + 35.00);
           }
           else
           {
            printf("\nRequired marks to reach your target : %.2f", tar_marks);

           }
        }
        else
        {
            printf("Enter valid internals\n");
        }
        break;
        
        case 3:
         if (total_int <= 70)
        {
           tar_marks =  req_marks - total_int;
           if (tar_marks > 30)
           {
            printf(" You can't get your desired marks\n");
            printf("If you score full in your end sem\n");
            printf("\nThe possible marks you can reach is : %.2f", total_int + 30.00);
           }
           else
           {
            printf("\nRequired marks to reach your target : %.2f", tar_marks);

           }
        }
        else
        {
            printf("Enter valid internals\n");
        } 
        break;
    
        case 4: 
        if (total_int <= 80)
        {
           tar_marks =  req_marks - total_int;
           if (tar_marks > 20)
           {
            printf(" You can't get your desired marks\n");
            printf("\nThe possible marks you can reach is : %.2f", total_int + 20.00);
           }
           else
           {
            printf("Required marks to reach your target : %.2f", tar_marks);

           }
        }
        else
        {
            printf("Enter valid internals\n");
        }
        break;

    break;

    
    default:
       printf("Please enter a valid course type\n");

        break;
    }
        break;

        
        default : 
        printf("\nEnter a valid option");
        break;

     }



return 0;
}