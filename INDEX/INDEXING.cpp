# include <iostream >
using namespace std;
int INDEX ( string text, string pattern )
{
    int i ;
    for ( i = 0; i < ( int ) text . size () ; i ++)
    {
        bool flag = true ;
        for ( int j = 0; j < ( int ) pattern . size () ; j ++)
        {
            if ( text [ i + j ] == pattern [ j ])
                continue ;
            else
            {
                flag = false ;
                break ;
            }
        }
        if ( flag == false )
            continue ;
        else
            return i ;
    }
    if ( i == ( int ) text . size () )
        return -1;
}

int main ()
{
    string t, p ;
    getline ( cin, t ) ;
    getline ( cin, p ) ;
    cout << INDEX (t, p ) << endl ;
}
