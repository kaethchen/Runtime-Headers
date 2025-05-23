@class NSString;

@interface AWDFaceTimeCallDeclineSent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char declineCode : 1; unsigned char errorCode : 1; unsigned char isVideo : 1; unsigned char onLockScreen : 1; unsigned char sendDuration : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasDeclineCode;
@property (nonatomic) unsigned int declineCode;
@property (nonatomic) BOOL hasSendDuration;
@property (nonatomic) unsigned int sendDuration;
@property (nonatomic) BOOL hasIsVideo;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) BOOL hasOnLockScreen;
@property (nonatomic) unsigned int onLockScreen;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
