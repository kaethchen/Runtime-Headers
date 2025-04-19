@class NSArray;

@interface CIMMecabraCandidate : CIMCandidate

@property (readonly) void *mecabraCandidate;
@property (getter=isCompositionCandidate) BOOL compositionCandidate;
@property (readonly) NSArray *segmentedReading;
@property (readonly) NSArray *segmentedSurface;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (BOOL)isEmojiCandidate;
- (id)stringIdentifier;
- (BOOL)isPrefixMatched;
- (BOOL)isBilingualCandidate;
- (BOOL)isCompletionCandidate;
- (BOOL)isExtensionCandidate;
- (BOOL)isFacemarkCandidate;
- (id)initWithMecabraCandidate:(void *)a0;
- (id)displayReading;
- (id)fuzzyReading;
- (BOOL)isFuzzyCandidate;
- (BOOL)isLearningDictionaryCandidate;
- (BOOL)isPredictionCandidate;
- (BOOL)isUserWordCandidate;
- (BOOL)isWubiConvertedByPinyin;
- (id)segmentedAnalysisString;
- (id)segmentedStringWithString:(id)a0 lengths:(id)a1;

@end
