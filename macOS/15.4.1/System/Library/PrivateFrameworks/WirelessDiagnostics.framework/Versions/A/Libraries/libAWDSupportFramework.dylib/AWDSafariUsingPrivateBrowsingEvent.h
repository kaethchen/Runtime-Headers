@interface AWDSafariUsingPrivateBrowsingEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char inPrivateBrowsing : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasInPrivateBrowsing;
@property (nonatomic) BOOL inPrivateBrowsing;

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
