@class NSString, NSData, CLLocation, NSNumber, NSDate;

@interface PHAssetPTPProperties : PHAssetPropertySet {
    short _kindSubType;
    short _kind;
    int _burstPickType;
    NSData *_locationData;
    short _hdrType;
}

@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL isHighFrameRateVideo;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, copy, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) unsigned long long originalFilesize;
@property (readonly, nonatomic) unsigned long long originalWidth;
@property (readonly, nonatomic) unsigned long long originalHeight;
@property (readonly, copy, nonatomic) NSString *exifTimestampString;
@property (readonly, copy, nonatomic) NSString *fingerprint;
@property (readonly, copy, nonatomic) NSString *originatingAssetIdentifier;
@property (readonly, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (readonly, nonatomic) NSNumber *embeddedThumbnailLength;
@property (readonly, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (readonly, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (readonly, nonatomic) NSNumber *originalDuration;
@property (readonly, nonatomic) long long ptpTrashedState;
@property (readonly, nonatomic) BOOL isTimelapseVideo;
@property (readonly, nonatomic) double timeZoneOffset;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) BOOL isBurstPicked;
@property (readonly, nonatomic) BOOL isBurstFavorite;
@property (readonly, nonatomic) BOOL isBurstFirstPicked;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (readonly, nonatomic) NSString *codec;
@property (readonly, nonatomic) BOOL deferredProcessingNeeded;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
