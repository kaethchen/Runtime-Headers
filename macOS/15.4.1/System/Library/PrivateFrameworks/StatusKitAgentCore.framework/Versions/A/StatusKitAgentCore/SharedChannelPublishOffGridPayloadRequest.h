@class NSData;

@interface SharedChannelPublishOffGridPayloadRequest : PBRequest <NSCopying> {
    struct { unsigned char notificationDisplayEpochSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptionKey;
@property (retain, nonatomic) NSData *encryptionKey;
@property (nonatomic) BOOL hasNotificationDisplayEpochSeconds;
@property (nonatomic) unsigned long long notificationDisplayEpochSeconds;

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

@end
