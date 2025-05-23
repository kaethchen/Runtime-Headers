@class NSString, NSArray, NSDate, NSMutableArray;

@interface TIMecabraEnvironmentContextWrapper : NSObject

@property (retain, nonatomic) NSMutableArray *environmentCandidates;
@property (nonatomic) struct __MecabraContext { } *mecabraContext;
@property (retain, nonatomic) NSDate *lastAnalyzeInputDate;
@property (copy, nonatomic) NSString *appContext;
@property (nonatomic) unsigned long long candidateIndex;
@property (nonatomic) unsigned long long candidateInternalIndex;
@property (readonly, nonatomic) NSArray *contextCandidates;
@property (readonly, nonatomic) NSArray *contextCandidateStrings;
@property (readonly, nonatomic) unsigned long long contextCandidateCount;
@property (readonly, nonatomic) NSArray *environmentCandidateStrings;
@property (readonly, nonatomic) unsigned long long environmentCandidateCount;
@property (readonly, nonatomic) NSArray *inlineCandidates;
@property (readonly, nonatomic) struct __Mecabra { } *mecabraEngine;
@property (retain, nonatomic) NSMutableArray *temporaryCandidates;
@property (nonatomic) int textContentType;
@property (nonatomic) int shuangpinType;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setKeyboardLayout:(id)a0;
- (void)setPrivateMode:(BOOL)a0;
- (void)clearContext;
- (void)clearAll;
- (id)initWithMecabraEngine:(struct __Mecabra { } *)a0 language:(int)a1;
- (void)partiallyCommitInlineCandidate:(void *)a0;
- (void)acceptInlineCandidates;
- (void)addContextCandidate:(void *)a0 accept:(BOOL)a1;
- (void)addContextStringCandidate:(void *)a0;
- (void)addEnvironmentCandidate:(void *)a0 atIndex:(unsigned long long)a1;
- (BOOL)analyzeInput:(id)a0 options:(unsigned long long)a1;
- (BOOL)analyzeString:(id)a0 options:(unsigned long long)a1;
- (void)clearInline;
- (void)commitPredictionCandidate:(void *)a0;
- (void)completelyCommitInlineCandidate:(void *)a0;
- (id)contextString:(id)a0 forRightContext:(BOOL)a1;
- (void *)createMecabraCandidateFromString:(id)a0;
- (void)declareEndOfSentence;
- (id)findSupplementalLexiconCandidatesSurroundingCursor;
- (BOOL)predictionCandidatesWithOptions:(unsigned long long)a0 maxNumberOfCandidates:(unsigned long long)a1;
- (void)removeCandidatesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)revertInlineCandidate;
- (void)revertLearningForCandidate:(void *)a0;
- (void)setGeometryModel:(void *)a0 modelData:(struct __CFArray { } *)a1;
- (void)setInTypeToSiriMode:(BOOL)a0;
- (void)syncEnvironmentAndContextCandidates;

@end
