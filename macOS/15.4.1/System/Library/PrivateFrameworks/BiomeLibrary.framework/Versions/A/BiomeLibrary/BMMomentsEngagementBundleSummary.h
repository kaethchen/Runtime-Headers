@class NSArray, NSString, NSDate, BMMomentsEngagementSuggestionIdentifier;

@interface BMMomentsEngagementBundleSummary : BMEventBase <BMStoreData> {
    BOOL _hasRaw_startDate;
    double _raw_startDate;
    BOOL _hasRaw_endDate;
    double _raw_endDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMMomentsEngagementSuggestionIdentifier *identifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) int interfaceType;
@property (readonly, nonatomic) double rankingScore;
@property (nonatomic) BOOL hasRankingScore;
@property (readonly, nonatomic) NSArray *attachedPhotoAssets;
@property (readonly, nonatomic) NSString *bundleInterfaceType;
@property (readonly, nonatomic) NSString *bundleEvergreenType;
@property (readonly, nonatomic) int bundleSubType;
@property (readonly, nonatomic) int bundleSuperType;
@property (readonly, nonatomic) double bundleGoodnessScore;
@property (nonatomic) BOOL hasBundleGoodnessScore;
@property (readonly, nonatomic) int ordinalRankInRecommendedTab;
@property (nonatomic) BOOL hasOrdinalRankInRecommendedTab;
@property (readonly, nonatomic) int visibilityCategoryForUI;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_assetsJSONArray;
- (id)_attachedPhotoAssetsJSONArray;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 interfaceType:(int)a3 rankingScore:(id)a4 attachedPhotoAssets:(id)a5;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 interfaceType:(int)a3 rankingScore:(id)a4 attachedPhotoAssets:(id)a5 bundleInterfaceType:(id)a6 bundleEvergreenType:(id)a7;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 interfaceType:(int)a3 rankingScore:(id)a4 attachedPhotoAssets:(id)a5 bundleInterfaceType:(id)a6 bundleEvergreenType:(id)a7 bundleSubType:(int)a8 bundleSuperType:(int)a9 bundleGoodnessScore:(id)a10 ordinalRankInRecommendedTab:(id)a11 visibilityCategoryForUI:(int)a12 assets:(id)a13;

@end
