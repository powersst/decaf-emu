#pragma once
#include "common/types.h"
#include "common/bitfield.h"

namespace latte
{

// Coherence Control
BITFIELD(CP_COHER_CNTL, uint32_t)
   BITFIELD_ENTRY(0, 1, bool, DEST_BASE_0_ENA)
   BITFIELD_ENTRY(1, 1, bool, DEST_BASE_1_ENA)
   BITFIELD_ENTRY(2, 1, bool, SO0_DEST_BASE_ENA)
   BITFIELD_ENTRY(3, 1, bool, SO1_DEST_BASE_ENA)
   BITFIELD_ENTRY(4, 1, bool, SO2_DEST_BASE_ENA)
   BITFIELD_ENTRY(5, 1, bool, SO3_DEST_BASE_ENA)
   BITFIELD_ENTRY(6, 1, bool, CB0_DEST_BASE_ENA)
   BITFIELD_ENTRY(7, 1, bool, CB1_DEST_BASE_ENA)
   BITFIELD_ENTRY(8, 1, bool, CB2_DEST_BASE_ENA)
   BITFIELD_ENTRY(9, 1, bool, CB3_DEST_BASE_ENA)
   BITFIELD_ENTRY(10, 1, bool, CB4_DEST_BASE_ENA)
   BITFIELD_ENTRY(11, 1, bool, CB5_DEST_BASE_ENA)
   BITFIELD_ENTRY(12, 1, bool, CB6_DEST_BASE_ENA)
   BITFIELD_ENTRY(13, 1, bool, CB7_DEST_BASE_ENA)
   BITFIELD_ENTRY(14, 1, bool, DB_DEST_BASE_ENA)
   BITFIELD_ENTRY(20, 1, bool, FULL_CACHE_ENA)
   BITFIELD_ENTRY(23, 1, bool, TC_ACTION_ENA)
   BITFIELD_ENTRY(24, 1, bool, VC_ACTION_ENA)
   BITFIELD_ENTRY(25, 1, bool, CB_ACTION_ENA)
   BITFIELD_ENTRY(26, 1, bool, DB_ACTION_ENA)
   BITFIELD_ENTRY(27, 1, bool, SH_ACTION_ENA)
   BITFIELD_ENTRY(28, 1, bool, SX_ACTION_ENA)
   BITFIELD_ENTRY(31, 1, bool, ENGINE_ME)
BITFIELD_END

} // namespace latte
