@class NSString, NSArray, TIMecabraEnvironmentContextWrapper, TIKeyboardLayout, NSMutableArray, NSDictionary;

@interface TIMecabraEnvironment : NSObject

@property (class, readonly, nonatomic) int maxNumberOfDrawSamples;

@property (retain, nonatomic) TIMecabraEnvironmentContextWrapper *mecabraContextWrapper;
@property (nonatomic) int mecabraLanguage;
@property (nonatomic) BOOL shouldAdjustOnAnalyze;
@property (retain, nonatomic) NSMutableArray *candidatesLeftOfCaret;
@property (retain, nonatomic) NSMutableArray *candidatesRightOfCaret;
@property (copy, nonatomic) NSString *leftDocumentContextCorrespondingToCandidates;
@property (copy, nonatomic) NSString *rightDocumentContextCorrespondingToCandidates;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } leftDocumentContextCorrespondingToCandidatesRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rightDocumentContextCorrespondingToCandidatesRange;
@property (retain, nonatomic) NSMutableArray *candidatesToDelete;
@property (nonatomic) BOOL canSuggestSupplementalItems;
@property (readonly, nonatomic) NSArray *contextCandidateSurfaces;
@property (readonly, nonatomic) NSArray *inlineCandidateSurfaces;
@property (readonly, nonatomic) NSArray *rightCandidateSurfaces;
@property (copy, nonatomic) NSString *leftDocumentContext;
@property (copy, nonatomic) NSString *rightDocumentContext;
@property (nonatomic) int textContentType;
@property (readonly, nonatomic) struct __Mecabra { } *mecabra;
@property (readonly, nonatomic) TIKeyboardLayout *baseLayout;
@property (readonly, nonatomic) NSDictionary *environmentDebuggingInformation;

+ (id)getWordFrom:(void *)a0 atIndex:(unsigned long long)a1 forSurface:(BOOL)a2;
+ (id)getWordFromAnalysisStringOf:(void *)a0 atIndex:(unsigned long long)a1;
+ (id)getWordFromSurfaceOf:(void *)a0 atIndex:(unsigned long long)a1;
+ (void)loadMobileAssetContentsForInputModes:(id)a0 assetContentTypes:(id)a1 inMecabra:(struct __Mecabra { } *)a2 onQueue:(id)a3;
+ (void)loadMobileAssetContentsForInputModes:(id)a0 assetContentTypes:(id)a1 onQueue:(id)a2 withCompletionBlock:(id /* block */)a3;
+ (void)loadMobileAssetContentsForInputModes:(id)a0 inMecabra:(struct __Mecabra { } *)a1 onQueue:(id)a2;
+ (void)loadMobileAssetContentsForInputModes:(id)a0 onQueue:(id)a1 withCompletionBlock:(id /* block */)a2;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForCHRecognizer:(id)a0 inputModes:(id)a1 onQueue:(id)a2 oldMobileAssetChangeListener:(id)a3;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForMecabra:(struct __Mecabra { } *)a0 inputModes:(id)a1 onQueue:(id)a2 oldMobileAssetChangeListener:(id)a3;
+ (void)removeMobileAssetListener:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (void)setKeyboardLayout:(id)a0;
- (void)setPrivateMode:(BOOL)a0;
- (void)setAppContext:(id)a0;
- (unsigned long long)candidateIndex;
- (void)setCandidateIndex:(long long)a0;
- (void)addCandidateWithString:(id)a0 toArray:(id)a1;
- (id)initWithMecabraEngine:(struct __Mecabra { } *)a0 language:(int)a1;
- (void)partiallyCommitInlineCandidate:(void *)a0;
- (void)setLeftDocumentContextInternal:(id)a0;
- (id)_longestWubiCodeForCharacter:(id)a0;
- (id)_wubiCodeForWord:(id)a0;
- (void)acceptInlineCandidates;
- (BOOL)addNewCandidatesIfNecessary:(long long)a0;
- (void)addPunctuationCandidateToContext:(id)a0;
- (void)addStringCandidateToContext:(id)a0;
- (void)addStringCandidateToContextInternal:(id)a0;
- (void)adjustEnvironment:(long long)a0;
- (void)adjustEnvironmentDirectly:(long long)a0;
- (void)adjustEnvironmentOnAction:(long long)a0;
- (void)analyzeCandidateContextWithSplit:(BOOL)a0;
- (BOOL)analyzeInput:(id)a0 options:(unsigned long long)a1;
- (BOOL)analyzeString:(id)a0 options:(unsigned long long)a1;
- (void)canSuggestSupplementalItemsFlagDidChangeTo:(BOOL)a0;
- (void)commitPredictionCandidate:(void *)a0;
- (void)compareDocumentAndEnvironmentCandidates;
- (void)completelyCommitInlineCandidate:(void *)a0;
- (id)contactNameWubiCodePairsForFirstName:(id)a0 lastName:(id)a1;
- (void)createNewCandidatesFromDocumentContext;
- (void)declareEndOfSentence;
- (BOOL)documentContextIsEmpty;
- (id)findSupplementalLexiconCandidatesSurroundingCursor;
- (void)insertCandidateWithString:(id)a0 intoArray:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)predictionAnalyzeWithOptions:(unsigned long long)a0 maxNumberOfCandidates:(unsigned long long)a1;
- (id)readingForWubiWord:(id)a0;
- (void)revertInlineCandidate;
- (void)revertLearningOfCandidateIfNecessary;
- (void)setGeometryModel:(void *)a0 modelData:(struct __CFArray { } *)a1;
- (void)setInTypeToSiriMode:(BOOL)a0;
- (void)setShuangpinType:(int)a0;
- (void)updateCursorPosition;
- (id)wubiAnnotationForCandidate:(id)a0;

@end
