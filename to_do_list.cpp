#include<iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
const int max_size = 10;

class ToDoLists{
    private:
        string Tasks[max_size];
        int num_of_tasks;
    public:
        ToDoLists(){num_of_tasks = 0;}
        // 1. Add New Task 
        void AddNewTask(string new_task){
            if(num_of_tasks < max_size){
                Tasks[num_of_tasks] = new_task;
                num_of_tasks++;
                cout<<"\n\t\t\tTask Added Successfully\n"<<endl;
            }
            else{
                cout<<"\n\t\t\tYour To Do List is Full\n"<<endl;
            }
        }
        // 2. Edit Task 
        void EditTask(int index, string edit_task){
            if(index < num_of_tasks){
                Tasks[index] = edit_task;
                cout<<"\n\t\t\tTask Edited Successfully\n"<<endl;
            }
            else{
                cout<<"\n\t\t\tInvalid Task Number"<<endl;
                cout<<"\t\t\tYou have to choose tasks in range (1 : "<<num_of_tasks<<")" <<endl;
            }
        }
        // 3. Delete Task 
        void DeleteTask(int index){
            if(index < num_of_tasks){
                for (int i = index; i < num_of_tasks-1; i++)
                {
                    Tasks[i] = Tasks[i+1];
                }
                num_of_tasks--;
                cout<<"\n\t\t\tTask Deleted Successfully\n"<<endl;
            }
            else{
                cout<<"\n\t\t\tInvalid Task Number"<<endl;
                cout<<"\t\t\tYou have to choose tasks in range (1 : "<<num_of_tasks<<")" <<endl;
            } 
        }
        // 4. Show All Tasks 
        void ShowTasks(){
            if (num_of_tasks == 0)
            {
                 cout<<"\n\t\t\tYour To Do List is Empty\n"<<endl;
            }
            else{
                cout<<"\n\t\t\tYour To Do List\n"<<endl;
                cout<<"\t\t\t=====================================\n"<<endl;
                for (int i = 0; i < num_of_tasks; i++)
                {
                    cout<<"\t\t\t\t\t["<<i+1<<"]"<<Tasks[i]<<endl;
                }

                cout<<"\n\t\t\t====================================="<<endl;
            }
            
        }

};


int main(){
    ToDoLists my_tasks;
    int index,choice;
    string new_task,edit_task;

    do
    {
       cout<<"\n\t\t\t======= T O D O L I S T ==========\n\n"<<endl;
       cout<<"\t\t\t          1. Add New Task.           "<<endl;
       cout<<"\t\t\t          2. Edit    Task.           "<<endl;
       cout<<"\t\t\t          3. Delete  Task.           "<<endl;
       cout<<"\t\t\t          4. Show    Tasks.          "<<endl;
       cout<<"\t\t\t          5. Quit.                   "<<endl;
       cout<<"\n\n\t\t\t==================================\n"<<endl;
       cout<<"\t\t\tEnter your choice : ";cin>>choice;cout<<endl;
       switch (choice)
       {
        case 1:
            cout<<endl;
            cout<<"\n\t\t\tEnter your new task : ";
            cin.ignore();
            getline(cin,new_task);
            my_tasks.AddNewTask(new_task);
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            cout<<"\t\t\tEnter your task number : ";cin>>index;cout<<endl;
            cout<<"\n\t\t\tEnter your edit task : ";
            cin.ignore();
            getline(cin,edit_task);
            my_tasks.EditTask(index-1,edit_task);
            cout<<endl;
            break;
        case 3:
            cout<<endl;
            cout<<"\t\t\tEnter your task number : ";cin>>index;cout<<endl;
            my_tasks.DeleteTask(index-1);
            cout<<endl;
            break;
        case 4:
            printf("");
            getchar();
            cout<<endl;
            my_tasks.ShowTasks();
            cout<<endl;
            break;
       }
       printf("\t\t\tPress any key to continue...");
    getchar();
    system("cls");
    } while (choice!=5);
    

    return 0;
}
