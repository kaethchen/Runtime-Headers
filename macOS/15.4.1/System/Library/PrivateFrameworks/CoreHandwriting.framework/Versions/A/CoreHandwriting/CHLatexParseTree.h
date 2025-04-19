@interface CHLatexParseTree : CHParseTree {
    BOOL __caseSensitive;
}

- (id)_evaluationRecursive:(id)a0 withVariables:(id)a1;
- (id)_functionRepresentationRecursive:(id)a0;
- (id)_latexRepresentationRecursive:(id)a0;
- (id)evaluateOpExpPriority:(id)a0;
- (id)evaluateVerticalMath:(id)a0;
- (id)evaluation;
- (id)evaluationWithVariables:(id)a0;
- (id)evaluationWithVariables:(id)a0 caseSensitive:(BOOL)a1;
- (id)functionRepresentation;
- (id)latexRepresentation;

@end
