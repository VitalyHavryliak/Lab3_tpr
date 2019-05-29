#include <iostream>
#include "iomanip"
#include <math.h>
using namespace std;
int adutuvne(int A[][5]);
int multuplikatuvne(int A[][5]);
void a_obiednannia(double A[][5], double B[][5], double C[][5]);
void a_peretun(double A[][5], double B[][5], double C[][5]);
void a_riznucia(double A[][5], double B[][5], double C[][5]);
void a_kompozucia(double A[][5], double B[][5], double C[][5]);
void m_obiednannia(double A[][5], double B[][5], double C[][5]);
void m_peretun(double A[][5], double B[][5], double C[][5]);
void m_riznucia(double A[][5], double B[][5], double C[][5]);
void m_kompozucia(double A[][5], double B[][5], double C[][5]);
double A[5][5] =
        {
                0,0,0,0,0,
                1,0,0,0,0,
                5,4,0,2,3,
                3,2,0,0,1,
                2,1,0,0,0
        };
double B[5][5] =
        {
                0,0,0,0,0,
                5,0,0,0,0,
                0,0,0,0,0,
                4,0,0,0,0,
                7,2,0,3,0
        };
double P1[5][5] =
        {
                1,0,0,0,7,
                0,1,0,0,0,
                0,0,1,0,0,
                0,6,0,1,0,
                0,0,0,0,1
        };
double P2[5][5]
        {
                1,0,0,0,0,
                0,1,2,0,8,
                0,0,1,0,4,
                1,1,2,1,8,
                0,0,0,0,1
        };
double res[5][5];
class VIDNOSHENNIA
{
public:
    int adutuvne(double A[][5])
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                if (A[i][i] == 0)
                {
                    cout << "Вiдношення адитивне :" << endl;
                    return 1;
                }
            } return 0;
    }

    int multuplikatuvne(double A[][5])
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                if (A[i][i] == 1)
                {
                    cout << "Вiдношення мультиплiкативне :" << endl;
                    return 1;
                }
            } return 0;
    } public:
};
class VIDNOSHENNIA_MATR : public virtual VIDNOSHENNIA
{
public:
    virtual void a_obiednannia(double A[][5], double B[][5], double C[][5])
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (A[i][j] > 0 && B[i][j] > 0)
                {
                    C[i][j] = (A[i][j] + B[i][j]) / 2;
                }
                else {
                    C[i][j] = A[i][j] + B[i][j];
                }
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << setw(4) << C[i][j];
            }
            cout << endl;
        }
    }
    virtual void a_peretun(double A[][5], double B[][5], double C[][5])
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (A[i][j] && B[i][j])
                {
                    C[i][j] = (A[i][j] + B[i][j]) / 2;
                }
                else {
                    C[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << setw(4) << C[i][j];
            }
            cout << endl;


        }
    }
    virtual void a_riznucia(double A[][5], double B[][5], double C[][5])
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                {
                    if (A[i][j] && !B[i][j]) {
                        C[i][j] = A[i][j];
                    }
                    else if (A[i][j] && B[i][j])
                    {
                        C[i][j] = 0;
                    }
                    else
                    {
                        C[i][j] = 0;
                    }
                }

            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << setw(4) << C[i][j];
            }
            cout << endl;
        }
    }
    virtual void a_kompozucia(double A[][5], double B[][5], double C[][5])
    {
        int i, j, k, count = 0;
        for (i = 0; i < 5; ++i) {
            for (j = 0; j < 5; ++j)
            {
                C[i][j] = 0;
            }
            for (i = 0; i < 5; ++i) {
                for (j = 0; j < 5; ++j) {
                    for (k = 0; k < 5; ++k)
                    {
                        if (A[i][k] > 0 && B[k][j] > 0)
                        {
                            C[i][j] += (A[i][k] + B[k][j]);
                            count++;
                        }
// cout << "count = " << count << endl;
                    }
                    if (count > 0)
                    {
                        C[i][j] = C[i][j] / count;
                        count = 0;
                    }
                }
            }
            for (i = 0; i < 5; ++i) {
                for (j = 0; j < 5; ++j)
                {
                    cout << setw(6) << C[i][j];
                }
                cout << endl;
            }
        }
    }


    virtual void m_obiednannia(double A[][5], double B[][5], double C[][5])
    {
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (A[i][j] > 0 && B[i][j] > 0)
                {
                    C[i][j] = sqrt(A[i][j] * B[i][j]);
                }
                else {
                    C[i][j] = A[i][j] + B[i][j];
                }
            }
        }
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j)
            {
                cout << setw(10) << C[i][j];
            }
            cout << endl;
        }
    }
    virtual void m_peretun(double A[][5], double B[][5], double C[][5])
    {
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (A[i][j] > 0 && B[i][j] > 0)
                {
                    C[i][j] = sqrt(A[i][j] * B[i][j]);
                }
                else
                    C[i][j] = 0;
            }
        }
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j)
            {
                cout << setw(10) << C[i][j];
            }
            cout << endl;
        }
    }
    virtual void m_riznucia(double A[][5], double B[][5], double C[][5])
    {
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (A[i][j] > 0 && B[i][j] == 0)
                {
                    C[i][j] = A[i][j];
                }
                else
                    C[i][j] = 0;
            }
        }
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j)
            {
                cout << setw(10) << C[i][j];
            }
            cout << endl;
        }
    }

    virtual void m_kompozucia(double A[][5], double B[][5], double C[][5])
    {
        int i, j, k;
        double count = 0;
        for (i = 0; i < 5; ++i) {
            for (j = 0; j < 5; ++j)
            {
                C[i][j] = 0;
            }
            for (i = 0; i < 5; ++i) {
                for (j = 0; j < 5; ++j) {
                    for (k = 0; k < 5; ++k)
                    {
                        if (A[i][k] > 0 && B[k][j] > 0)
                        {
                            C[i][j] += (A[i][k] * B[k][j]);
                            count++;
                        }
                    }
                    if (count > 0)
                    {
                        C[i][j] = pow(C[i][j], 1 / count);
                        count = 0;
                    }
                }
                for (i = 0; i < 5; ++i) {
                    for (j = 0; j < 5; ++j)
                    {
                        cout << setw(8) << C[i][j];
                    }
                    cout << endl;
                }
            }
        }
    };
};
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "UKR");
    VIDNOSHENNIA v;
    VIDNOSHENNIA_MATR a, m;
    v.adutuvne(A);
    v.adutuvne(B);
    if (v.adutuvne(A) && v.adutuvne(B)) {
        cout << "Kompozucia_A" << endl;
        a.a_kompozucia(A, B, res);
        cout << "Riznucia_A" << endl;
        a.a_riznucia(A, B, res);
        cout << endl << "Obiednannia_A " << endl;
        a.a_obiednannia(A, B, res);
        cout << "Peretun_A" << endl;
        a.a_peretun(A, B, res);
    }

    v.multuplikatuvne(P1);
    v.multuplikatuvne(P2);
    if (v.multuplikatuvne(P1) && v.multuplikatuvne(P2))
    {
        cout << "Kompozucia_M " << endl;
        m.m_kompozucia(P1, P2, res);
        cout << endl << "Obiednannia_M " << endl;
        m.m_obiednannia(P1, P2, res);
        cout << "Peretun_M" << endl;
        m.a_peretun(P1, P2, res);
        cout << "Riznucia_M" << endl;
        m.a_riznucia(P1, P2, res);
    }
    return 0;
}