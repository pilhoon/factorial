BEGIN {
    FS=""
    zeromax = 0;
    curcnt = 0;
}

{
    for( i=1; i<=NF; i++) {
        if($i == 0)
        {
            curcnt++
        }
        else 
        {
            if(curcnt > zeromax) 
            {
                zeromax = curcnt;
            }
            curcnt = 0
        }
    }
}

END {
    print zeromax
    print curcnt
}
