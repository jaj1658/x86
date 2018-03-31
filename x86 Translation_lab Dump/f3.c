int f3(unsigned int i)
{
      int rsp_14 = i;
      int rsp_4 = 0;
      int eax;
      while(rsp_14 != 0){
          eax = rsp_14;
          eax = eax&1;
          if(eax == 0){
              rsp_14 = rsp_14 >> 1;
          }
          else{
	      rsp_4 = rsp_4 + 1;
	      rsp_14 = rsp_14 >> 1;
          }
      }
      eax = rsp_4;
      eax = -eax;
      
      return eax;
}
