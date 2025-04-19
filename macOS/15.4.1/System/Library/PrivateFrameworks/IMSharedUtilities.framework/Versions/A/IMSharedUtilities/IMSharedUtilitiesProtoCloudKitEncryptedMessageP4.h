@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageP4 : PBCodable <NSCopying> {
    struct { unsigned char timeRecovered : 1; unsigned char scheduleState : 1; unsigned char scheduleType : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasAssociatedMessageEmoji;
@property (retain, nonatomic) NSString *associatedMessageEmoji;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;
@property (readonly, nonatomic) BOOL hasActualService;
@property (retain, nonatomic) NSString *actualService;
@property (nonatomic) BOOL hasScheduleType;
@property (nonatomic) unsigned int scheduleType;
@property (nonatomic) BOOL hasScheduleState;
@property (nonatomic) unsigned int scheduleState;
@property (readonly, nonatomic) BOOL hasActualParentChatId;
@property (retain, nonatomic) NSString *actualParentChatId;
@property (nonatomic) BOOL hasTimeRecovered;
@property (nonatomic) unsigned long long timeRecovered;

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
