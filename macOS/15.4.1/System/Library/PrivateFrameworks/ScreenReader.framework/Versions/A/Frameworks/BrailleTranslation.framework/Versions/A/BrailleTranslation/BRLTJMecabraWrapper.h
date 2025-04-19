@class NSString, NSMutableDictionary;

@interface BRLTJMecabraWrapper : NSObject {
    NSString *_string;
    struct __Mecabra { } *_mecabra;
    struct __MecabraContext { } *_context;
    NSMutableDictionary *_candidateRefForSurface;
    NSString *_currentAnalysis;
    NSString *_currentSurface;
    BOOL _reachedEnd;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)learnCandidate:(id)a0;
- (void)analyzeString:(id)a0;
- (id)getCurrentCandidateAnalysisString;
- (id)getCurrentCandidateSurface;
- (id)initWithUnitTesting:(BOOL)a0;
- (BOOL)moveToNextCandidate;

@end
