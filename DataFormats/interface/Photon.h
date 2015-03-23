#Indent header
#header1
#header2
#ifndef FLASHgg_Photon_h
#define FLASHgg_Photon_h

#include "DataFormats/PatCandidates/interface/Photon.h"
#include "DataFormats/PatCandidates/interface/PackedGenParticle.h"


namespace flashgg {

class Photon : public pat::Photon {

public:
    Photon();
    Photon(const pat::Photon &);
    ~Photon();
    virtual Photon * clone() const;

    enum mcMatch_t { kUnkown=0, kPrompt, kFake  };

    // someone had the insane idea of shadowing these methods in the pat::Photon....
    float egChargedHadronIso() const {
        return  reco::Photon::chargedHadronIso();
    }
    float egNeutralHadronIso() const {
        return  reco::Photon::neutralHadronIso();
    }
    float egPhotonIso() const {
        return  reco::Photon::photonIso();
    }

    void setSipip(float val) {
        sipip_=val;
    };
    void setSieip(float val) {
        sieip_=val;
    };
    void setE2nd(float val) {
        e2nd_=val;
    };
    void setE2x5right(float val) {
        e2x5right_=val;
    };
    void setE2x5left(float val) {
        e2x5left_=val;
    };
    void setE2x5top(float val) {
        e2x5top_=val;
    };
    void setE2x5bottom(float val) {
        e2x5bottom_=val;
    };
    void setE2x5max(float val) {
        e2x5max_=val;
    };
    void setEright(float val) {
        eright_=val;
    };
    void setEleft(float val) {
        eleft_=val;
    };
    void setEtop(float val) {
        etop_=val;
    };
    void setEbottom(float val) {
        ebottom_=val;
    };
    void setE1x3(float val) {
        e1x3_=val;
    };
    void setS4(float val) {
        S4_=val;
    };
    void setpfPhoIso04(float val) {
        pfPhoIso04_=val;
    };
    void setpfPhoIso03(float val) {
        pfPhoIso03_=val;
    };
    void setpfNeutIso04(float val) {
        pfNeutIso04_=val;
    };
    void setpfNeutIso03(float val) {
        pfNeutIso03_=val;
    };
    void setpfChgIso04( std::map<edm::Ptr<reco::Vertex>,float> valmap ) {
        pfChgIso04_ = valmap;
    };  // concept: pass the pre-computed map when calling this in the producer
    void setpfChgIso03( std::map<edm::Ptr<reco::Vertex>,float> valmap ) {
        pfChgIso03_ = valmap;
    };  // concept: pass the pre-computed map when calling this in the producer
    void setpfChgIso02( std::map<edm::Ptr<reco::Vertex>,float> valmap ) {
        pfChgIso02_ = valmap;
    };  // concept: pass the pre-computed map when calling this in the producer
    void setpfChgIsoWrtWorstVtx04(float val) {
        pfChgIsoWrtWorstVtx04_=val;
    };
    void setpfChgIsoWrtWorstVtx03(float val) {
        pfChgIsoWrtWorstVtx03_=val;
    };
    void setpfChgIsoWrtChosenVtx02(float val) {
        pfChgIsoWrtChosenVtx02_=val;
    };
    void setpfChgIsoWrtChosenVtx03(float val) {
        pfChgIsoWrtChosenVtx03_=val;
    };
    void setESEffSigmaRR(float val) {
        ESEffSigmaRR_=val;
    };
    void setPhoIdMvaD( std::map<edm::Ptr<reco::Vertex>,float> valmap ) {
        phoIdMvaD_ = valmap;
    };   // concept: pass the pre-computed map when calling this in the producer
    void setEnergyAtStep(std::string key,float val);
    void updateEnergy(std::string key,float val);
    void setSigEOverE(float val) {
        sigEOverE_ = val;
    };

