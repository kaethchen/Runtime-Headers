@class NSDictionary, TIMecabraEnvironment;

@interface CIMMecabraShapeBasedEngine : NSObject <TIMecabraEnvironmentProvider, CIMMecabraEngineSubstitution>

@property (nonatomic) int inputMethodType;
@property (nonatomic) unsigned long long creationOptions;
@property (retain, nonatomic) NSDictionary *creationOptionsDictionary;
@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment;
@property (readonly, nonatomic) struct __Mecabra { } *mecabraEngine;

- (void).cxx_destruct;
- (void)partiallyCommitInlineCandidate:(id)a0;
- (id)candidatesForInputString:(id)a0;
- (void)completelyCommitInlineCandidate:(id)a0;
- (id)candidatesWithAnalysisString:(id)a0 options:(unsigned long long)a1;
- (id)initWithInputMethodType:(int)a0 creationOptions:(unsigned long long)a1 creationOptionsDictionary:(id)a2;
- (id)inputStringForCharacters:(id)a0;
- (id)strokeCandidatesWithAnalysisString:(id)a0 displayInputPrefix:(id)a1 input:(id)a2 options:(unsigned long long)a3;
- (void)unlearnCandidate:(id)a0;

@end
