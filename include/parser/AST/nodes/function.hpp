#ifndef PARSER_AST_NODES_FUNCTION_HPP
#define PARSER_AST_NODES_FUNCTION_HPP

#include "parser/AST/nodes/node.hpp"

namespace parser::AST::nodes {
    class Function : public Node {
    public:
        std::string compile() override;
    private:
        
    };
}


#endif