@class NSString;

@interface BMMomentsEventDataEventBundleClusterMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isFiltered;
@property (nonatomic) BOOL hasIsFiltered;
@property (readonly, nonatomic) BOOL isTopLevelActivityTypePhenotypeDetected;
@property (nonatomic) BOOL hasIsTopLevelActivityTypePhenotypeDetected;
@property (readonly, nonatomic) BOOL isSecondLevelActivityTypePhenotypeDetected;
@property (nonatomic) BOOL hasIsSecondLevelActivityTypePhenotypeDetected;
@property (readonly, nonatomic) BOOL isWeekendPhenotypeDetected;
@property (nonatomic) BOOL hasIsWeekendPhenotypeDetected;
@property (readonly, nonatomic) BOOL isTimeTagPhenotypeDetected;
@property (nonatomic) BOOL hasIsTimeTagPhenotypeDetected;
@property (readonly, nonatomic) BOOL isDayOfWeekPhenotypeDetected;
@property (nonatomic) BOOL hasIsDayOfWeekPhenotypeDetected;
@property (readonly, nonatomic) BOOL isPlaceNamePhenotypeDetected;
@property (nonatomic) BOOL hasIsPlaceNamePhenotypeDetected;
@property (readonly, nonatomic) BOOL isCombinedPlacePhenotypeDetected;
@property (nonatomic) BOOL hasIsCombinedPlacePhenotypeDetected;
@property (readonly, nonatomic) BOOL isEnclosingAreaNamePhenotypeDetected;
@property (nonatomic) BOOL hasIsEnclosingAreaNamePhenotypeDetected;
@property (readonly, nonatomic) BOOL isPersonsPhenotypeDetected;
@property (nonatomic) BOOL hasIsPersonsPhenotypeDetected;
@property (readonly, nonatomic) BOOL isPersonRelationshipPhenotypeDetected;
@property (nonatomic) BOOL hasIsPersonRelationshipPhenotypeDetected;
@property (readonly, nonatomic) BOOL isActivityTypeFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) BOOL hasIsActivityTypeFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) BOOL isTimeContextFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) BOOL hasIsTimeContextFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) BOOL isLocationContextFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) BOOL hasIsLocationContextFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) BOOL isSocialContextFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) BOOL hasIsSocialContextFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) BOOL isExtraContextFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) BOOL hasIsExtraContextFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) BOOL isOtherSubjectFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) BOOL hasIsOtherSubjectFromPhotoTraitsPhenotypeDetected;
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
- (id)initWithIsFiltered:(id)a0 isTopLevelActivityTypePhenotypeDetected:(id)a1 isSecondLevelActivityTypePhenotypeDetected:(id)a2 isWeekendPhenotypeDetected:(id)a3 isTimeTagPhenotypeDetected:(id)a4 isDayOfWeekPhenotypeDetected:(id)a5 isPlaceNamePhenotypeDetected:(id)a6 isCombinedPlacePhenotypeDetected:(id)a7 isEnclosingAreaNamePhenotypeDetected:(id)a8 isPersonsPhenotypeDetected:(id)a9 isPersonRelationshipPhenotypeDetected:(id)a10 isActivityTypeFromPhotoTraitsPhenotypeDetected:(id)a11 isTimeContextFromPhotoTraitsPhenotypeDetected:(id)a12 isLocationContextFromPhotoTraitsPhenotypeDetected:(id)a13 isSocialContextFromPhotoTraitsPhenotypeDetected:(id)a14 isExtraContextFromPhotoTraitsPhenotypeDetected:(id)a15 isOtherSubjectFromPhotoTraitsPhenotypeDetected:(id)a16;

@end
