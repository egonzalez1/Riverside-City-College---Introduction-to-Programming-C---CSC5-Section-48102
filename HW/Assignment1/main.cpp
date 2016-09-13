/* 
 * File:   main.cpp
 * Author: Edith Gonzalez
 * Created on September 13, 2016, 11:55 AM
 * Purpose:  TO calculate when homeowners in Riverside will have 
 *           beach front property
 */

//System Libraries Here
#include <iostream> //Input/Output objects
using namespace std;//Name-space used in the System Libraries

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVMMFT=304.8f;//Conversion milimeters to feet from Google
const float CNVMMM=1000.f;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with initialization
    float rate=1.5;//Sea level rise rate in mm/year
    int nYear1=5,nYear2=7,nYear3=10;//Years to calculate rise
    float rise1,rise2,rise3;//Solutions for the 3 years form above
    int nYrBch;//Number of years before your home is beach front property;
    float elevRiv=860;//Elevation of Riverside in feet according to wikipedia
    //Input or initialize values Here
    
    //Process/Calculations Here
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    
    //Output Located Here
    cout<<"The rate of the seal level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<"mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<"mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<"mm"<<endl;
    cout<<"At this rate Riverside won't have beach front property for ";
    cout<<nYrBch<<" years"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<"meters"<<endl;

    //Exit
    return 0;
}

