#Indent header
#header1
#header2
#ifndef flashgg_PhotonDumpers_h
#define flashgg_PhotonDumpers_h

#include "flashgg/DataFormats/interface/Photon.h"
#include "flashgg/DataFormats/interface/DiPhotonCandidate.h"
#include "flashgg/DataFormats/interface/SinglePhotonView.h"
#include "flashgg/DataFormats/interface/SingleVertexView.h"
#include "flashgg/DataFormats/interface/DiPhotonTagBase.h"

#include "flashgg/Taggers/interface/CollectionDumper.h"

/// #include "PhysicsTools/UtilAlgos/interface/FWLiteAnalyzerWrapper.h"

namespace flashgg
{
typedef CollectionDumper<std::vector<Photon> > PhotonDumper;
typedef CollectionDumper<std::vector<Photon>,
        Photon,
        CutBasedClassifier<Photon> > CutBasedPhotonDumper;
typedef CollectionDumper<std::vector<DiPhotonCandidate> > DiPhotonDumper;
typedef CollectionDumper<std::vector<DiPhotonCandidate>,
        DiPhotonCandidate,
        CutBasedClassifier<DiPhotonCandidate> > CutBasedDiPhotonDumper;
typedef CollectionDumper<std::vector<SinglePhotonView>,
        SinglePhotonView,
        CutBasedClassifier<SinglePhotonView> > CutBasedSinglePhotonViewDumper;
typedef CollectionDumper<std::vector<SingleVertexView>,
        SingleVertexView,
        CutBasedClassifier<SingleVertexView> > CutBasedSingleVertexViewDumper;
typedef CollectionDumper<edm::OwnVector<DiPhotonTagBase>,
        DiPhotonTagBase,
        ClassNameClassifier<DiPhotonTagBase> > DiPhotonTagDumper;

//// namespace fwlite {
//// 	typedef ::fwlite::AnalyzerWrapper<DiPhotonDumper> DiPhotonDumper;
//// 	typedef ::fwlite::AnalyzerWrapper<PhotonDumper> PhotonDumper;
//// 	typedef ::fwlite::AnalyzerWrapper<DiPhotonTagDumper> DiPhotonTagDumper;
//// }

}

#endif // flashgg_PhotonDumpers_h
