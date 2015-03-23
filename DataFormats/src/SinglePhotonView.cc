#Indent header
#header1
#header2
#include "flashgg/DataFormats/interface/SinglePhotonView.h"

namespace flashgg {

void SinglePhotonView::daughterMaybe() const
{
    if(pho_ == 0) {
        if( dipho_ == 0 ) {
            dipho_ = &(*edmdipho_);
        }
        if( dipho_ == 0 ) throw;
        pho_ = dynamic_cast<const Photon *>(dipho_->daughter(daughter_));
        if( pho_ == 0 ) throw;
    }
}
}