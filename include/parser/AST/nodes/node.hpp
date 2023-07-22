#ifndef PARSER_AST_NODES_NODE_HPP
#define PARSER_AST_NODES_NODE_HPP

#include <string>

namespace parser::AST::nodes {
    struct Node {
        virtual ~Node() = default;
        virtual std::string compile() = 0;
    };
}


#endif