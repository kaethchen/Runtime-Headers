@class PSIRankedGroupV2, PLSearchSuggestionTemplate;

@interface PLSearchSuggestionCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) struct __CFArray { } *assetIdsForDateFilter;
@property (nonatomic) unsigned long long intersectionCount;
@property (nonatomic) unsigned long long minAssetResultCountPerSuggestion;
@property (nonatomic) float rankingScore;
@property (readonly, nonatomic) PLSearchSuggestionTemplate *suggestionTemplate;
@property (readonly, nonatomic) PSIRankedGroupV2 *firstGroup;
@property (readonly, nonatomic) PSIRankedGroupV2 *secondGroup;
@property (readonly, nonatomic) unsigned long long styleType;
@property (nonatomic) double timeSinceLastUsed;

+ (id)updateCandidates:(id)a0 withTimestampsFromPreviouslyStoredCandidates:(id)a1;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (BOOL)hasDateFilter;
- (BOOL)hasFirstCategory;
- (BOOL)hasSecondCategory;
- (id)initWithSearchSuggestionTemplate:(id)a0 firstGroup:(id)a1 secondGroup:(id)a2 assetIdsForDateFilter:(struct __CFArray { } *)a3 minAssetResultCountPerSuggestion:(unsigned long long)a4 styleType:(unsigned long long)a5;
- (id)populatedTemplateQueryString;
- (id)populatedTemplateQueryStringInLocalization:(id)a0;

@end
