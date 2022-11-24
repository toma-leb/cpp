// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful


template<typename T>
void my_swap(T a, T b){
    auto tmp = *a;
    *a = *b;
    *b = tmp;
}

template<typename T>
void my_selection_sort(T begin, T end) {

    for (T i = begin; i != end; ++i)
    {
        T min = i;
        for (T j = i; j != end; ++j)
        {
            if (cmp(*j, *min))
            {
                min = j;
            }
        }

        if (min != begin)
        {
            my_swap(i, min);
        }
    }
}
