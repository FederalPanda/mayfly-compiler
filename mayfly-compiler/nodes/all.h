//
// **** AUTOMATICALLY GENERATED BY mknodedecls.pl -- DO NOT EDIT ****
//
#ifdef __NODE_DECLARATIONS_ONLY__

//---------------------------------------------------------------------------
//     THESE ARE PREDEFINED NODES, AVAILABLE FROM THE CDK
//---------------------------------------------------------------------------

namespace cdk {
  namespace node {
    class Node;  class Nil;  class Data;  class Composite;  class Sequence;
    namespace expression {
      template <class T> class Simple;
      class Double;  class Integer;  class String;  class Identifier;
      class UnaryExpression;
      class NEG;
      class BinaryExpression;
      class ADD;  class SUB;  class MUL;  class DIV;  class MOD;
      class LT;   class LE;   class GE;   class GT;   class EQ;   class NE;
    }
  } // namespace node
} // namespace cdk

//---------------------------------------------------------------------------
//     THESE ARE THE NODES DEFINED SPECIFICALLY FOR THIS APPLICATION
//---------------------------------------------------------------------------

namespace mayfly {
namespace node { class BreakNode; } 
namespace node { class ContinueNode; } 
namespace node { class ForDownToNode; } 
namespace node { class VariableDeclaration; } 
namespace node { class IfElseNode; } 
namespace node { class DoWhileNode; } 
namespace node { class PrintNode; } 
namespace node { class ExpressionAsInstruction; } 
namespace node { class FunctionDeclaration; } 
namespace node { class ReturnNode; } 
namespace node { namespace expression { class Addressing; } } 
namespace node { namespace expression { class Read; } } 
namespace node { namespace expression { class LeftValue; } } 
namespace node { namespace expression { class Decrement; } } 
namespace node { namespace expression { class MemoryReservation; } } 
namespace node { namespace expression { class Increment; } } 
namespace node { namespace expression { class NOT; } } 
namespace node { namespace expression { class AND; } } 
namespace node { namespace expression { class FunctionCall; } } 
namespace node { namespace expression { class Identity; } } 
namespace node { namespace expression { class Assignment; } } 
namespace node { namespace expression { class OR; } } 
namespace node { namespace expression { class Indexing; } } 
namespace node { class IfNode; } 
namespace node { class ForUpToNode; } 
namespace node { class Block; } 
namespace node { class FunctionDefinition; } 
} // namespace mayfly

//---------------------------------------------------------------------------
//     A L I A S E S
//---------------------------------------------------------------------------

// make sure the "semantics" namespace is known
namespace mayfly { namespace semantics {} }

#else /* !defined(__NODE_DECLARATIONS_ONLY__) */

#ifndef __AUTOMATIC_NODE_ALLNODES_H__
#define __AUTOMATIC_NODE_ALLNODES_H__

//---------------------------------------------------------------------------
//     THESE ARE PREDEFINED NODES, AVAILABLE FROM THE CDK
//---------------------------------------------------------------------------

#include <cdk/nodes/Node.h>
#include <cdk/nodes/Data.h>
#include <cdk/nodes/Nil.h>
#include <cdk/nodes/Composite.h>
#include <cdk/nodes/Sequence.h>

#include <cdk/nodes/expressions/Integer.h>
#include <cdk/nodes/expressions/Double.h>
#include <cdk/nodes/expressions/String.h>
#include <cdk/nodes/expressions/Identifier.h>
#include <cdk/nodes/expressions/NEG.h>
#include <cdk/nodes/expressions/ADD.h>
#include <cdk/nodes/expressions/SUB.h>
#include <cdk/nodes/expressions/MUL.h>
#include <cdk/nodes/expressions/DIV.h>
#include <cdk/nodes/expressions/MOD.h>
#include <cdk/nodes/expressions/LT.h>
#include <cdk/nodes/expressions/GT.h>
#include <cdk/nodes/expressions/GE.h>
#include <cdk/nodes/expressions/LE.h>
#include <cdk/nodes/expressions/NE.h>
#include <cdk/nodes/expressions/EQ.h>

//---------------------------------------------------------------------------
//     THESE ARE THE NODES DEFINED SPECIFICALLY FOR THIS APPLICATION
//---------------------------------------------------------------------------

#include "nodes/BreakNode.h"
#include "nodes/ContinueNode.h"
#include "nodes/ForDownToNode.h"
#include "nodes/VariableDeclaration.h"
#include "nodes/IfElseNode.h"
#include "nodes/DoWhileNode.h"
#include "nodes/PrintNode.h"
#include "nodes/ExpressionAsInstruction.h"
#include "nodes/FunctionDeclaration.h"
#include "nodes/ReturnNode.h"
#include "nodes/expression/Addressing.h"
#include "nodes/expression/Read.h"
#include "nodes/expression/LeftValue.h"
#include "nodes/expression/Decrement.h"
#include "nodes/expression/MemoryReservation.h"
#include "nodes/expression/Increment.h"
#include "nodes/expression/NOT.h"
#include "nodes/expression/AND.h"
#include "nodes/expression/FunctionCall.h"
#include "nodes/expression/Identity.h"
#include "nodes/expression/Assignment.h"
#include "nodes/expression/OR.h"
#include "nodes/expression/Indexing.h"
#include "nodes/IfNode.h"
#include "nodes/ForUpToNode.h"
#include "nodes/Block.h"
#include "nodes/FunctionDefinition.h"


//---------------------------------------------------------------------------
//     A L I A S E S
//---------------------------------------------------------------------------

// make sure the "semantics" namespace is known
namespace mayfly { namespace semantics {} }

//---------------------------------------------------------------------------
//     T H E    E N D
//---------------------------------------------------------------------------

#endif /* !defined(__AUTOMATIC_NODE_ALLNODES_H__) */

#endif /* !defined(__NODE_DECLARATIONS_ONLY__) */
