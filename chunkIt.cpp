#include <vector>

vector <vector <std::string> > chunkIt( vector <std::string> users, int nb)
{
    vector <vector <std::string> >spliters;
    vector <std::string> temp_vect;
    if(nb>=users.size())
    {
        for( int ii=0; ii<users.size(); ii++)
        {
            temp_vect.push_back(users[ii]);
            spliters.push_back(temp_vect);
        }
        return spliters;
    }
    else
    {
        //int my_local_ite = 0;
        float avg  = (float)users.size()/(float)nb;
        float last = 0.0;

        while(last<users.size())
        {
            temp_vect.clear();

            for(int i=last;i<(last+avg);++i)
            {
                if(i<users.size())
                    temp_vect.push_back(users[i]);
            }
            spliters.push_back(temp_vect);
            last+=avg;
        }
        return spliters;
    }
}
