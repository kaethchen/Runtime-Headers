@class NSString;

@interface BMMomentsEventDataEventBundlePlace : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int placeInferencePlaceType;
@property (readonly, nonatomic) int placeInferenceUserSpecificPlaceType;
@property (readonly, nonatomic) int geoPOICategoryType;
@property (readonly, nonatomic) double placeNameConfidence;
@property (nonatomic) BOOL hasPlaceNameConfidence;
@property (readonly, nonatomic) double familiarityIndexLOI;
@property (nonatomic) BOOL hasFamiliarityIndexLOI;
@property (readonly, nonatomic) double distanceToHomeInMiles;
@property (nonatomic) BOOL hasDistanceToHomeInMiles;
@property (readonly, nonatomic) double poiCategoryConfidence;
@property (nonatomic) BOOL hasPoiCategoryConfidence;
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
- (id)initWithPlaceInferencePlaceType:(int)a0 placeInferenceUserSpecificPlaceType:(int)a1 geoPOICategoryType:(int)a2 placeNameConfidence:(id)a3 familiarityIndexLOI:(id)a4 distanceToHomeInMiles:(id)a5;
- (id)initWithPlaceInferencePlaceType:(int)a0 placeInferenceUserSpecificPlaceType:(int)a1 geoPOICategoryType:(int)a2 placeNameConfidence:(id)a3 familiarityIndexLOI:(id)a4 distanceToHomeInMiles:(id)a5 poiCategoryConfidence:(id)a6;

@end
