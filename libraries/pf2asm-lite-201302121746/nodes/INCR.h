// $Id: INCR.h,v 1.3 2013/02/12 18:56:14 david Exp $
#ifndef __PF2ASM_NODE_nodes_INCR_H__
#define __PF2ASM_NODE_nodes_INCR_H__

#include <cdk/nodes/Node.h>
#include "semantics/SemanticProcessor.h"

namespace pf2asm {
  namespace node {

    class INCR: public cdk::node::Node {
      int _value;

    public:
      inline INCR(int lineno, int value) :
        cdk::node::Node(lineno), _value(value) {
      }
      inline int value() const {
        return _value;
      }
      inline const char *name() const { return "INCR"; }
      inline void accept(SemanticProcessor *sp, int level) {
        sp->processINCR(this, level);
      }
    };

  } // namespace node
} // namespace pf2asm

#endif

/*
 * $Log: INCR.h,v $
 * Revision 1.3  2013/02/12 18:56:14  david
 * Major code cleanup and simplification. Uses CDK8. C++11 is required.
 *
 * Revision 1.2  2009/05/09 17:36:53  david
 * Major node cleanup. Parser simplification.
 *
 * Revision 1.1  2009/02/25 07:31:56  david
 * First working version of pf2asm. This version still uses
 * byacc.
 *
 *
 */
