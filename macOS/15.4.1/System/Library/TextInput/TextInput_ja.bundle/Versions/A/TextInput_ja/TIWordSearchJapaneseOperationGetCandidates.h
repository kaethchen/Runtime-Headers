@class NSString;

@interface TIWordSearchJapaneseOperationGetCandidates : TIWordSearchOperationGetCandidates

@property (copy, nonatomic) NSString *previousCacheKey;
@property (readonly, nonatomic) NSString *contextString;
@property (nonatomic) BOOL flickUsed;
@property (nonatomic) BOOL phraseBoundarySet;
@property (nonatomic) BOOL allowIncompleteRomaji;
@property (nonatomic) BOOL referenceMode;
@property (nonatomic) BOOL singlePhrase;

- (void).cxx_destruct;
- (id)results;
- (void)checkForCachedResultsIfNeeded;
- (id)initWithWordSearch:(id)a0 inputString:(id)a1 keyboardInput:(id)a2 contextString:(id)a3 segmentBreakIndex:(unsigned long long)a4 predictionEnabled:(BOOL)a5 reanalysisMode:(BOOL)a6 autocapitalizationType:(unsigned long long)a7 target:(id)a8 action:(SEL)a9 geometryModelData:(id)a10 flickUsed:(BOOL)a11 phraseBoundarySet:(BOOL)a12 hardwareKeyboardMode:(BOOL)a13 logger:(id)a14;

@end
