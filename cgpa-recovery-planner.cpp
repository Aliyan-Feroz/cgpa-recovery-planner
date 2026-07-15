#include <iostream>
#include <iomanip> // Used to set CGPA decimal precision to 2


using namespace std;

int main(){
    
	// Variables
    double currentGPA, targetGPA;
    double totalCredits, completedCredits;
    double remainingCredits;
    double qualityPointsNeeded;
    double currentQualityPoints;
    double requiredGPA;

    cout << "==========================================================" << endl;
    cout << "            CGPA RECOVERY & ACADEMIC PLANNER              " << endl;
    cout << "==========================================================" << endl << endl;
 

    // Input
    cout << "Current CGPA (0.00 - 4.00)      : ";
    cin >> currentGPA;

    cout << "Target CGPA                     : ";
    cin >> targetGPA;
	
	cout << "Completed Credit Hours          : ";
    cin >> completedCredits;

    cout << "Total Degree Credit Hours       : ";
    cin >> totalCredits;
    
    system("cls"); // Clears Previous input data from screen
    
    cout << "==========================================================" << endl;
    cout << "            CGPA RECOVERY & ACADEMIC PLANNER              " << endl;
    cout << "==========================================================" << endl << endl;    

    
	// Main Calculation
	
    remainingCredits = totalCredits - completedCredits;

    qualityPointsNeeded = targetGPA * totalCredits;
    currentQualityPoints = currentGPA * completedCredits;

    requiredGPA = (qualityPointsNeeded - currentQualityPoints) / remainingCredits;
    
    cout<< fixed << setprecision(2);
    

    cout << "\n==========================================================" << endl;
    cout << "                    ANALYSIS REPORT" << endl;
    cout << "==========================================================" << endl;

    cout << "\nAcademic Summary" << endl;
    cout << "----------------------------------------------------------" << endl;

    cout << left << setw(32) << "Current CGPA"<< ": " << currentGPA << endl;

    cout << left << setw(32) << "Target CGPA"<< ": " << targetGPA << endl;

    cout << left << setw(32) << "Completed Credit Hours"<< ": " << (int)completedCredits << endl;

    cout << left << setw(32) << "Remaining Credit Hours"<< ": " << (int)remainingCredits << endl;

    cout << left << setw(32) << "Total Degree Credit Hours"<< ": " << (int)totalCredits << endl;
         

    cout << "\nAnalysis" << endl;
    cout << "----------------------------------------------------------" << endl;

    if (remainingCredits <= 0){
        
		cout << left << setw(32) << "Status" << ": Degree Already Completed" << endl;	
    }
    
    else if (requiredGPA > 4.0){
    	
        double maxPossible =((4.0 * remainingCredits) + currentQualityPoints) / totalCredits;

        cout << left << setw(32) << "Status" <<": Target Not Achievable" << endl;

        cout << left << setw(32) << "Required Average GPA" << ": "<< requiredGPA << endl;

        cout << left << setw(32) << "Highest Possible Final CGPA" << ": " << maxPossible << 
		"  (Assumes perfect A's in all remaining courses)" << endl;
	
        cout << "\nReason" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "The required GPA exceeds the maximum possible GPA (4.00)."  << endl;
    }
    
    else if (requiredGPA <= 0){
    	
        cout << left << setw(32) << "Status" << ": Target Already Achieved" << endl;

        cout << "\nCongratulations! You have already surpassed your target "
             << "CGPA. Keep maintaining your academic performance."
             << endl;
    }
    
    else{
    	
        cout << left << setw(32) << "Status" << ": Target Achievable" << endl;

        cout << left << setw(32) << "Required Average GPA" << ": " << requiredGPA << endl;

        cout << "\nRecommendations" << endl;
        cout << "----------------------------------------------------------" << endl;

        if (requiredGPA >= 4.0){
        	
        cout << "- You must earn a perfect 4.00 GPA in every remaining semester." << endl;
        cout << "- Any grade below an A may make your target unattainable." << endl;
        cout << "- Consider revising your target CGPA if maintaining a perfect GPA is unrealistic." << endl;
    }
    
    else if (requiredGPA >= 3.70){
    	
        cout << "- This is a highly ambitious target requiring consistently excellent grades." << endl;
        cout << "- Aim for mostly A and A- grades throughout the remaining semesters." << endl;
        cout << "- Monitor your CGPA after each semester to stay on track." << endl;
    }
    
    else if (requiredGPA >= 3.30){
	
        cout << "- Your target is achievable with strong academic performance." << endl;
        cout << "- Try to avoid grades below a B+ whenever possible." << endl;
        cout << "- Focus on improving performance in high-credit courses." << endl;
    }
    
    else if (requiredGPA >= 2.70){
    	
        cout << "- Your target is realistic with consistent effort." << endl;
        cout << "- Passing all courses with good grades should keep you on track." << endl;
        cout << "- Continue monitoring your progress every semester." << endl;
    }
    
    else{
   	
        cout << "- Your target is comfortably achievable." << endl;
        cout << "- Maintain consistent academic performance." << endl;
        cout << "- Avoid unnecessary course repeats or withdrawals." << endl;
    }

    cout << "\n==========================================================" << endl;
    cout << "Thank you for using the CGPA Recovery & Academic Planner."     << endl;
    cout << "Good luck with your future semesters!"                        << endl;
    cout << "=========================================================="   << endl;

    
	}
	
  return 0;

}

