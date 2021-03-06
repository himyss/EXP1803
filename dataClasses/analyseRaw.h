#pragma once

#ifndef __ANALYSERAW_H__
#define __ANALYSERAW_H__

#include "TString.h"

#include <iostream>
#include <fstream>

using namespace std;
// using std::cout;
// using std::endl;

class analyseRaw {
private:

  // calibration parameters
  Float_t fparXL1[32];//!
  Float_t fparXL2[32];//!
  Float_t fparYL1[16];//!
  Float_t fparYL2[16];//!
  Float_t fparXR1[32];//!
  Float_t fparXR2[32];//!
  Float_t fparYR1[16];//!
  Float_t fparYR2[16];//!
  Float_t fpar201[16];//!
  Float_t fpar202[16];//!
  Float_t fparCsR1[16];//!
  Float_t fparCsR2[16];//!

  // angle of the target
  Float_t fAngle = 12.;//!



  // output data

  Float_t CsI,tCsI; // amplitudes and times of maximum signal in the right CsI detector (avoiding Cross talk)
  Int_t nCsI; // number of the fired crystal in the right telescope

  // amplitudes and times of the Silicon Detectors
  Float_t SQX_L[32],tSQX_L[32],SQY_L[16],tSQY_L[16],SQX_R[32],tSQX_R[32],SQY_R[16],tSQY_R[16];  
  Float_t SQ20[16],tSQ20[16];

  Float_t ToF,deBeam; // ToF and energyLosses in it

  Int_t nx1,ny1,nx2,ny2; // numbers of the fired wires in MWPC

  Float_t x1,x2,y1,y2,yt,xt,zt; // position of the fired wires in MWPC,position of the beam at the target plane

  Int_t trigger;

  Int_t flagR,flagL;// flags for the event selection in the right and left telescopes

public: 
  // default constructor 
  analyseRaw();
  // default destructor
  virtual  ~analyseRaw();

  void readParameters();
  void creatOutTree();






  void setTrigger(Int_t value){
    trigger = value;
  }

  Int_t getTrigger(){return trigger;}

  
  ClassDef(analyseRaw,1);
};
#endif
