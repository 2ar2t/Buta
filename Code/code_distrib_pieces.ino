void setup() {
  int e200 = 0;
  int e100 = 0;
  int e50 = 0;
  int e20 = 0;
  int e10 = 0;

  bool n200 = true;
  bool n100 = true;
  bool n50 = true;
  bool n20 = true;
  bool n10 = true; 

  int d = 0; //demandé: argent demandé par l'utilisateur
  int m = 0; //manque: argent que la machine n'a pas pu rendre
  int r = 0; //rajout: argent que la machine à donné en trop
}

void loop() {
  while((n200==true) or (n100==true) or (n50==true) or (n20==true) or (n10==true)){
    
    if (n200==true){
      
      if (d - 200 >= 0) & (e200 - 1 > 0){
        d -= 200;
        e200--;}
      else{n200 = false;}
    }

    else{
      
      if (n100==true){
        
        if (d - 100 >= 0) & (e100 - 1 > 0){
          d -= 100;
          e100--;}
        else{n100 = false;}
        }
        
      else{

        if (n50==true){ 
          
          if (d - 50 >= 0) & (e50 - 1 > 0){
            d -= 50;
            e50--;}
          else{n50 = false;}
        }

        else{
          
          if (n20==true){
            
            if (d - 20 >= 0) & (e20 - 1 > 0){
              d -= 20;
              e20--;}
            else{n20 = false;}
            }
            
          else{

             if (n10==true){

               if (d-10 >= 0) & (e10 - > 0){
                d -= 10;
                e10--;}
               else{n10==false;}
             }
          }
        }
      }
    } 
  }

  if (d != 0){ //la machine n'a pas pu rendre le montant exact
    while(d - r > 0){//le rajout doit couvrir ce qu'il manque 
      if (e10 > 0){ 
        e10--;
        r = d + 10;}

        else{
          if (e20 > 0){
            e20--;
            r = d +20;}

          else{
            if (e50 > 0){
              e50--;
              r = d +50;}

            else{
              if (e100 > 0){
                e100--;
                r = d+100;}

              else{
                if (e200 > 0){
                  e200--;
                  r = d+200;}

                else{
                  m = d;
                }
              }
            }
          }
        }
    }
  }
}
