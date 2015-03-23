#Indent header
#header1
#header2
#include "FWCore/Framework/interface/MakerMacros.h"
#include "flashgg/Taggers/interface/DiPhotonMVAResultDumper.h"
#include "PhysicsTools/UtilAlgos/interface/EDAnalyzerWrapper.h"

typedef edm::AnalyzerWrapper<flashgg::DiPhotonMVAResultDumper> DiPhotonMVAResultDumper;
typedef edm::AnalyzerWrapper<flashgg::CutBasedDiPhotonMVAResultDumper> CutBasedDiPhotonMVAResultDumper;

DEFINE_FWK_MODULE(DiPhotonMVAResultDumper);
DEFINE_FWK_MODULE(CutBasedDiPhotonMVAResultDumper);
