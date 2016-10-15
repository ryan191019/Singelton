#include <iostream>

using namespace std;


class Singelton {
private:
    Singelton()
    {
        cout<<"Singelton 构造函数执行..."<<endl;
    }
public:
    static Singelton *getInstance()
    {
        if (m_instance == NULL) {
            m_instance = new Singelton;
        }
        return m_instance;
    }
     static void freeInstance()
    {
        if (m_instance != NULL) {
           delete m_instance;
           m_instance = NULL;
        }

    }
    }
private:
    static Singelton *m_instance;

};
Singelton * Singelton::m_instance = NULL;
int main()
{
    Singelton * p1 = NULL;
    Singelton * p2 = NULL;

    p1 = Singelton::getInstance();
    p2 = Singelton::getInstance();
    if ( p1 == p2) {
            cout<<"p1,p2指向同一个对象"<<endl;
    } else {
            cout<<"p1,p1指向不同的对象"<<endl;
    }

    Singelton::freeInstance();

    cout << "Hello world!" << endl;
    return 0;
}
