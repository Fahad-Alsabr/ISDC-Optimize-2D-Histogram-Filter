#include "headers/initialize_beliefs.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(vector< vector <char> > &grid) {

	// OPTIMIZATION: Which of these variables are necessary?
	// OPTIMIZATION: Reserve space in memory for vectors
  int i, j;
	
  
  	vector< vector <float> > newGrid;
 	newGrid.reserve(3*5);
	 vector<float> newRow;
	newRow.reserve(5);

  	static float prob_per_cell = 1.0 / (grid.size() *  grid[0].size()) ;

  	// OPTIMIZATION: Is there a way to get the same results 	// without nested for loops?
	
		
		for (j=0; j<grid[0].size(); j++) {
			newRow.push_back(prob_per_cell);
		}
  for (i=0; i<grid.size(); i++) {
		newGrid.push_back(newRow);
	}
	return newGrid;
}