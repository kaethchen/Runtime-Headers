@class NSString, NSDate, NSNumber, PLManagedAsset;

@interface PLExtendedAttributes : PLManagedObject

@property (retain, nonatomic) NSNumber *aperture;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSString *cameraModel;
@property (retain, nonatomic) NSString *cameraMake;
@property (retain, nonatomic) NSString *codec;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *exposureBias;
@property (retain, nonatomic) NSNumber *flashFired;
@property (retain, nonatomic) NSNumber *focalLength;
@property (retain, nonatomic) NSNumber *focalLengthIn35mm;
@property (retain, nonatomic) NSNumber *fps;
@property (retain, nonatomic) NSNumber *iso;
@property (retain, nonatomic) NSString *lensModel;
@property (retain, nonatomic) NSNumber *meteringMode;
@property (retain, nonatomic) NSNumber *sampleRate;
@property (retain, nonatomic) NSNumber *shutterSpeed;
@property (retain, nonatomic) NSNumber *trackFormat;
@property (retain, nonatomic) NSNumber *whiteBalance;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *orientation;
@property (retain, nonatomic) NSNumber *slushSceneBias;
@property (retain, nonatomic) NSNumber *slushWarmthBias;
@property (retain, nonatomic) NSNumber *slushVersion;
@property (retain, nonatomic) NSNumber *slushPreset;
@property (retain, nonatomic) NSString *timezoneName;
@property (retain, nonatomic) NSNumber *timezoneOffset;
@property (retain, nonatomic) NSNumber *digitalZoomRatio;
@property (retain, nonatomic) NSNumber *sleetCast;
@property (retain, nonatomic) NSNumber *sleetToneBias;
@property (retain, nonatomic) NSNumber *sleetColorBias;
@property (retain, nonatomic) NSNumber *sleetIntensity;
@property (retain, nonatomic) NSNumber *sleetRenderingVersion;
@property (retain, nonatomic) NSString *credit;
@property (retain, nonatomic) NSNumber *generativeAIType;
@property (retain, nonatomic) PLManagedAsset *asset;

+ (id)entityName;
+ (id)distinctValuesForKeyPath:(id)a0 inManagedObjectContext:(id)a1;

- (void)willSave;
- (id)formattedCameraModel;
- (void)correctOrientationIfRequired;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (void)setGenerativeAIType:(id)a0;

@end
