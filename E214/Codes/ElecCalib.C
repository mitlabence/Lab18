#include "math.h"
#include "TMath.h"

double ElecCalib(double e_raw, double pt, double eta, 
		 double phi, double etiso, double eoverp, double mindrjet)
{
  //double dummy=pt*eta*phi*etiso*eoverp*mindrjet;
  double energy = e_raw ;
    
if (eta>-2.5 && eta<-2.5/2){
    if (phi> -3.14 && phi< -3.14/2) energy = energy *(91.2/89.79)*(91.19/91.19)*(91.19/91.17);
    else if (phi> -3.14/2 && phi< 0) energy = energy *(91.2/89.76)*(91.19/91.23)*(91.19/91.18);
    else if (phi> 0 && phi< 3.14/2) energy = energy *(91.2/89.69)*(91.19/91.14)*(91.19/91.18);
    else if (phi> 3.14/2 && phi< 3.14) energy = energy *(91.2/89.6)*(91.19/91.09)*(91.19/91.13);
}
else if (eta>-2.5/2 && eta<0){
    if (phi> -3.14 && phi< -3.14/2) energy = energy *(91.2/89.84)*(91.19/91.17)*(91.19/91.15);
    else if (phi> -3.14/2 && phi< 0) energy = energy *(91.2/89.72)*(91.19/91.13)*(91.19/91.17);
    else if (phi> 0 && phi< 3.14/2) energy = energy *(91.2/90.11)*(91.19/91.3)*(91.19/91.25);
    else if (phi> 3.14/2 && phi< 3.14) energy = energy *(91.2/89.92)*(91.19/91.22)*(91.19/91.22);
}
else if (eta>0 && eta<2.5/2){
    if (phi> -3.14 && phi< -3.14/2) energy = energy *(91.2/89.86)*(91.19/91.13)*(91.19/91.16);
    else if (phi> -3.14/2 && phi< 0) energy = energy *(91.2/89.96)*(91.19/91.22)*(91.19/91.22);
    else if (phi> 0 && phi< 3.14/2) energy = energy *(91.2/89.73)*(91.19/91.12)*(91.19/91.16);
    else if (phi> 3.14/2 && phi< 3.14) energy = energy *(91.2/89.91)*(91.19/91.16)*(91.19/91.20);
}
else if (eta>2.5/2 && eta<2.5){
    if (phi> -3.14 && phi< -3.14/2) energy = energy *(91.2/89.92)*(91.19/91.23)*(91.19/91.22);
    else if (phi> -3.14/2 && phi< 0) energy = energy *(91.2/90.01)*(91.19/91.16)*(91.19/91.23);
    else if (phi> 0 && phi< 3.14/2) energy = energy *(91.2/89.82)*(91.19/91.16)*(91.19/91.18);
    else if (phi> 3.14/2 && phi< 3.14) energy = energy *(91.2/89.91)*(91.19/91.12)*(91.19/91.21);
}

if (fabs(pt)>0 && fabs(pt)<20) energy = energy*(91.19/89.26)*(91.19/90.04);
else if (fabs(pt)>20 && fabs(pt)<30) energy = energy*(91.19/90.13)*(91.19/90.79);
else if (fabs(pt)>30 && fabs(pt)<35) energy = energy*(91.19/90.51)*(91.19/90.92);
else if (fabs(pt)>35 && fabs(pt)<40) energy = energy*(91.19/90.68)*(91.19/90.86);
else if (fabs(pt)>40 && fabs(pt)<45) energy = energy*(91.19/91.32)*(91.19/91.1);
else if (fabs(pt)>45 && fabs(pt)<50) energy = energy*(91.19/92.34)*(91.19/91.75);
else if (fabs(pt)>50 && fabs(pt)<60) energy = energy*(91.19/92.31)*(91.19/91.92);
else if (fabs(pt)>60) energy = energy*(91.19/91.89)*(91.19/91.85);

energy = energy - 0.025;


  // if (fabs(eta)>1.5) energy = energy * 91.2/78.2;
  // else if (fabs(eta)>2.0) energy = energy * 91.2/85.4;
return energy;
} 
