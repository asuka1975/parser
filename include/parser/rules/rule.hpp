#ifndef PARSER_RULES_RULE_HPP
#define PARSER_RULES_RULE_HPP

#include <memory>

#include <lexer/parser/tokens/token.hpp>

namespace parser::rules {
    struct Rule {
        virtual ~Rule() = default;
        virtual bool read(std::unique_ptr<lexer::parser::tokens::Token> token) = 0;
    };
}

#endif