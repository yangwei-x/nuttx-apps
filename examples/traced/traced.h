/****************************************************************************
 * apps/examples/traced/traced.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __APPS_EXAMPLES_TRACED_TRACED_H
#define __APPS_EXAMPLES_TRACED_TRACED_H

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Configuration ************************************************************/

/* CONFIG_EXAMPLES_TRACED_DAEMONPRIO - Priority of the Trace daemon.
 *   Default: SCHED_PRIORITY_DEFAULT
 * CONFIG_EXAMPLES_TRACED_DAEMONSTACKSIZE - Stack size allocated for the
 *   Trace daemon. Default: 2048
 * CONFIG_EXAMPLES_TRACED_CLIENTPRIO- Priority of the Trace client.
 *   Default: SCHED_PRIORITY_DEFAULT
 * CONFIG_EXAMPLES_TRACED_CLIENTSTACKSIZE - Stack size allocated for the
 *   Trace client. Default: 2048
 * CONFIG_EXAMPLES_TRACED_NOMAC - If the hardware has no MAC address of its
 *   own, define this =y to provide a bogus address for testing.
 * CONFIG_EXAMPLES_TRACED_IPADDR - The target IP address.
 *   Default 10.0.0.2
 * CONFIG_EXAMPLES_TRACED_DRIPADDR - The default router address.
 *   Default 10.0.0.1
 * CONFIG_EXAMPLES_TRACED_NETMASK - The network mask.
 *   Default: 255.255.255.0
 */

#ifndef CONFIG_EXAMPLES_TRACED_DAEMONPRIO
#  define CONFIG_EXAMPLES_TRACED_DAEMONPRIO SCHED_PRIORITY_DEFAULT
#endif

#ifndef CONFIG_EXAMPLES_TRACED_DAEMONSTACKSIZE
#  define CONFIG_EXAMPLES_TRACED_DAEMONSTACKSIZE 2048
#endif

#ifndef CONFIG_EXAMPLES_TRACED_CLIENTPRIO
#  define CONFIG_EXAMPLES_TRACED_CLIENTPRIO SCHED_PRIORITY_DEFAULT
#endif

#ifndef CONFIG_EXAMPLES_TRACED_CLIENTSTACKSIZE
#  define CONFIG_EXAMPLES_TRACED_CLIENTSTACKSIZE 2048
#endif

#ifndef CONFIG_EXAMPLES_TRACED_IPADDR
#  define CONFIG_EXAMPLES_TRACED_IPADDR 0x0a000002
#endif
#ifndef CONFIG_EXAMPLES_TRACED_DRIPADDR
#  define CONFIG_EXAMPLES_TRACED_DRIPADDR 0x0a000002
#endif
#ifndef CONFIG_EXAMPLES_TRACED_NETMASK
#  define CONFIG_EXAMPLES_TRACED_NETMASK 0xffffff00
#endif

/* Other definitions ********************************************************/

#define SHELL_PROMPT "cfg> "

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#endif /* __APPS_EXAMPLES_TRACED_TRACED_H */
