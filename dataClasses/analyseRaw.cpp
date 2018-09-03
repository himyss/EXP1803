#include "analyseRaw.h"

ClassImp(analyseRaw);

analyseRaw::analyseRaw() {

  printf("analyseRaw::Default constructor called.\n");

}

analyseRaw::~analyseRaw() {

  printf("analyseRaw::Default constructor called.\n");

}

    // Reading cal parameters 
//------------------------------------------------------------------------------ 
void analyseRaw::readParameters(){
// for 1 mm Si detector
  TString line1;
  ifstream myfile1;
  Int_t count=-2;
  myfile1.open("/media/user/work/data/analysisexp1804/presentPars/SQX_R.cal");
  while (! myfile1.eof() ){
    line1.ReadLine(myfile1);
    if(count < 0){
      count++;
      continue;
    }
    if(line1.IsNull()) break;
    sscanf(line1.Data(),"%g %g", fparXR1+count,fparXR2+count);
    count++;
  }
  // cout << endl << " pars for XR strips" << endl;
  // for(Int_t i=0;i<32;i++) cout << fparXR1[i] << " " << fparXR2[i] << endl;  

  ifstream myfile2;
  TString line2;
  count=-2;
  myfile2.open("/media/user/work/data/analysisexp1804/presentPars/SQY_R.cal");
  while (! myfile2.eof() ){
    line2.ReadLine(myfile2);
    if(count < 0){
      count++;
      continue;
    }
    if(line2.IsNull()) break;
    sscanf(line2.Data(),"%g %g", fparYR1+count,fparYR2+count);
    count++;
  }

  // cout << endl << " pars for YR strips" << endl;
  // for(Int_t i=0;i<16;i++) cout << fparYR1[i] << " " << fparYR2[i] << endl;   

  ifstream myfile3;
  TString line3;
  count=-2;
  myfile3.open("/media/user/work/data/analysisexp1804/presentPars/SQX_L.cal");
  while (! myfile3.eof() ){
    line3.ReadLine(myfile3);
    if(count < 0){
      count++;
      continue;
    }
    if(line3.IsNull()) break;
    sscanf(line3.Data(),"%g %g", fparXL1+count,fparXL2+count);
    count++;
  }

  // cout << endl << " pars for XL strips" << endl;
  // for(Int_t i=0;i<32;i++) cout << fparXL1[i] << " " << fparXL2[i] << endl;   

  ifstream myfile4;
  TString line4;
  count=-2;
  myfile4.open("/media/user/work/data/analysisexp1804/presentPars/SQY_L.cal");
  while (! myfile4.eof() ){
    line4.ReadLine(myfile4);
    if(count < 0){
      count++;
      continue;
    }
    if(line4.IsNull()) break;
    sscanf(line4.Data(),"%g %g", fparYL1+count,fparYL2+count);
    count++;
  }

  // cout << endl << " pars for YL strips" << endl;
  // for(Int_t i=0;i<16;i++) cout << fparYL1[i] << " " << fparYL2[i] << endl;     

  ifstream myfile5;
  TString line5;
  count=-2;
  myfile5.open("/media/user/work/data/analysisexp1804/presentPars/SQ20.cal");
  while (! myfile5.eof() ){
    line5.ReadLine(myfile5);
    if(count < 0){
      count++;
      continue;
    }
    if(line5.IsNull()) break;
    sscanf(line5.Data(),"%g %g", fpar201+count,fpar202+count);
    count++;
  }

  // cout << endl << " pars for 20um strips" << endl;
  // for(Int_t i=0;i<16;i++) cout << fpar201[i] << " " << fpar202[i] << endl; 

  ifstream myfile7;
  TString line7;
  count=-2;
  myfile7.open("/media/user/work/data/analysisexp1804/presentPars/csi_r_ec.clb");
  while (! myfile7.eof() ) {
    line7.ReadLine(myfile7);
    if(count < 0){
      count++;
      continue;
    }
    if(line7.IsNull()) break;
    sscanf(line7.Data(),"%g %g", fparCsR1+count,fparCsR2+count);
    count++;
  }  

  // cout << endl << " pars for CsR strips" << endl;
  // for(Int_t i=0;i<16;i++) cout << fparCsR1[i] << " " << fparCsR2[i] << endl; 

}

  //creating outTree
//------------------------------------------------------------------------------

void analyseRaw::creatOutTree(){


}

