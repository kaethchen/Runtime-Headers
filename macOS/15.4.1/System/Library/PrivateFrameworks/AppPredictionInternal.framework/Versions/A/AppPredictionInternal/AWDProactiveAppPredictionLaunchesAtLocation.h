@class NSString;

@interface AWDProactiveAppPredictionLaunchesAtLocation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char latitude : 1; unsigned char launchReason : 1; unsigned char locationAccuracy : 1; unsigned char longitude : 1; unsigned char timeBucket : 1; unsigned char isClip : 1; unsigned char isNegativeSession : 1; unsigned char isTourist : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) float latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) float longitude;
@property (nonatomic) BOOL hasTimeBucket;
@property (nonatomic) unsigned int timeBucket;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL isTourist;
@property (nonatomic) BOOL hasIsClip;
@property (nonatomic) BOOL isClip;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;
@property (nonatomic) BOOL hasLocationAccuracy;
@property (nonatomic) unsigned int locationAccuracy;
@property (nonatomic) BOOL hasLaunchReason;
@property (nonatomic) int launchReason;
@property (nonatomic) BOOL hasIsNegativeSession;
@property (nonatomic) BOOL isNegativeSession;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsLaunchReason:(id)a0;
- (id)launchReasonAsString:(int)a0;

@end
