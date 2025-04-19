@interface CHTextStrokeTransformationQuery : CHQuery

- (id)debugName;
- (BOOL)q_doesQueryResultDependOnDeclaredVariables;
- (id)strokePointTransformationsForContextStrokes:(id)a0 completionWithTelemetry:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)strokePointTransformationsForContextStrokes:(id)a0 parameters:(id)a1 completionWithTelemetry:(id /* block */)a2 shouldCancel:(id /* block */)a3;

@end
