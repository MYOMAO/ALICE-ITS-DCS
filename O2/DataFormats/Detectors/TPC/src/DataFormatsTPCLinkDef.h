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

#pragma link C++ class o2::TPC::ClusterHardware + ;
#pragma link C++ class o2::TPC::ClusterHardwareContainer + ;
#pragma link C++ class o2::TPC::ClusterNative + ;
#pragma link C++ class o2::TPC::ClusterHardwareContainer8kb + ;
#pragma link C++ class o2::TPC::ClusterHardwareContainerFixedSize < 8192 > +;
#pragma link C++ class o2::TPC::ClusterNativeContainer + ;
#pragma link C++ class std::vector < o2::TPC::ClusterNative > +;
#pragma link C++ class std::vector < o2::TPC::ClusterNativeContainer > +;
#pragma link C++ class std::vector < o2::TPC::ClusterHardware > +;
#pragma link C++ class std::vector < o2::TPC::ClusterHardwareContainerFixedSize < 8192 >> +;
#pragma link C++ class std::vector < o2::TPC::ClusterHardwareContainer8kb > +;
#pragma link C++ class o2::TPC::TPCClusterFormatHelper + ;
#pragma link C++ class o2::TPC::TrackTPC + ;
#pragma link C++ class o2::TPC::Cluster + ;
#pragma link C++ class std::vector < o2::TPC::Cluster > +;
#pragma link C++ class std::vector < o2::TPC::TrackTPC > +;
#pragma link C++ class o2::TPC::ClusterNativeHelper + ;
#pragma link C++ class o2::TPC::ClusterNativeHelper::Reader + ;
#pragma link C++ class o2::TPC::ClusterNativeHelper::TreeWriter + ;
#pragma link C++ class o2::TPC::ClusterNativeHelper::TreeWriter::BranchData + ;
#pragma link C++ class std::vector < o2::TPC::ClusterNativeHelper::TreeWriter::BranchData > +;

#endif
