@class NSString, NSMutableArray, NSCharacterSet;

@interface _HKCFGNonTerminal : _HKCFGExpression {
    NSString *_label;
    NSMutableArray *_replacementRules;
}

@property (copy, nonatomic) NSCharacterSet *charactersToBeSkipped;

+ (id)nonTerminalWithLabel:(id)a0;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)_label;
- (id)initWithLabel:(id)a0;
- (void)_checkForCycles;
- (void)_checkForCycles:(id)a0;
- (unsigned long long)_minimumLength;
- (id)_parseTreeWithContext:(id)a0;
- (id)_replacementRules;
- (BOOL)_tryNodesForExpressions:(id)a0 nodes:(id)a1 context:(id)a2 solutionTest:(id /* block */)a3;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;
- (void)addReplacementRuleWithExpressions:(id)a0 nodeEvaluator:(id /* block */)a1;

@end
