@class NSString, MAAutoAssetSelector, MAAutoAssetStatus;

@interface MAAutoAssetSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (nonatomic) long long assetRepresentation;
@property (nonatomic) BOOL assetWasPatched;
@property (nonatomic) BOOL assetIsStaged;
@property (nonatomic) BOOL assetIsSecureMobileAsset;
@property (nonatomic) BOOL secureMobileAssetIsPersonalized;
@property (nonatomic) BOOL secureMobileAssetIsPrePersonalized;
@property (nonatomic) BOOL secureMobileAssetIsGrafted;
@property (retain, nonatomic) NSString *secureMobileAssetGraftPoint;
@property (retain, nonatomic) MAAutoAssetStatus *jobStatus;
@property (nonatomic) long long scheduledIntervalSecs;
@property (nonatomic) long long scheduledRemainingSecs;
@property (nonatomic) long long pushDelaySecs;
@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long totalClientCount;
@property (nonatomic) unsigned long long stageGroup;
@property (retain, nonatomic) NSString *targetOS;

+ (id)assetRepresentationName:(long long)a0;
+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedBanner:(id)a0;
+ (id)summaryPaddedHeader:(id)a0;
+ (id)summaryPaddedString:(id)a0 paddingToLenghtOfString:(id)a1 paddingWith:(id)a2 paddingBefore:(BOOL)a3;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)assetRepresentationName;
- (BOOL)getStringsForSummaryProps:(id *)a0 isPersonalized:(id *)a1 isPrePersonalized:(id *)a2 isGrafted:(id *)a3 graftPoint:(id *)a4 stageGroup:(id *)a5 targetOS:(id *)a6;
- (id)initWithAssetSelector:(id)a0 withAssetRepresentation:(long long)a1 withAssetWasPatched:(BOOL)a2 withAssetIsStaged:(BOOL)a3 withJobStatus:(id)a4 withScheduledIntervalSecs:(long long)a5 withScheduledRemainingSecs:(long long)a6 withPushDelaySecs:(long long)a7 withActiveClientCount:(long long)a8 withActiveMonitorCount:(long long)a9 withMaximumClientCount:(long long)a10 withTotalClientCount:(long long)a11;
- (id)initWithAssetSelector:(id)a0 withAssetRepresentation:(long long)a1 withAssetWasPatched:(BOOL)a2 withAssetIsStaged:(BOOL)a3 withJobStatus:(id)a4 withScheduledIntervalSecs:(long long)a5 withScheduledRemainingSecs:(long long)a6 withPushDelaySecs:(long long)a7 withActiveClientCount:(long long)a8 withActiveMonitorCount:(long long)a9 withMaximumClientCount:(long long)a10 withTotalClientCount:(long long)a11 withIsSecureMobileAsset:(BOOL)a12 withPersonalizationStatus:(BOOL)a13 withPrePersonalizationStatus:(BOOL)a14 withGraftStatus:(BOOL)a15 withGraftPoint:(id)a16 withStageGroupType:(unsigned long long)a17 withTargetOS:(id)a18;
- (id)newSummaryDictionary;
- (void)summaryBuildMaxColumnStrings:(id)a0;
- (id)summaryPadded:(id)a0;

@end
