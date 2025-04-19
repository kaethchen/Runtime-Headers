@class NSNumber;

@interface CHTextSynthesisQuery : CHQuery

@property (retain, nonatomic) NSNumber *styleControlStrength;

- (void).cxx_destruct;
- (id)debugName;
- (BOOL)q_doesQueryResultDependOnDeclaredVariables;
- (id)refinedTokensForContextStrokes:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)refinedTokensForSingleLineContextStrokes:(id)a0 transcription:(id)a1 completion:(id /* block */)a2 shouldCancel:(id /* block */)a3;
- (id)refinementOfContextStrokesWithTranscriptions:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)refinementOfSingleLineContextStrokes:(id)a0 transcription:(id)a1 completion:(id /* block */)a2 shouldCancel:(id /* block */)a3;
- (id)synthesizeTokensForString:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2 shouldCancel:(id /* block */)a3;
- (id)synthesizeTokensForString:(id)a0 replacingStrokes:(id)a1 completion:(id /* block */)a2 shouldCancel:(id /* block */)a3;

@end
