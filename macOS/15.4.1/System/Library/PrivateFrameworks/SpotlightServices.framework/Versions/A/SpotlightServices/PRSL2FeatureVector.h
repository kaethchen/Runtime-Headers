@class NSString, NSDictionary, NSMutableDictionary, NSDate, PRSRankingItem, NSArray;

@interface PRSL2FeatureVector : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _featureDataLock;
    struct PRSL2FeatureScoreSmallCache { unsigned short features[32]; float scores[32]; unsigned short count; } _cache;
    void *_featureData;
    unsigned short _featureDataSize;
    unsigned char _flags;
    unsigned char _values;
}

@property (nonatomic) float originalL2Score;
@property (nonatomic) float experimentalScore;
@property (nonatomic) float withinBundleScore;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *device_type;
@property (retain, nonatomic) NSDictionary *searchThroughCEPData;
@property (nonatomic) unsigned __int128 indexScore;
@property (nonatomic) BOOL displayNameFuzzySpecialInsertion;
@property (nonatomic) BOOL isSiriAction;
@property (nonatomic) BOOL isAppInDock;
@property (readonly, nonatomic) BOOL vipSenderMatchesQuery;
@property (readonly, nonatomic) BOOL senderIsVip;
@property (readonly, nonatomic) BOOL receiverIsVip;
@property (retain, nonatomic) NSDictionary *roundTripFeatures;
@property (weak, nonatomic) PRSRankingItem *rankingItem;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) long long textChunkTokenLength;
@property (retain, nonatomic) NSMutableDictionary *topicalityAnonFeatDict;
@property (nonatomic) float kMDMailRead;
@property (nonatomic) float kMDMailRepliedTo;
@property (nonatomic) float kMDMailFlagged;
@property (nonatomic) long long kMDItemMailCategories;
@property (nonatomic) long long kMDItemCustomPageVisitCountScore;
@property (nonatomic) long long kMDItemUseCount;
@property (nonatomic) long long kMDItemPlayCount;
@property (retain, nonatomic) NSDate *kMDMailReceivedDate;
@property (retain, nonatomic) NSDate *kMDMailLastViewedDate;
@property (retain, nonatomic) NSDate *kMDMailFreshnessDate;
@property (retain, nonatomic) NSDate *kMDItemContentCreationDate;
@property (retain, nonatomic) NSDate *kMDItemLastUsedDate;
@property (retain, nonatomic) NSDate *kMDItemApplicationLastLaunchedDate;
@property (retain, nonatomic) NSDate *kMDItemContentModificationDate;
@property (retain, nonatomic) NSDate *kMDItemDueDate;
@property (retain, nonatomic) NSDate *kMDItemCompletionDate;
@property (retain, nonatomic) NSDate *kMDItemExpirationDate;
@property (retain, nonatomic) NSDate *kMDItemStartDate;
@property (retain, nonatomic) NSDate *kMDItemEndDate;
@property (retain, nonatomic) NSString *kMDItemContentType;
@property (retain, nonatomic) NSArray *kMDItemUsedDates;
@property (retain, nonatomic) NSArray *kMDItemRecentSpotlightEngagementDatesNonUnique;
@property (retain, nonatomic) NSArray *kMDItemRecentOutOfSpotlightEngagementDates;
@property (retain, nonatomic) NSArray *kMDItemRecentAppSearchEngagementDates;

+ (void)initialize;
+ (struct __CFSet { } *)getL2FeatureSet;
+ (struct FeatureInfo { id x0; unsigned short x1; unsigned char x2; } *)featureForName:(id)a0;
+ (id)allowedAttributeSetForAnonPipeline;
+ (id)contextWithFeatureOrder:(id)a0 withInflation:(unsigned long long)a1 withInflatedIndexToSize:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (id)dictionaryRepresentation;
- (float)scoreForFeature:(unsigned short)a0;
- (BOOL)serializeToJSON:(void *)a0 options:(long long)a1;
- (id)_dictionaryRepresentationWithoutDefaultValues:(BOOL)a0;
- (id)dictionaryRepresentationWithoutDefaultValues;
- (float *)getAllScores:(float[3240])a0;
- (id)initWithCache:(struct PRSL2FeatureScoreSmallCache { unsigned short x0[32]; float x1[32]; unsigned short x2; })a0 featureData:(void *)a1 featureDataSize:(unsigned short)a2 flags:(unsigned char)a3 values:(unsigned char)a4;
- (void)restoreFromJazzkonPlusHacks:(float *)a0;
- (void)setAllDisplayNameFeatures:(float *)a0 withValue:(float)a1;
- (void)setScores:(float *)a0 forFeatures:(unsigned short *)a1 count:(unsigned long long)a2;
- (void)swapAllContentCreationDateFeatures:(float *)a0;
- (void)swapAllLastUsedDateFeatures:(float *)a0;
- (void)swapAllRecenyFeatures:(float *)a0;
- (void)swapFeature:(unsigned short)a0 withSubstitute:(unsigned short)a1 scores:(float *)a2;

@end
