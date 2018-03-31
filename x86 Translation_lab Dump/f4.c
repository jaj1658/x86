char f4(unsigned int i)
{
    int eax;
    int rsp_4 = i;
    if(rsp_4 > 10){
        if(rsp_4 <= 10){
            eax = 65;
            return eax;
        }
        else{
            if(rsp_4 > 15){
                eax = 65;
                return eax;
            }
            else{
                eax = rsp_4;
                eax = eax + 96;
                return eax;
            }
        }
}
    else{
        eax = rsp_4;
        eax = eax + 64;
        return eax;
    }
}
