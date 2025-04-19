@class NSString;

@interface BMMediaAnalysisPerAsset : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *shootingCategory;
@property (readonly, nonatomic) NSString *shootingMode;
@property (readonly, nonatomic) int duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) int highlightCount;
@property (nonatomic) BOOL hasHighlightCount;
@property (readonly, nonatomic) int highlightDuration;
@property (nonatomic) BOOL hasHighlightDuration;
@property (readonly, nonatomic) int temporalFaceCount;
@property (nonatomic) BOOL hasTemporalFaceCount;
@property (readonly, nonatomic) int temporalSceneCount;
@property (nonatomic) BOOL hasTemporalSceneCount;
@property (readonly, nonatomic) BOOL containNamedPerson;
@property (nonatomic) BOOL hasContainNamedPerson;
@property (readonly, nonatomic) BOOL containNamedPet;
@property (nonatomic) BOOL hasContainNamedPet;
@property (readonly, nonatomic) BOOL containNatureOrNaturalLandmarks;
@property (nonatomic) BOOL hasContainNatureOrNaturalLandmarks;
@property (readonly, nonatomic) BOOL containSkyline;
@property (nonatomic) BOOL hasContainSkyline;
@property (readonly, nonatomic) BOOL containLandmarks;
@property (nonatomic) BOOL hasContainLandmarks;
@property (readonly, nonatomic) BOOL containAction;
@property (nonatomic) BOOL hasContainAction;
@property (readonly, nonatomic) BOOL containHighMotion;
@property (nonatomic) BOOL hasContainHighMotion;
@property (readonly, nonatomic) BOOL containAudioTypes;
@property (nonatomic) BOOL hasContainAudioTypes;
@property (readonly, nonatomic) BOOL atFavoritedLocation;
@property (nonatomic) BOOL hasAtFavoritedLocation;
@property (readonly, nonatomic) int durationOriginal;
@property (nonatomic) BOOL hasDurationOriginal;
@property (readonly, nonatomic) int highlightCountOriginal;
@property (nonatomic) BOOL hasHighlightCountOriginal;
@property (readonly, nonatomic) int highlightDurationOriginal;
@property (nonatomic) BOOL hasHighlightDurationOriginal;
@property (readonly, nonatomic) int temporalFaceCountOriginal;
@property (nonatomic) BOOL hasTemporalFaceCountOriginal;
@property (readonly, nonatomic) int temporalSceneCountOriginal;
@property (nonatomic) BOOL hasTemporalSceneCountOriginal;
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
- (id)initWithContentType:(id)a0 shootingCategory:(id)a1 shootingMode:(id)a2 duration:(id)a3 highlightCount:(id)a4 highlightDuration:(id)a5 temporalFaceCount:(id)a6 temporalSceneCount:(id)a7 containNamedPerson:(id)a8 containNamedPet:(id)a9 containNatureOrNaturalLandmarks:(id)a10 containSkyline:(id)a11 containLandmarks:(id)a12 containAction:(id)a13 containHighMotion:(id)a14 containAudioTypes:(id)a15 atFavoritedLocation:(id)a16 durationOriginal:(id)a17 highlightCountOriginal:(id)a18 highlightDurationOriginal:(id)a19 temporalFaceCountOriginal:(id)a20 temporalSceneCountOriginal:(id)a21;

@end
