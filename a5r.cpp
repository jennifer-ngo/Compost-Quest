#include <iostream>
using namespace std;
// g++ a5r.cpp

int main()
{
    string userInput;
    cout << endl << "Welcome to Compost Quest! Your goal is to start a composting program that uses students' food scraps to make compost." <<endl;
    cout << "How will you get the funding you need? Select an answer by typing A or B." << endl << endl;
    cout << "(A) Ask local businesses if they'd like to help out" << endl;
    cout << "(B) Apply for grants from the government" << endl << endl;
    cout << "> ";
    cin >> userInput;
    if(userInput == "a" || userInput == "A") // LOCAL BIZ
    {
        string userInput;
        cout << "Thankfully, George from George's Garden Essentials agrees to finance your project. Hooray!" << endl << endl;
        cout << "Recently, you've noticed that a lot of trash is being thrown into the bin for composting." << endl;
        cout << "Something needs to be done about this! What should you do?" << endl << endl;
        cout << "(A) Make posters that show what can and can't be composted" << endl;
        cout << "(B) Give a presentation on composting at the next school assembly" << endl << endl;
        cout << "> ";
        cin >> userInput;
        if(userInput == "a" || userInput == "A") // POSTERS
        {
            string userInput;
            cout << "You talk to some members of the Art Club, who are happy to paint the posters." << endl;
            cout << "However, they will need you to provide the correct information. Which of the following items can be composted?" << endl << endl;
            cout << "(A) Eggs, fish, milk" << endl;
            cout << "(B) Fruit peels, noodles, paper towels" << endl << endl;
            cout << "> ";
            cin >> userInput;
            if(userInput == "a" || userInput == "A") // WRONG FOODS
            {
                cout << "Unfortunately, that is incorrect. Dairy, such as eggs and milk, can't be composted." << endl;
                cout << "The same goes for meat such as fish, which can also attract unwanted pests and vermin to your compost." << endl;
                cout << "As the posters are being made, the science teacher sees them and informs everyone of the incorrect information. Whoops." << endl;
                cout << "The Art Club members are very annoyed and refuse to make any more posters. Oh well." << endl << endl;
                cout << "BAD ENDING" << endl << endl;
            }
            else if(userInput == "b" || userInput == "B") // RIGHT FOODS
            {
                cout << "That's correct! Any vegetable or fruit waste, such as peels, can be composted. Noodles and paper towels can be composted too." << endl;
                cout << "The Art Club paints beautiful posters, complete with detailed examples and pictures." << endl;
                cout << "After hanging them up, you notice a decrease in the amount of trash found in the compost bins. Good job!" << endl << endl;
                cout << "GOOD ENDING" << endl << endl;
            }
        }
        else if(userInput == "b" || userInput == "B") // PRESENTATION
        {
            string userInput;
            cout << "At the assembly, you show the process of composting and explain why everyone needs to put their waste in the right places." << endl;
            cout << "A girl raises her hand and asks: “But how is composting good for the environment?”" << endl;
            cout << "You respond, “Well, composting reduces the production of the harmful greenhouse gas…” Uh oh. What was its name again?" << endl << endl;
            cout << "(A) Methane" << endl;
            cout << "(B) Butane" << endl << endl;
            cout << "> ";
            cin >> userInput;
            if(userInput == "a" || userInput == "A") // METHANE
            {
                cout << "Satisfied with your answer, the girl gives you a thumbs up. At the end of your presentation, everyone applauds." << endl;
                cout << "In the next few days, you notice that students are starting to pay more attention and throw less trash in the compost pile." << endl;
                cout << "One student even tells you that after your speech, they realized that they were throwing away food scraps that could be composted. Great job!" << endl << endl;
                cout << "GOOD ENDING" << endl << endl;
            }
            else if(userInput == "b" || userInput == "B") // BUTANE
            {
                cout << "The girl looks confused, and another student raises their hand. “But isn't butane only found in natural gas? How would composting even help?”" << endl;
                cout << "Whoops. Thankfully, the science teacher steps in to give the right information: composting reduces the production of methane, which can be found in landfills." << endl;
                cout << "In the next few weeks, there isn't much change in the amount of trash that is thrown into the compost pile." << endl;
                cout << "Your classmates might know the right information now, but it seems like they have lost all respect for you." << endl << endl;
                cout << "BAD ENDING" << endl << endl;
            }     
        }
    }
    else if(userInput == "b" || userInput == "B") // GOV. GRANTS
    {
        string userInput;
        cout << "Your city is offering grants to schools with eco-friendly programs, such as your composting project." << endl;
        cout << "You talk with your vice principal, who fills out an application. A couple of weeks later, it gets accepted!" << endl;
        cout << "Your school is provided with enough financial resources to fully fund the composting program." << endl << endl;
        cout << "Now that you have what you need, it's time to start the project." << endl;
        cout << "Some of your team members are preparing the compost box, while others are trying to find more materials." << endl;
        cout << "What would you like to do?" << endl << endl;
        cout << "(A) Help prepare the compost box" << endl;
        cout << "(B) Help find more materials" << endl << endl;
        cout << "> ";
        cin >> userInput;
        if(userInput == "a" || userInput == "A") // LAYERS
        {
            string userInput;
            cout << "From the resources that you've read, you know that the compost box will need layers of both green and brown materials." << endl;
            cout << "However, you don't know which layer to start with. What will you do?" << endl << endl;
            cout << "(A) Start with a brown layer" << endl;
            cout << "(B) Start with a green layer" << endl << endl;
            userInput:
            cout << "> ";
            cin >> userInput;
            if(userInput == "a" || userInput == "A") // BROWN 1
            {
                cout << "You decide to start with some brown materials, such as twigs and woodchips, then continue alternating green and brown layers." << endl;
                cout << "Soon enough, the compost box is ready to go. Over the next few months, you and your teammates take turns tending to the compost box." << endl;
                cout << "To everyone's delight, it becomes a total success!" << endl << endl;
                cout << "GOOD ENDING" << endl << endl;
            }
            else if(userInput == "b" || userInput == "B") // GREEN 1
            {
                cout << "You decide to start with some green materials, including the food scraps retrieved from the cafeteria, and finish layering the compost box." << endl;
                cout << "Unfortunately, after a month, everyone notices that the compost pile is starting to become mushy and isn't making much progress." << endl;
                cout << "It turns out that you should have started the compost box with a layer of brown materials for better liquid absorbence and air circulation. Uh oh..." << endl << endl;
                cout << "BAD ENDING" << endl << endl;
            }
        }
        else if(userInput == "b" || userInput == "B") // FIND MORE BROWNS
        {
            string userInput;
            cout << "According to the science teacher, it seems like you will need more brown materials for the compost box." << endl;
            cout << "But what would count as brown materials?" << endl << endl;
            cout << "(A) Coffee grounds, food scraps, grass clippings" << endl;
            cout << "(B) Newspapers, wood branches, cardboard" << endl << endl;
            cout << "> ";
            cin >> userInput;
            if(userInput == "a" || userInput == "A") // GREEN 2
            {
                cout << "Sorry, that isn't correct. Brown materials are high in carbon." << endl;
                cout << "Although coffee grounds are brown, they are considered a green material because they are high in nitrogen." << endl;
                cout << "You are unable to find more brown materials in time, so your team members vote to kick you out from the team :(" << endl << endl;
                cout << "BAD ENDING" << endl << endl;
            }
            else if (userInput == "b" || userInput == "B") // BROWN 2
            {
                cout << "That is correct! You quickly find more brown materials to add to the compost box." << endl;
                cout << "Your team members applaud you for the quick work, and you are promoted to the president of the team. Hooray!" << endl << endl;
                cout << "GOOD ENDING" << endl << endl;
            }
        }
    }
}