    float const sipip() const {
        return sipip_;
    };
    float const sieip() const {
        return sieip_;
    };
    float const e2nd() const {
        return e2nd_;
    };
    float const e2x5right() const {
        return e2x5right_;
    };
    float const e2x5left() const {
        return e2x5left_;
    };
    float const e2x5top() const {
        return e2x5top_;
    };
    float const e2x5bottom() const {
        return e2x5bottom_;
    };
    float const e2x5max() const {
        return e2x5max_;
    };
    float const eright() const {
        return eright_;
    };
    float const eleft() const {
        return eleft_;
    };
    float const etop() const {
        return etop_;
    };
    float const ebottom() const {
        return ebottom_;
    };
    float const e1x3() const {
        return e1x3_;
    };
    float const s4() const {
        return S4_;
    };
    float const pfPhoIso04() const {
        return pfPhoIso04_;
    };
    float const pfPhoIso03() const {
        return pfPhoIso03_;
    };
    float const pfNeutIso04() const {
        return pfNeutIso04_;
    };
    float const pfNeutIso03() const {
        return pfNeutIso03_;
    };
    std::map<edm::Ptr<reco::Vertex>,float> const pfChgIso04() const {
        return pfChgIso04_;
    };
    std::map<edm::Ptr<reco::Vertex>,float> const pfChgIso03() const {
        return pfChgIso03_;
    };
    std::map<edm::Ptr<reco::Vertex>,float> const pfChgIso02() const {
        return pfChgIso02_;
    };
    float const pfChgIso04WrtVtx( const edm::Ptr<reco::Vertex>& vtx, bool lazy=false ) const {
        return findVertexFloat(vtx,pfChgIso04_,lazy);
    }; // if lazy flag is true only compare key (needed since fwlite does not fill provenance info)
    float const pfChgIso03WrtVtx( const edm::Ptr<reco::Vertex>& vtx, bool lazy=false ) const {
        return findVertexFloat(vtx,pfChgIso03_,lazy);
    }; // if lazy flag is true only compare key (needed since fwlite does not fill provenance info)
    float const pfChgIso02WrtVtx( const edm::Ptr<reco::Vertex>& vtx, bool lazy=false ) const {
        return findVertexFloat(vtx,pfChgIso02_,lazy);
    }; // if lazy flag is true only compare key (needed since fwlite does not fill provenance info)
    float const pfChgIsoWrtWorstVtx04() const {
        return pfChgIsoWrtWorstVtx04_;
    };
    float const pfChgIsoWrtWorstVtx03() const {
        return pfChgIsoWrtWorstVtx03_;
    };
    float const pfChgIsoWrtChosenVtx02() const {
        return pfChgIsoWrtChosenVtx02_;
    };
    float const pfChgIsoWrtChosenVtx03() const {
        return pfChgIsoWrtChosenVtx03_;
    };
    float const esEffSigmaRR() const {
        return ESEffSigmaRR_;
    };

    bool hasEnergyAtStep(std::string key) const;
    float const energyAtStep(std::string key) const;
    float const sigEOverE() const {
        return sigEOverE_;
    };

    std::map<edm::Ptr<reco::Vertex>,float> const phoIdMvaD() const {
        return phoIdMvaD_;
    };
    float const phoIdMvaDWrtVtx( const edm::Ptr<reco::Vertex>& vtx, bool lazy=false ) const {
        return findVertexFloat(vtx,phoIdMvaD_,lazy);
    }; // if lazy flag is true only compare key (needed since fwlite does not fill provenance info)

    void setMatchedGenPhoton ( const edm::Ptr<pat::PackedGenParticle> pgp) {
        addUserCand("matchedGenPhoton",pgp);
    };
    const pat::PackedGenParticle* const matchedGenPhoton() const {
        return dynamic_cast<const pat::PackedGenParticle*>(userCand("matchedGenPhoton").get());
    };
    bool hasMatchedGenPhoton () const {
        return hasUserCand("matchedGenPhoton");
    };

    void setGenMatchType (mcMatch_t typ) {
        addUserInt("genMatchType",(int)typ);
    };
    mcMatch_t  genMatchType() const {
        return (hasUserInt("genMatchType") ? (mcMatch_t)userInt("genMatchType") : kUnkown);
    };
    bool  hasGenMatchType () const {
        return hasUserInt("genMatchType");
    };

    void setPassElectronVeto( bool val) {
        passElecVeto_ = val;
    };
    bool passElectronVeto() const {
        return passElecVeto_ ;
    };

private:
    float const findVertexFloat(const edm::Ptr<reco::Vertex>& vtx, const std::map<edm::Ptr<reco::Vertex>,float> & mp, bool lazy) const;

    float sipip_;
    float sieip_;
    float zernike20_;
    float zernike42_;
    float e2nd_;
    float e2x5right_;
    float e2x5left_;
    float e2x5top_;
    float e2x5bottom_;
    float e2x5max_;
    float eright_;
    float eleft_;
    float etop_;
    float ebottom_;
    float e1x3_;
    float S4_;
    float pfPhoIso04_;
    float pfPhoIso03_;
    float pfNeutIso04_;
    float pfNeutIso03_;
    float pfChgIsoWrtWorstVtx04_;
    float pfChgIsoWrtWorstVtx03_;
    float pfChgIsoWrtChosenVtx02_;
    float pfChgIsoWrtChosenVtx03_;
    float ESEffSigmaRR_;
    float sigEOverE_;
    std::map<edm::Ptr<reco::Vertex>,float> pfChgIso04_;
    std::map<edm::Ptr<reco::Vertex>,float> pfChgIso03_;
    std::map<edm::Ptr<reco::Vertex>,float> pfChgIso02_;
    std::map<edm::Ptr<reco::Vertex>,float> phoIdMvaD_;
    bool passElecVeto_;
};
}

#endif