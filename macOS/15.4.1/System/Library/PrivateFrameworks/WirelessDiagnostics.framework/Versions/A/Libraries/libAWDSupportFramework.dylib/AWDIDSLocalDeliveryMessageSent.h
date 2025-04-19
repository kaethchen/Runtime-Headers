@class NSString;

@interface AWDIDSLocalDeliveryMessageSent : PBCodable <NSCopying> {
    struct { unsigned char isToDefaultPairedDevice : 1; unsigned char linkType : 1; unsigned char messageSize : 1; unsigned char priority : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasIsToDefaultPairedDevice;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) BOOL hasMessageSize;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;

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
