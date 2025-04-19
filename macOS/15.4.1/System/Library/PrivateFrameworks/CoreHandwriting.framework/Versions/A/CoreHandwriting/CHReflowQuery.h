@interface CHReflowQuery : CHQuery

- (id)debugName;
- (BOOL)q_doesQueryResultDependOnDeclaredVariables;
- (id)reflowableTextTokensForInitialStrokes:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2 shouldCancel:(id /* block */)a3;

@end
