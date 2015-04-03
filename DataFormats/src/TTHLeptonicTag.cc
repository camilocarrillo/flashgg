#include "flashgg/DataFormats/interface/TTHLeptonicTag.h"
#include <algorithm>

using namespace flashgg;

TTHLeptonicTag::TTHLeptonicTag() : DiPhotonTagBase::DiPhotonTagBase()
{}

TTHLeptonicTag::~TTHLeptonicTag()
{}

// N.B. Other attributes are set using methods in header file
TTHLeptonicTag::TTHLeptonicTag( edm::Ptr<DiPhotonCandidate> diPho, edm::Ptr<DiPhotonMVAResult> mvares ) : TTHLeptonicTag::TTHLeptonicTag( diPho, *mvares ) {}
TTHLeptonicTag::TTHLeptonicTag( edm::Ptr<DiPhotonCandidate> dipho, DiPhotonMVAResult mvares ) : DiPhotonTagBase::DiPhotonTagBase( dipho, mvares ) {}


TTHLeptonicTag *TTHLeptonicTag::clone() const
{
    TTHLeptonicTag *result = new TTHLeptonicTag( diPhoton(), diPhotonMVA() );
    result->setDiPhotonIndex( diPhotonIndex() );
    result->setJets( Jets_ );
    result->setBJets( BJets_ );
    result->setMuons( Muons_ );
    result->setElectrons( Electrons_ );

    return result;
}
// Local Variables:
// mode:c++
// indent-tabs-mode:nil
// tab-width:4
// c-basic-offset:4
// End:
// vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4

