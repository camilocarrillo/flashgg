#Indent header
#header1
#header2
#ifndef FLASHgg_VBFTag_h
#define FLASHgg_VBFTag_h


#include "flashgg/DataFormats/interface/DiPhotonTagBase.h"
#include "flashgg/DataFormats/interface/VBFDiPhoDiJetMVAResult.h"
#include "flashgg/DataFormats/interface/Jet.h"

namespace flashgg {

class VBFTag: public DiPhotonTagBase {
public:
    VBFTag();
    ~VBFTag();

    VBFTag(edm::Ptr<DiPhotonCandidate>,edm::Ptr<DiPhotonMVAResult>,edm::Ptr<VBFDiPhoDiJetMVAResult>);
    VBFTag(edm::Ptr<DiPhotonCandidate>,DiPhotonMVAResult,VBFDiPhoDiJetMVAResult);
    VBFTag* clone() const;
    const VBFDiPhoDiJetMVAResult VBFDiPhoDiJetMVA() const;
    const VBFMVAResult VBFMVA() const ;
    const Jet leadingJet() const; //needs to be validated
    const Jet subLeadingJet() const; //needs to be validated

private:
    VBFDiPhoDiJetMVAResult vbfDiPhoDiJet_mva_result_;
};

}

#endif