//
// Created by Hp on 09/12/2022.
//

#include "lib.h"

float array (int n, float a[])
{
    for(int i=0; i<n; i++)
    {
        if(a[0] <= a[i])
        {
            a[0] = a[i];
        }
        else
        {
            a[i] = a[0];
        }
    }
    return a[0];
}
