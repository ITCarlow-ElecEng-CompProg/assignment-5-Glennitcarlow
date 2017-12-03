/*  Glenn Ahearne
    Exercise 5
    Method of Least Squares of Linear Regression
*/

/**Preprocessor Directives*/
#include <iostream>
#include <cmath>

using namespace std;

/**Main Function*/
int main()

{
    /**Display Title*/

    cout << "Method Least Squares of Linear Regression" << endl;

    double x[100]={0}, y[100]={0}, xsum, ysum ,xysum, x2sum, averageX, averageY, m, c;

    int i, n;/**< variable declarations */

    xsum=0;
    ysum=0;
    xysum=0;
    x2sum=0;


    cout<<"\nEnter the no. of data points to be entered:\n";

    cin>>n;



    cout<<"\nEnter values for X :\n";



    for (i=0;i<n;i++)/**< for loop for x-values */

    {

        cin>>x[i];

    }



    cout<<"\nEnter Values for y :\t";



    for (i=0;i<n;i++)/**< for loop for y-values */

    {

        cin>>y[i];

    }



    for (i=0;i<n;i++)

    {

        xsum=xsum+x[i];
        ysum=ysum+y[i];
        x2sum=x2sum+pow(x[i],2);
        xysum=xysum+x[i]*y[i];

    }

    averageX= xsum/n;

    cout<<"\nAverage of X values : "<<averageX;



    averageY= ysum/n;

    cout<<"\nAverage of Y values : "<<averageY;



    m=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);

    cout<<"\nSlope Of Line : "<< m;

    c=averageY-(m*averageX);

    cout<<"\nIntercept of line : "<<c;

    return 0;

}
