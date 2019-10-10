//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Aug 23 12:36:41 2017 by ROOT version 6.06/08
// from TTree physics/physics
// found on file: group.det-muon.8594477.L1TGCNtuple._000001.root
//////////////////////////////////////////////////////////

#ifndef TUNINGTOOLS_MUONPHYSVAL_H
#define TUNINGTOOLS_MUONPHYSVAL_H
#include <vector>
#include <string>
#include "Rtypes.h"
//#include "TObject.h"

struct MuonPhysVal /*: public TObject*/ {

   // Declaration of leaf types
   Int_t           RunNumber;
   Int_t           EventNumber;
   Int_t           timeStamp;
   Int_t           timeStampNSOffset;
   Int_t           lbn;
   Int_t           bcid;
   Int_t           detmask0;
   Int_t           detmask1;
   Float_t         actualIntPerXing;
   Float_t         averageIntPerXing;
   Int_t           pixelFlags;
   Int_t           sctFlags;
   Int_t           trtFlags;
   Int_t           larFlags;
   Int_t           tileFlags;
   Int_t           muonFlags;
   Int_t           fwdFlags;
   Int_t           coreFlags;
   Int_t           pixelError;
   Int_t           sctError;
   Int_t           trtError;
   Int_t           larError;
   Int_t           tileError;
   Int_t           muonError;
   Int_t           fwdError;
   Int_t           coreError;
   Int_t           trig_L1_mu_n;
   vector<float>   *trig_L1_mu_eta;
   vector<float>   *trig_L1_mu_phi;
   vector<string>  *trig_L1_mu_thrName;
   vector<short>   *trig_L1_mu_thrNumber;
   vector<short>   *trig_L1_mu_RoINumber;
   vector<short>   *trig_L1_mu_sectorAddress;
   vector<int>     *trig_L1_mu_firstCandidate;
   vector<int>     *trig_L1_mu_moreCandInRoI;
   vector<int>     *trig_L1_mu_moreCandInSector;
   vector<short>   *trig_L1_mu_source;
   vector<short>   *trig_L1_mu_hemisphere;
   vector<short>   *trig_L1_mu_charge;
   vector<int>     *trig_L1_mu_vetoed;
   Int_t           mu_n;
   vector<float>   *mu_pt;
   vector<float>   *mu_eta;
   vector<float>   *mu_phi;
   vector<float>   *mu_m;
   vector<int>     *mu_charge;
   vector<int>     *mu_author;
   vector<unsigned short> *mu_allAuthors;
   vector<int>     *mu_muonType;
   vector<float>   *mu_etcone20;
   vector<float>   *mu_etcone30;
   vector<float>   *mu_etcone40;
   vector<float>   *mu_ptcone20;
   vector<float>   *mu_ptcone30;
   vector<float>   *mu_ptcone40;
   vector<float>   *mu_trackfitchi2;
   vector<float>   *mu_trackfitndof;
   vector<int>     *mu_isPassedMCP;
   vector<int>     *mu_quality;
   vector<float>   *mu_msInnerMatchChi2;
   vector<float>   *mu_msOuterMatchChi2;
   vector<int>     *mu_msInnerMatchDOF;
   vector<int>     *mu_msOuterMatchDOF;
   vector<int>     *mu_nOutliersOnTrack;
   vector<int>     *mu_nBLHits;
   vector<int>     *mu_nPixHits;
   vector<int>     *mu_nSCTHits;
   vector<int>     *mu_nTRTHits;
   vector<int>     *mu_nTRTHighTHits;
   vector<int>     *mu_nBLSharedHits;
   vector<int>     *mu_nPixSharedHits;
   vector<int>     *mu_nPixHoles;
   vector<int>     *mu_nSCTSharedHits;
   vector<int>     *mu_nSCTHoles;
   vector<int>     *mu_nTRTOutliers;
   vector<int>     *mu_nTRTHighTOutliers;
   vector<int>     *mu_nGangedPixels;
   vector<int>     *mu_nPixelDeadSensors;
   vector<int>     *mu_nSCTDeadSensors;
   vector<int>     *mu_nTRTDeadStraws;
   vector<int>     *mu_expectBLayerHit;
   vector<int>     *mu_nPrecisionLayers;
   vector<int>     *mu_nPrecisionHoleLayers;
   vector<int>     *mu_nPhiLayers;
   vector<int>     *mu_nPhiHoleLayers;
   vector<int>     *mu_nTrigEtaLayers;
   vector<int>     *mu_nTrigEtaHoleLayers;
   vector<int>     *mu_primarySector;
   vector<int>     *mu_secondarySector;
   vector<int>     *mu_nInnerSmallHits;
   vector<int>     *mu_nInnerLargeHits;
   vector<int>     *mu_nMiddleSmallHits;
   vector<int>     *mu_nMiddleLargeHits;
   vector<int>     *mu_nOuterSmallHits;
   vector<int>     *mu_nOuterLargeHits;
   vector<int>     *mu_nExtendedSmallHits;
   vector<int>     *mu_nExtendedLargeHits;
   vector<int>     *mu_nInnerSmallHoles;
   vector<int>     *mu_nInnerLargeHoles;
   vector<int>     *mu_nMiddleSmallHoles;
   vector<int>     *mu_nMiddleLargeHoles;
   vector<int>     *mu_nOuterSmallHoles;
   vector<int>     *mu_nOuterLargeHoles;
   vector<int>     *mu_nExtendedSmallHoles;
   vector<int>     *mu_nExtendedLargeHoles;
   vector<int>     *mu_nPhiLayer1Hits;
   vector<int>     *mu_nPhiLayer2Hits;
   vector<int>     *mu_nPhiLayer3Hits;
   vector<int>     *mu_nPhiLayer4Hits;
   vector<int>     *mu_nEtaLayer1Hits;
   vector<int>     *mu_nEtaLayer2Hits;
   vector<int>     *mu_nEtaLayer3Hits;
   vector<int>     *mu_nEtaLayer4Hits;
   vector<int>     *mu_nPhiLayer1Holes;
   vector<int>     *mu_nPhiLayer2Holes;
   vector<int>     *mu_nPhiLayer3Holes;
   vector<int>     *mu_nPhiLayer4Holes;
   vector<int>     *mu_nEtaLayer1Holes;
   vector<int>     *mu_nEtaLayer2Holes;
   vector<int>     *mu_nEtaLayer3Holes;
   vector<int>     *mu_nEtaLayer4Holes;
   vector<float>   *mu_cb_d0;
   vector<float>   *mu_cb_z0;
   vector<float>   *mu_cb_phi0;
   vector<float>   *mu_cb_theta;
   vector<float>   *mu_cb_qOverP;
   vector<float>   *mu_cb_vx;
   vector<float>   *mu_cb_vy;
   vector<float>   *mu_cb_vz;
   Int_t           museg_n;
   vector<float>   *museg_x;
   vector<float>   *museg_y;
   vector<float>   *museg_z;
   vector<float>   *museg_px;
   vector<float>   *museg_py;
   vector<float>   *museg_pz;
   vector<float>   *museg_t0;
   vector<float>   *museg_t0error;
   vector<float>   *museg_chi2;
   vector<float>   *museg_ndof;
   vector<int>     *museg_sector;
   vector<int>     *museg_stationName;
   vector<int>     *museg_stationEta;
   vector<int>     *museg_author;
   Int_t           ext_mu_bias_n;
   vector<int>     *ext_mu_bias_type;
   vector<int>     *ext_mu_bias_index;
   vector<int>     *ext_mu_bias_size;
   vector<vector<int> > *ext_mu_bias_targetVec;
   vector<vector<float> > *ext_mu_bias_targetDistanceVec;
   vector<vector<float> > *ext_mu_bias_targetEtaVec;
   vector<vector<float> > *ext_mu_bias_targetPhiVec;
   vector<vector<float> > *ext_mu_bias_targetDeltaEtaVec;
   vector<vector<float> > *ext_mu_bias_targetDeltaPhiVec;
   vector<vector<float> > *ext_mu_bias_targetPxVec;
   vector<vector<float> > *ext_mu_bias_targetPyVec;
   vector<vector<float> > *ext_mu_bias_targetPzVec;
   Int_t           ext_mu_ubias_n;
   vector<int>     *ext_mu_ubias_type;
   vector<int>     *ext_mu_ubias_index;
   vector<int>     *ext_mu_ubias_size;
   vector<vector<int> > *ext_mu_ubias_targetVec;
   vector<vector<float> > *ext_mu_ubias_targetDistanceVec;
   vector<vector<float> > *ext_mu_ubias_targetEtaVec;
   vector<vector<float> > *ext_mu_ubias_targetPhiVec;
   vector<vector<float> > *ext_mu_ubias_targetDeltaEtaVec;
   vector<vector<float> > *ext_mu_ubias_targetDeltaPhiVec;
   vector<vector<float> > *ext_mu_ubias_targetPxVec;
   vector<vector<float> > *ext_mu_ubias_targetPyVec;
   vector<vector<float> > *ext_mu_ubias_targetPzVec;
   Int_t           trigger_info_n;
   vector<string>  *trigger_info_chain;
   vector<int>     *trigger_info_isPassed;
   vector<int>     *trigger_info_nTracks;
   vector<vector<int> > *trigger_info_typeVec;
   vector<vector<float> > *trigger_info_ptVec;
   vector<vector<float> > *trigger_info_etaVec;
   vector<vector<float> > *trigger_info_phiVec;
   Int_t           vxp_n;
   vector<float>   *vxp_x;
   vector<float>   *vxp_y;
   vector<float>   *vxp_z;
   vector<float>   *vxp_cov_x;
   vector<float>   *vxp_cov_y;
   vector<float>   *vxp_cov_z;
   vector<float>   *vxp_cov_xy;
   vector<float>   *vxp_cov_xz;
   vector<float>   *vxp_cov_yz;
   vector<float>   *vxp_chi2;
   vector<int>     *vxp_ndof;
   vector<int>     *vxp_nTracks;
   vector<int>     *vxp_type;
   Int_t           TGC_prd_n;
   vector<float>   *TGC_prd_x;
   vector<float>   *TGC_prd_y;
   vector<float>   *TGC_prd_z;
   vector<float>   *TGC_prd_shortWidth;
   vector<float>   *TGC_prd_longWidth;
   vector<float>   *TGC_prd_length;
   vector<int>     *TGC_prd_isStrip;
   vector<int>     *TGC_prd_gasGap;
   vector<int>     *TGC_prd_channel;
   vector<int>     *TGC_prd_eta;
   vector<int>     *TGC_prd_phi;
   vector<int>     *TGC_prd_station;
   vector<int>     *TGC_prd_bunch;
   Int_t           RPC_prd_n;
   vector<float>   *RPC_prd_x;
   vector<float>   *RPC_prd_y;
   vector<float>   *RPC_prd_z;
   vector<float>   *RPC_prd_x2;
   vector<float>   *RPC_prd_y2;
   vector<float>   *RPC_prd_z2;
   vector<float>   *RPC_prd_time;
   vector<int>     *RPC_prd_triggerInfo;
   vector<int>     *RPC_prd_ambiguityFlag;
   vector<int>     *RPC_prd_measuresPhi;
   vector<int>     *RPC_prd_inRibs;
   vector<int>     *RPC_prd_station;
   vector<int>     *RPC_prd_stationEta;
   vector<int>     *RPC_prd_stationPhi;
   vector<int>     *RPC_prd_doubletR;
   vector<int>     *RPC_prd_doubletZ;
   vector<double>  *RPC_prd_stripWidth;
   vector<double>  *RPC_prd_stripLength;
   vector<int>     *RPC_prd_gasGap;
   vector<int>     *RPC_prd_channel;
   Int_t           MDT_prd_n;
   vector<float>   *MDT_prd_x;
   vector<float>   *MDT_prd_y;
   vector<float>   *MDT_prd_z;
   vector<int>     *MDT_prd_adc;
   vector<int>     *MDT_prd_tdc;
   vector<int>     *MDT_prd_status;
   vector<float>   *MDT_prd_drift_radius;
   vector<float>   *MDT_prd_drift_radius_error;
   Int_t           TGC_coin_n;
   vector<float>   *TGC_coin_x_In;
   vector<float>   *TGC_coin_y_In;
   vector<float>   *TGC_coin_z_In;
   vector<float>   *TGC_coin_x_Out;
   vector<float>   *TGC_coin_y_Out;
   vector<float>   *TGC_coin_z_Out;
   vector<float>   *TGC_coin_width_In;
   vector<float>   *TGC_coin_width_Out;
   vector<float>   *TGC_coin_width_R;
   vector<float>   *TGC_coin_width_Phi;
   vector<int>     *TGC_coin_isAside;
   vector<int>     *TGC_coin_isForward;
   vector<int>     *TGC_coin_isStrip;
   vector<int>     *TGC_coin_isInner;
   vector<int>     *TGC_coin_isPositiveDeltaR;
   vector<int>     *TGC_coin_type;
   vector<int>     *TGC_coin_trackletId;
   vector<int>     *TGC_coin_trackletIdStrip;
   vector<int>     *TGC_coin_phi;
   vector<int>     *TGC_coin_roi;
   vector<int>     *TGC_coin_pt;
   vector<int>     *TGC_coin_delta;
   vector<int>     *TGC_coin_sub;
   vector<int>     *TGC_coin_veto;
   vector<int>     *TGC_coin_bunch;
   vector<int>     *TGC_coin_inner;
   Int_t           TILE_murcv_trig_n;
   vector<int>     *TILE_murcv_trig_mod;
   vector<int>     *TILE_murcv_trig_part;
   vector<bool>    *TILE_murcv_trig_bit0;
   vector<bool>    *TILE_murcv_trig_bit1;
   vector<bool>    *TILE_murcv_trig_bit2;
   vector<bool>    *TILE_murcv_trig_bit3;
   Int_t           TILE_murcv_raw_n;
   vector<float>   *TILE_murcv_raw_count;
   vector<float>   *TILE_murcv_raw_energy;
   vector<int>     *TILE_murcv_raw_ros;
   vector<int>     *TILE_murcv_raw_drawer;
   vector<int>     *TILE_murcv_raw_channel;
   Int_t           TILE_murcv_digit_n;
   vector<int>     *TILE_murcv_digit_nSamples;
   vector<int>     *TILE_murcv_digit_ros;
   vector<int>     *TILE_murcv_digit_drawer;
   vector<int>     *TILE_murcv_digit_channel;
   vector<vector<float> > *TILE_murcv_digit_sampleVec;
   Int_t           TGC_hierarchy_n;
   vector<int>     *TGC_hierarchy_index;
   vector<int>     *TGC_hierarchy_dR_hiPt;
   vector<int>     *TGC_hierarchy_dPhi_hiPt;
   vector<int>     *TGC_hierarchy_dR_tracklet;
   vector<int>     *TGC_hierarchy_dPhi_tracklet;
   vector<int>     *TGC_hierarchy_isChamberBoundary;
   vector<unsigned int> *muctpi_candidateMultiplicities;
   Int_t           muctpi_nDataWords;
   vector<unsigned int> *muctpi_dataWords;
   vector<float>   *muctpi_dw_eta;
   vector<float>   *muctpi_dw_phi;
   vector<short>   *muctpi_dw_source;
   vector<short>   *muctpi_dw_hemisphere;
   vector<short>   *muctpi_dw_bcid;
   vector<short>   *muctpi_dw_sectorID;
   vector<short>   *muctpi_dw_thrNumber;
   vector<short>   *muctpi_dw_roi;
   vector<short>   *muctpi_dw_veto;
   vector<short>   *muctpi_dw_firstCandidate;
   vector<short>   *muctpi_dw_moreCandInRoI;
   vector<short>   *muctpi_dw_moreCandInSector;
   vector<short>   *muctpi_dw_charge;
   vector<short>   *muctpi_dw_candidateVetoed;
   Int_t           TILE_cell_n;
   vector<float>   *TILE_cell_E;
   vector<float>   *TILE_cell_Et;
   vector<float>   *TILE_cell_eta;
   vector<float>   *TILE_cell_phi;
   vector<float>   *TILE_cell_sinTh;
   vector<float>   *TILE_cell_cosTh;
   vector<float>   *TILE_cell_cotTh;
   vector<float>   *TILE_cell_x;
   vector<float>   *TILE_cell_y;
   vector<float>   *TILE_cell_z;
   vector<int>     *TILE_cell_badcell;
   vector<int>     *TILE_cell_partition;
   vector<int>     *TILE_cell_section;
   vector<int>     *TILE_cell_side;
   vector<int>     *TILE_cell_module;
   vector<int>     *TILE_cell_tower;
   vector<int>     *TILE_cell_sample;

};
#endif // #ifdef