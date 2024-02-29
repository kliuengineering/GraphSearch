#include <iostream>
#include <vector>
#include <string>
#include <iomanip>


// matrix is generated using python
void CreateMatrixCanada(std::vector<std::string> &provinces_list, std::vector<std::vector<int>> &adjacency_matrix)
{
    // All provinces
    provinces_list =
    {
        "BC", "AB", "SK", "MB", "ON", "QC", "NL", "NB", "NS", "PE", "YT", "NT", "NU"
    };

    // Adjacency matrix initialization
    adjacency_matrix =
    {
        //BC AB SK MB ON QC NL NB NS PE YT NT NU
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // BC
        {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // AB
        {0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // SK
        {0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0}, // MB
        {0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0}, // ON
        {0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0}, // QC
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}, // NL
        {0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0}, // NB
        {0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0}, // NS
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}, // PE
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1}, // YT
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1}, // NT
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0}  // NU
    };
}


// matrix is generated using python
void CreateMatrixUS(std::vector<std::string>& states_list, std::vector<std::vector<int>>& adjacency_matrix)
{
    const int MAX = 51;
   
        // All states and selected territories with full names
        states_list = 
        {
                "Washington", "Delaware", "District of Columbia", "Wisconsin", "West Virginia", "Hawaii", "Florida", "Wyoming",
                "New Hampshire", "New Jersey", "New Mexico", "Texas", "Louisiana", "North Carolina", "North Dakota", "Nebraska",
                "Tennessee", "New York", "Pennsylvania", "California", "Nevada", "Virginia", "Colorado", "Alaska", "Alabama",
                "Arkansas", "Vermont", "Illinois", "Georgia", "Indiana", "Iowa", "Oklahoma", "Arizona", "Idaho", "Connecticut",
                "Maine", "Maryland", "Massachusetts", "Ohio", "Utah", "Missouri", "Minnesota", "Michigan", "Rhode Island",
                "Kansas", "Montana", "Mississippi", "South Carolina", "Kentucky", "Oregon", "South Dakota"
        };

        std::cout << "states_list size is -> " << states_list.size() << std::endl;

        // Initialize the adjacency matrix here as required
        //adjacency_matrix.resize(MAX, std::vector<int>(MAX, 0));

        // Adding adjacency
        adjacency_matrix =
        { 
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0} 
        };

}


// matrix.print implementation
void PrintMatrix(const std::vector<std::string> &provinces_list, const std::vector<std::vector<int>> &adjacency_matrix)
{
    // Print the adjacency matrix with headers
    std::cout << "    ";
    for (const auto& p : provinces_list) std::cout << p << " ";
    std::cout << "\n";

    for (size_t i = 0; i < provinces_list.size(); i++)
    {
        
        std::cout << "    ";
        for (size_t j = 0; j < provinces_list.size(); j++)
        {
            std::cout << adjacency_matrix[i][j] << "  ";
        }
        std::cout << provinces_list[i] << " ";
        std::cout << "\n";
    }
}


// generalized graph
class Graph
{
private:

    // list of provinces/states of the country
    std::vector< std::string      > obj_list;

    // adjacency matrix 
    std::vector< std::vector<int> > adj_matrix;

    // i need to implement queue for BFS and stack for DFS, this is fun...
    class Dlist
    {
    public:
        struct Node
        {
            Node* previous;
            Node* next;
            std::string data;

            Node(Node* previous = nullptr, Node* next = nullptr, std::string data = "") : previous(previous), next(next), data(data) {};
        };
        Node* head;
        Node* tail;

