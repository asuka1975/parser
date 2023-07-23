#ifndef PARSER_RULES_FUNCTION_HPP
#define PARSER_RULES_FUNCTION_HPP


#include "parser/rules/rule.hpp"
#include <list>
#include <memory>

namespace parser::rules {
    class Function : public virtual Rule {
    public:
        bool read(std::unique_ptr<lexer::parser::tokens::Token> token) override;

    private:
        std::unique_ptr<Rule> type;
        std::unique_ptr<Rule> name;
        std::list<std::unique_ptr<Rule>> args;
        std::list<std::unique_ptr<Rule>> body;
    };
}

#endif