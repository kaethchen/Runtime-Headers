@class NSNumberFormatter, CHNonTerminal, CHGrammar;

@interface CHParseTree : NSObject {
    BOOL __caseSensitive;
}

@property (retain, nonatomic) CHGrammar *grammar;
@property (retain, nonatomic) CHNonTerminal *root;
@property (retain, nonatomic) NSNumberFormatter *formatter;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inputRange;

- (id)description;
- (void).cxx_destruct;
- (id)_descriptionRecursive:(id)a0 level:(long long)a1;
- (id)_evaluationRecursive:(id)a0 withVariables:(id)a1;
- (id)_functionRepresentationRecursive:(id)a0;
- (id)_latexRepresentationRecursive:(id)a0;
- (BOOL)compareWith:(id)a0 compareTree:(BOOL)a1;
- (id)evaluateOpExpPriority:(id)a0;
- (id)evaluation;
- (id)evaluationWithVariables:(id)a0;
- (id)evaluationWithVariables:(id)a0 caseSensitive:(BOOL)a1;
- (id)functionRepresentation;
- (long long)getNumberOfNodes;
- (id)getSymbols;
- (id)initWithGrammar:(id)a0;
- (id)latexRepresentation;

@end
