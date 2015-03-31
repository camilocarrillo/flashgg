// Local Variables:
// mode:c++
// indent-tabs-mode:nil
// tab-width:4
// c-basic-offset:4
// End:
// vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4

/* \class CandViewRefSelector
 *
 * Candidate Selector based on a configurable cut.
 * Reads a edm::View<Candidate> as input
 * and saves a OwnVector of clones.
 * Usage:
 *
 * module selectedCands = CandViewSelector {
 *   InputTag src = myCollection
 *   string cut = "pt > 15.0"
 * };
 *
 * \author: Luca Lista, INFN
 *
 */
#include "FWCore/Framework/interface/MakerMacros.h"
#include "CommonTools/UtilAlgos/interface/SingleObjectSelector.h"
#include "CommonTools/UtilAlgos/interface/StringCutObjectSelector.h"
#include "flashgg/DataFormats/interface/DiPhotonCandidate.h"
#include "flashgg/MicroAOD/interface/CutBasedDiPhotonObjectSelector.h"

#include "CommonTools/UtilAlgos/interface/ObjectSelectorStream.h"
#include "CommonTools/UtilAlgos/interface/SingleElementCollectionSelectorPlusEvent.h"

#include "flashgg/MicroAOD/interface/PerPhotonMVADiPhotonPostProcess.h"

typedef SingleObjectSelector <
edm::View<flashgg::DiPhotonCandidate>,
    StringCutObjectSelector<flashgg::DiPhotonCandidate, true>,
    std::vector<flashgg::DiPhotonCandidate>
    > DiPhotonCandidateSelector;

typedef ObjectSelectorStream <
SingleElementCollectionSelectorPlusEvent <
edm::View<flashgg::DiPhotonCandidate>,
    flashgg::CutBasedDiPhotonObjectSelector,
    std::vector<flashgg::DiPhotonCandidate>
    >,
    std::vector<flashgg::DiPhotonCandidate> > GenericDiPhotonCandidateSelector;

DEFINE_FWK_MODULE( DiPhotonCandidateSelector );
DEFINE_FWK_MODULE( GenericDiPhotonCandidateSelector );

