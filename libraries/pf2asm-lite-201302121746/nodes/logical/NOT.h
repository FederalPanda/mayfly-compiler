// $Id: NOT.h,v 1.3 2013/02/12 18:56:17 david Exp $
#ifndef __PF2ASM_NODE_logical_NOT_H__
#define __PF2ASM_NODE_logical_NOT_H__

#include <cdk/nodes/Node.h>
#include "semantics/SemanticProcessor.h"

namespace pf2asm {
  namespace node {
    namespace logical {

      class NOT: public cdk::node::Node {
      public:
        inline NOT(int lineno) :
          cdk::node::Node(lineno) {
        }
        inline const char *name() const { return "NOT"; }
        inline void accept(SemanticProcessor *sp, int level) {
          sp->processNOT(this, level);
        }
      };

    } // namespace nodes/logical
  } // namespace node
} // namespace pf2asm

#endif

/*
 * $Log: NOT.h,v $
 * Revision 1.3  2013/02/12 18:56:17  david
 * Major code cleanup and simplification. Uses CDK8. C++11 is required.
 *
 * Revision 1.2  2009/05/09 17:36:56  david
 * Major node cleanup. Parser simplification.
 *
 * Revision 1.1  2009/02/25 07:32:01  david
 * First working version of pf2asm. This version still uses
 * byacc.
 *
 *
 */
