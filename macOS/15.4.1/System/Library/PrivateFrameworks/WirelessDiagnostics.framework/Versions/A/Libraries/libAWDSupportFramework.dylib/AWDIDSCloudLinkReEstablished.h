@interface AWDIDSCloudLinkReEstablished : PBCodable <NSCopying> {
    struct { unsigned char linkTimeDelta : 1; unsigned char timestamp : 1; unsigned char linkType : 1; unsigned char priorLinkType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) BOOL hasPriorLinkType;
@property (nonatomic) unsigned int priorLinkType;
@property (nonatomic) BOOL hasLinkTimeDelta;
@property (nonatomic) unsigned long long linkTimeDelta;

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
