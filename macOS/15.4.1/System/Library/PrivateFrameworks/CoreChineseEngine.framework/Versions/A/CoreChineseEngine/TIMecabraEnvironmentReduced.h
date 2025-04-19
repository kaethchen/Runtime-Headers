@class NSString, NSDictionary;

@interface TIMecabraEnvironmentReduced : NSObject

@property (copy, nonatomic) NSString *leftDocumentContext;
@property (copy, nonatomic) NSString *rightDocumentContext;
@property (nonatomic) int textContentType;
@property (nonatomic) struct __Mecabra { } *mecabra;
@property (nonatomic) struct __MecabraContext { } *mecabraContext;
@property (readonly, nonatomic) NSDictionary *environmentDebuggingInformation;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setAppContext:(id)a0;
- (id)initWithMecabraEngine:(struct __Mecabra { } *)a0 language:(int)a1;
- (void)partiallyCommitInlineCandidate:(void *)a0;
- (void)acceptInlineCandidates;
- (void)addPunctuationCandidateToContext:(id)a0;
- (void)addStringCandidateToContext:(id)a0;
- (void)adjustEnvironmentDirectly:(long long)a0;
- (void)adjustEnvironmentOnAction:(long long)a0;
- (BOOL)analyzeString:(id)a0 options:(unsigned long long)a1;
- (void)completelyCommitInlineCandidate:(void *)a0;
- (void)declareEndOfSentence;
- (BOOL)predictionAnalyzeWithOptions:(unsigned long long)a0 maxNumberOfCandidates:(unsigned long long)a1;
- (void)revertInlineCandidate;
- (void)setGeometryModel:(void *)a0 modelData:(struct __CFArray { } *)a1;
- (void)setShuangpinType:(int)a0;

@end
