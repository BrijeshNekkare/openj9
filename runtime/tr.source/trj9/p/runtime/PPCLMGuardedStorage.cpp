/*******************************************************************************
 * Copyright (c) 2000, 2016 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/

#include "trj9/p/runtime/PPCLMGuardedStorage.hpp"
#include "trj9/p/runtime/PPCHWProfilerPrivate.hpp"

int32_t lmEventHandler(TR_PPCHWProfilerEBBContext *context)
   {
   // Then clear BESCR[LMEO] and set BESCR[LME]
   //MTSPR(BESCRR, BESCR_LMEO);
   //MTSPR(BESCRSU, BESCRU_LME);
   return 0;
   }

TR_PPCLMGuardedStorage::TR_PPCLMGuardedStorage(J9JITConfig *jitConfig)
   : TR_LMGuardedStorage(jitConfig)
   {}

