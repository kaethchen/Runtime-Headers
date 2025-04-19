@class NSString, PLSearchSuggestionComponent;

@interface PSIRankedGroupV2 : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float rankingScore;
@property (nonatomic) float graphRankingScore;
@property (readonly, nonatomic) unsigned long long groupId;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *contentString;
@property (readonly, nonatomic) unsigned long long searchIndexingCategory;
@property (readonly, nonatomic) NSString *lookupIdentifier;
@property (readonly, nonatomic) BOOL isMePerson;
@property (readonly, nonatomic) PLSearchSuggestionComponent *suggestionComponent;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, retain, nonatomic) struct __CFArray { } *groupAssetIds;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (id)initWithGroup:(id)a0 displayString:(id)a1 isMePerson:(BOOL)a2;

@end