        Dlist() : head(nullptr), tail(nullptr) {}
        ~Dlist()
        {
            while (head)
            {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

        bool is_empty(void)
        {
            return !head && !tail;
        }

        /*
        for queue() implementation - 
        1) enqueue
        2) dequeue
        */ 
        void enqueue(const std::string &data)
        {
            Node* new_node;

            if (!head && !tail)
            {
                new_node = new Node(nullptr, nullptr, data);
                head = new_node;
                tail = new_node;
            }
            else
            {
                new_node = new Node(nullptr, nullptr, data);
                new_node->previous = tail;
                tail->next = new_node;
                tail = new_node;
            }
        }

        std::string dequeue(void)
        {
            // guard
            if (!head && !tail)
            {
                throw std::out_of_range("Dequeue empty queue...\n");
            }

            // variables
            std::string rc = head->data;
            Node* del_node = head;

            if (head == tail)
            {
                head = nullptr;
                tail = nullptr;
            }
            else
            {
                head = head->next;
                head->previous = nullptr;
            }

            delete del_node;
            return rc;
        }

        /*
        for stack() implementation -
        1) push
        2) pop
        */
        void push(const std::string& data)
        {
            Node* new_node = new Node(nullptr, nullptr, data);

            if (!head && !tail)
            {
                head = new_node;
                tail = new_node;
            }
            else
            {
                head->previous = new_node;
                new_node->next = head;
                head = new_node;
            }
        }

        std::string pop(void)
        {
            // guard
            if (!head && !tail)
            {
                throw std::out_of_range("Popping empty stack...\n");
            }

            Node* del_node = head;
            std::string rc = head->data;

            if (head == tail)
            {
                head = nullptr;
                tail = nullptr;
            }
            else
            {
                head = head->next;

                if(head)
                    head->previous = nullptr;
            }

            delete del_node;
            return rc;
        }
    };

public:

    // copy constructor
    Graph(const std::vector< std::string>& obj_list, const std::vector< std::vector<int> >& adj_matrix) : obj_list(obj_list), adj_matrix(adj_matrix) {}





    // BFS, yet to implement
    void BreadthFirstExpansion(std::string& state_initial)
    {
        // checks for existence, if not then break
        auto itr = std::find(obj_list.begin(), obj_list.end(), state_initial);
        if (itr == obj_list.end()) return;

        // defines the interior, this is a parallel array to obj_list
        std::vector<bool> visited(obj_list.size(), false);

        // defines the frontier
        Dlist frontier;
        
        // enqueue the initial state onto frontier
        frontier.enqueue(state_initial);

        // mark the initial state visited
        visited[itr - obj_list.begin()] = true;

        // expansion begins
        while (!frontier.is_empty())
        {
            std::string current = frontier.dequeue();
            std::cout << std::setw(20) << std::left << "current node -> " << std::setw(20) << std::left << current << std::setw(40) << std::right << " || adjacent node(s) -> \t\t\t";

            // i'm finding the index of the current state 
            int index_current = std::find(obj_list.begin(), obj_list.end(), current) - obj_list.begin();

            // linear search in the adjacency matrix
            for (int i = 0; i < adj_matrix[index_current].size(); i++)
            {
                // prints out the adjacent nodes
                if (adj_matrix[index_current][i])
                    std::cout << obj_list[i] << ", ";

                // that shit exists and not visited yet
                if (adj_matrix[index_current][i] && !visited[i])
                {
                    // in this case, let's put it on the frontier
                    frontier.enqueue(obj_list[i]);
                    visited[i] = true;
                }
            }
            puts("");
        }
    }





    // DFS, yet to implement
    void DepthFirstExpansion(std::string& state_initial)
    {
        {
            // checks for existence, if not then break
            auto itr = std::find(obj_list.begin(), obj_list.end(), state_initial);
            if (itr == obj_list.end()) return;

            // defines the interior, this is a parallel array to obj_list
            std::vector<bool> visited(obj_list.size(), false);

            // defines the frontier
            Dlist frontier;

            // push the initial state onto frontier
            frontier.push(state_initial);

            // mark the initial state visited
            visited[itr - obj_list.begin()] = true;

            // expansion begins
            while (!frontier.is_empty())
            {
                std::string current = frontier.pop();
                std::cout << std::setw(20) << std::left << "current node -> " << std::setw(20) << std::left << current << std::setw(40) << std::right << " || adjacent node(s) -> \t\t\t";

                // i'm finding the index of the current state 
                int index_current = std::find(obj_list.begin(), obj_list.end(), current) - obj_list.begin();

                // linear search in the adjacency matrix
                for (int i = 0; i < adj_matrix[index_current].size(); i++)
                {
                    // prints out the adjacent nodes
                    if (adj_matrix[index_current][i])
                        std::cout << obj_list[i] << ", ";

                    // that shit exists and not visited yet
                    if (adj_matrix[index_current][i] && !visited[i])
                    {
                        // in this case, let's put it on the frontier
                        frontier.push(obj_list[i]);
                        visited[i] = true;
                    }
                }
                puts("");
            }
        }
    }





    // getter -> list
    const std::vector< std::string>& GetList(void)
    {
        return obj_list;
    }
    // getter -> matrix
    const std::vector< std::vector<int> >& GetMatrix(void)
    {
        return adj_matrix;
    }
};


int main(void)
{
    // Canada container creation
    std::cout << "Canada's adjacency matrix: \n";
    std::vector<std::string> canada_provinces;
    std::vector< std::vector<int> > canada_adjacency_matrix;
    CreateMatrixCanada(canada_provinces, canada_adjacency_matrix);

    Graph Canada(canada_provinces, canada_adjacency_matrix);
    PrintMatrix(Canada.GetList(), Canada.GetMatrix());
    puts("");


    // US container creation
    std::cout << "US's adjacency matrix: \n";
    std::vector<std::string> us_states;
    std::vector< std::vector<int> > us_adjacency_matrix;
    CreateMatrixUS(us_states, us_adjacency_matrix);

    Graph US(us_states, us_adjacency_matrix);
    PrintMatrix(US.GetList(), US.GetMatrix());
    puts("");

    // breadth first expansion for Canada
    std::cout << "This is the breadth-first expansion for all provinces in Canada...\n";
    std::string start_state_CA = "ON";
    Canada.BreadthFirstExpansion(start_state_CA);
    puts("");

    // breadth first expansion for the US
    std::cout << "This is the breadth-first expansion for all states in the US...\n";
    std::string start_state_US = "Ohio";
    US.BreadthFirstExpansion(start_state_US);
    puts("");

    // deapth first expansion for Canada
    std::cout << "This is the depth-first expansion for all provinces in Canada...\n";
    start_state_CA = "ON";
    Canada.DepthFirstExpansion(start_state_CA);
    puts("");

    // depth first expansion for the US
    std::cout << "This is the depth-first expansion for all states in the US...\n";
    start_state_US = "Ohio";
    US.DepthFirstExpansion(start_state_US);
    puts("");

    return 0;
}