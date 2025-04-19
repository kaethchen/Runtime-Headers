@class NSString;

@interface BMPerBatchDomainSpecificAssetCounts : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int parsedAssetCount;
@property (nonatomic) BOOL hasParsedAssetCount;
@property (readonly, nonatomic) int anyDomainAssetCount;
@property (nonatomic) BOOL hasAnyDomainAssetCount;
@property (readonly, nonatomic) int artAssetCount;
@property (nonatomic) BOOL hasArtAssetCount;
@property (readonly, nonatomic) int natureAssetCount;
@property (nonatomic) BOOL hasNatureAssetCount;
@property (readonly, nonatomic) int animalsAssetCount;
@property (nonatomic) BOOL hasAnimalsAssetCount;
@property (readonly, nonatomic) int birdsAssetCount;
@property (nonatomic) BOOL hasBirdsAssetCount;
@property (readonly, nonatomic) int insectsAssetCount;
@property (nonatomic) BOOL hasInsectsAssetCount;
@property (readonly, nonatomic) int reptilesAssetCount;
@property (nonatomic) BOOL hasReptilesAssetCount;
@property (readonly, nonatomic) int mammalsAssetCount;
@property (nonatomic) BOOL hasMammalsAssetCount;
@property (readonly, nonatomic) int landmarkAssetCount;
@property (nonatomic) BOOL hasLandmarkAssetCount;
@property (readonly, nonatomic) int naturalLandmarkAssetCount;
@property (nonatomic) BOOL hasNaturalLandmarkAssetCount;
@property (readonly, nonatomic) int mediaAssetCount;
@property (nonatomic) BOOL hasMediaAssetCount;
@property (readonly, nonatomic) int bookAssetCount;
@property (nonatomic) BOOL hasBookAssetCount;
@property (readonly, nonatomic) int albumAssetCount;
@property (nonatomic) BOOL hasAlbumAssetCount;
@property (readonly, nonatomic) int catsAssetCount;
@property (nonatomic) BOOL hasCatsAssetCount;
@property (readonly, nonatomic) int dogsAssetCount;
@property (nonatomic) BOOL hasDogsAssetCount;
@property (readonly, nonatomic) int apparelAssetCount;
@property (nonatomic) BOOL hasApparelAssetCount;
@property (readonly, nonatomic) int foodAssetCount;
@property (nonatomic) BOOL hasFoodAssetCount;
@property (readonly, nonatomic) int storefrontAssetCount;
@property (nonatomic) BOOL hasStorefrontAssetCount;
@property (readonly, nonatomic) int signSymbolAssetCount;
@property (nonatomic) BOOL hasSignSymbolAssetCount;
@property (readonly, nonatomic) int laundryCareSymbolAssetCount;
@property (nonatomic) BOOL hasLaundryCareSymbolAssetCount;
@property (readonly, nonatomic) int autoSymbolAssetCount;
@property (nonatomic) BOOL hasAutoSymbolAssetCount;
@property (readonly, nonatomic) int brandLogoSymbolAssetCount;
@property (nonatomic) BOOL hasBrandLogoSymbolAssetCount;
@property (readonly, nonatomic) int object2DAssetCount;
@property (nonatomic) BOOL hasObject2DAssetCount;
@property (readonly, nonatomic) int barcodeDetectionAssetCount;
@property (nonatomic) BOOL hasBarcodeDetectionAssetCount;
@property (readonly, nonatomic) int sculptureAssetCount;
@property (nonatomic) BOOL hasSculptureAssetCount;
@property (readonly, nonatomic) int skylineAssetCount;
@property (nonatomic) BOOL hasSkylineAssetCount;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithParsedAssetCount:(id)a0 anyDomainAssetCount:(id)a1 artAssetCount:(id)a2 natureAssetCount:(id)a3 animalsAssetCount:(id)a4 birdsAssetCount:(id)a5 insectsAssetCount:(id)a6 reptilesAssetCount:(id)a7 mammalsAssetCount:(id)a8 landmarkAssetCount:(id)a9 naturalLandmarkAssetCount:(id)a10 mediaAssetCount:(id)a11 bookAssetCount:(id)a12 albumAssetCount:(id)a13 catsAssetCount:(id)a14 dogsAssetCount:(id)a15 apparelAssetCount:(id)a16 foodAssetCount:(id)a17 storefrontAssetCount:(id)a18 signSymbolAssetCount:(id)a19 laundryCareSymbolAssetCount:(id)a20 autoSymbolAssetCount:(id)a21 brandLogoSymbolAssetCount:(id)a22 object2DAssetCount:(id)a23 barcodeDetectionAssetCount:(id)a24 sculptureAssetCount:(id)a25 skylineAssetCount:(id)a26;

@end
