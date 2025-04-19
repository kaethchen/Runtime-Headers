@class _MRRequestDetailsProtobuf, NSMutableArray, NSString;

@interface _MRGroupTopologyModificationRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char fadeAudio : 1; unsigned char muteUntilFinished : 1; unsigned char shouldClearPredictedRoutes : 1; unsigned char shouldModifyPredictedRoutes : 1; unsigned char shouldNotPauseIfLastDeviceRemoved : 1; unsigned char suppressErrorDialog : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) _MRRequestDetailsProtobuf *details;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *outputDeviceUIDs;
@property (nonatomic) BOOL hasFadeAudio;
@property (nonatomic) BOOL fadeAudio;
@property (readonly, nonatomic) BOOL hasPassword;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL hasSuppressErrorDialog;
@property (nonatomic) BOOL suppressErrorDialog;
@property (nonatomic) BOOL hasShouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) BOOL shouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) BOOL hasMuteUntilFinished;
@property (nonatomic) BOOL muteUntilFinished;
@property (nonatomic) BOOL hasShouldModifyPredictedRoutes;
@property (nonatomic) BOOL shouldModifyPredictedRoutes;
@property (nonatomic) BOOL hasShouldClearPredictedRoutes;
@property (nonatomic) BOOL shouldClearPredictedRoutes;

+ (Class)outputDeviceUIDsType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addOutputDeviceUIDs:(id)a0;
- (void)clearOutputDeviceUIDs;
- (id)outputDeviceUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDeviceUIDsCount;

@end
