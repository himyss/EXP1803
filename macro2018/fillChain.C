void fillChain(){

  analyseRaw *obj = new analyseRaw();
  obj->readParameters();



  TFile *fw = new TFile("/media/user/work/data/analysisexp1804/analyse.root", "RECREATE");
  TTree *tw = new TTree("tree", "calibrated data");

  tw->Bronch("Calirated","analyseRaw",&obj);


  for(Int_t ientry=1;ientry<10;ientry++){
    
    obj->setTrigger(1);
    cout << ientry << " " << obj->getTrigger() << endl;

    tw->Fill(); 
  }

  


  fw->cd();
  tw->Write();
  fw->Close();

}