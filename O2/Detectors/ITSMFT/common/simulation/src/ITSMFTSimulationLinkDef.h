// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

#ifdef __CLING__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class o2::ITSMFT::Hit+;
#pragma link C++ class std::vector<o2::ITSMFT::Hit>+;
#pragma link C++ class o2::ITSMFT::ChipDigitsContainer + ;
#pragma link C++ class o2::ITSMFT::PreDigit + ;
#pragma link C++ class o2::ITSMFT::PreDigitLabelRef + ;
#pragma link C++ class o2::ITSMFT::AlpideChip+;
#pragma link C++ class o2::ITSMFT::AlpideSimResponse+;
#pragma link C++ class o2::ITSMFT::AlpideRespSimMat+;
#pragma link C++ class o2::ITSMFT::DigiParams+;
#pragma link C++ class o2::ITSMFT::Digitizer+;
#pragma link C++ class o2::ITSMFT::AlpideSignalTrapezoid + ;

#pragma link C++ class o2::ITSMFT::ClusterShape + ;

#pragma link C++ class o2::ITSMFT::DPLDigitizerParam < 0> + ;
#pragma link C++ class o2::ITSMFT::DPLDigitizerParam < 1> + ;

#pragma link C++ class o2::ITSMFT::DPLDigitWriterParam < 0> + ;
#pragma link C++ class o2::ITSMFT::DPLDigitWriterParam < 1> + ;

#endif
