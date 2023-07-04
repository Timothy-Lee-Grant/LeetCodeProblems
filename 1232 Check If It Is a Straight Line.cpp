class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        float slope;
        float currentSlope;
        int i;
        int rise;
        int run;


        //have a vector of integers
        //if it is straight line then the slope between each points will be consistant
        //vector is a new concept which seems to simply be a dynamic array (so it is a dynamic array or integer types).
        //but there is two nested vectors. This is a vector of vectors of type int
        // & means it is a reference

        //first question would be to figure out how to index the elements in the 2d array 'coordinates'

        //calculate slope
        //loop through each of the elements in 'coordinates' if a single element is not conforming to slope, return false
        //if all elements conform to slope, return true

        //calculate slope
        //slope = rise/run
        //slope = (coordinates[0][1] - coordinates[1][1]) / (coordinates[0][0] - coordinates[1][0]);
        rise = coordinates[1][1] - coordinates[0][1];
        run = coordinates[1][0] - coordinates[0][0];

        //deal with case of verticality (computers can't deal with divide by 0)
        if(run == 0)
        {
            //this is the case where it is straight up
            //loop through each of the points and verify that all of them are straight up
            for(i=0; i < coordinates.size() - 1; i++)
            {
                //check to see the next points, all points should have a run of 0
                //otherwise return false
                run = coordinates[i+1][0] - coordinates[i][0];

                if( run != 0)
                    return false;
                
            }
            return true;
        }


        rise = coordinates[1][1] - coordinates[0][1];
        run = coordinates[1][0] - coordinates[0][0];

        slope = static_cast<float>(rise)/run;

        //check each point to see if it is the same as the origionally calculated slope
        for(i=0; i < coordinates.size() - 1; i++)
        {
            rise = coordinates[i+1][1] - coordinates[i][1];
            run = coordinates[i+1][0] - coordinates[i][0];

            //if run is 0, then it means those two points are vertical
            //the vertical case was already dealt with above, therefore these points do not follow the previous rules
            //immediately return false
            if(run == 0)
                return false;

            currentSlope = static_cast<float>(rise)/run;

            //if one instance found of slope not conforming, return false
            if( currentSlope != slope )
            {
                return false;
            }
        }

        //all points have same slope, return true
        return true;
        
    }
};