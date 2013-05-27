// $Id: BRANCH.h,v 1.3 2013/02/12 18:56:16 david Exp $
#ifndef __PF2ASM_NODE_jumps_BRANCH_H__
#define __PF2ASM_NODE_jumps_BRANCH_H__

#include <cdk/nodes/Node.h>
#include "semantics/SemanticProcessor.h"

namespace pf2asm {
  namespace node {
    namespace jumps {

      class BRANCH: public cdk::node::Node {
      public:
        inline BRANCH(int lineno) :
          cdk::node::Node(lineno) {
        }
        inline const char *name() const { return "BRANCH"; }
        inline void accept(SemanticProcessor *sp, int level) {
          sp->processBRANCH(this, level);
        }
      };

    } // namespace nodes/jumps
  } // namespace node
} // namespace pf2asm

#endif

/*
 * $Log: BRANCH.h,v $
 * Revision 1.3  2013/02/12 18:56:16  david
 * Major code cleanup and simplification. Uses CDK8. C++11 is required.
 *
 * Revision 1.2  2009/05/09 17:36:55  david
 * Major node cleanup. Parser simplification.
 *
 * Revision 1.1  2009/02/25 07:32:00  david
 * First working version of pf2asm. This version still uses
 * byacc.
 *
 *
 */
