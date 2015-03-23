#Indent header
#header1
#header2
#include "FWCore/Framework/interface/MakerMacros.h"
#include "CommonTools/UtilAlgos/interface/HistoAnalyzer.h"
#include "flashgg/DataFormats/interface/DiPhotonCandidate.h"

typedef HistoAnalyzer<edm::View<flashgg::DiPhotonCandidate> > DiPhotonsHistoAnalyzer;

DEFINE_FWK_MODULE( DiPhotonsHistoAnalyzer );

class Dummy {
public:
    Dummy() {
        TH1::SetDefaultSumw2(1);
    };

    static Dummy instance;

};

Dummy Dummy::instance;
