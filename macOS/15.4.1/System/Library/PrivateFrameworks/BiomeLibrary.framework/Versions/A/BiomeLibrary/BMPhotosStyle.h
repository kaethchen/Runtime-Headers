@class NSArray, NSString;

@interface BMPhotosStyle : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double faceSizeRatio;
@property (nonatomic) BOOL hasFaceSizeRatio;
@property (readonly, nonatomic) BOOL isSunsetSunrise;
@property (nonatomic) BOOL hasIsSunsetSunrise;
@property (readonly, nonatomic) BOOL isOutdoor;
@property (nonatomic) BOOL hasIsOutdoor;
@property (readonly, nonatomic) BOOL isFood;
@property (nonatomic) BOOL hasIsFood;
@property (readonly, nonatomic) BOOL isIndoor;
@property (nonatomic) BOOL hasIsIndoor;
@property (readonly, nonatomic) NSArray *salientScenes;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *styleChoice;
@property (readonly, nonatomic) int styleSelectionType;
@property (readonly, nonatomic) NSArray *sliderValues;
@property (readonly, nonatomic) int userLibrarySize;
@property (readonly, nonatomic) int userLibraryAgeInDays;
@property (readonly, nonatomic) double brightnessValue;
@property (nonatomic) BOOL hasBrightnessValue;
@property (readonly, nonatomic) unsigned int stillImageProcessingFlags;
@property (nonatomic) BOOL hasStillImageProcessingFlags;
@property (readonly, nonatomic) unsigned int camera;
@property (nonatomic) BOOL hasCamera;
@property (readonly, nonatomic) unsigned int stillImageCaptureType;
@property (nonatomic) BOOL hasStillImageCaptureType;
@property (readonly, nonatomic) unsigned int faceCount;
@property (nonatomic) BOOL hasFaceCount;
@property (readonly, nonatomic) unsigned int petCount;
@property (nonatomic) BOOL hasPetCount;
@property (readonly, nonatomic) unsigned int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSString *sceneForAsset;
@property (readonly, nonatomic) NSString *subjectForAsset;
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
- (id)_sliderValuesJSONArray;
- (id)initWithIdentifier:(id)a0 styleChoice:(id)a1 styleSelectionType:(int)a2 sliderValues:(id)a3 userLibrarySize:(int)a4 userLibraryAgeInDays:(int)a5 brightnessValue:(id)a6 stillImageProcessingFlags:(id)a7 camera:(id)a8 stillImageCaptureType:(id)a9 faceCount:(id)a10 petCount:(id)a11 faceSizeRatio:(id)a12 isSunsetSunrise:(id)a13 isOutdoor:(id)a14 isFood:(id)a15 isIndoor:(id)a16 salientScenes:(id)a17;
- (id)initWithIdentifier:(id)a0 styleChoice:(id)a1 styleSelectionType:(int)a2 sliderValues:(id)a3 userLibrarySize:(int)a4 userLibraryAgeInDays:(int)a5 brightnessValue:(id)a6 stillImageProcessingFlags:(id)a7 camera:(id)a8 stillImageCaptureType:(id)a9 faceCount:(id)a10 petCount:(id)a11 faceSizeRatio:(id)a12 isSunsetSunrise:(id)a13 isOutdoor:(id)a14 isFood:(id)a15 isIndoor:(id)a16 salientScenes:(id)a17 version:(id)a18 sceneForAsset:(id)a19 subjectForAsset:(id)a20;
- (id)initWithIdentifier:(id)a0 styleChoice:(id)a1 styleSelectionType:(int)a2 sliderValues:(id)a3 userLibrarySize:(int)a4 userLibraryAgeInDays:(int)a5 brightnessValue:(id)a6 stillImageProcessingFlags:(id)a7 camera:(id)a8 stillImageCaptureType:(id)a9 faceCount:(id)a10 petCount:(id)a11 version:(id)a12 sceneForAsset:(id)a13 subjectForAsset:(id)a14;

@end
