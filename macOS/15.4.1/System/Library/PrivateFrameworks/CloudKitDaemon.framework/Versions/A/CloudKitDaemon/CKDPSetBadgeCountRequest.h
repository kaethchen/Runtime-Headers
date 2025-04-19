@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {
    struct { unsigned char badgeCount : 1; unsigned char forDevice : 1; } _has;
}

@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) unsigned int badgeCount;
@property (nonatomic) BOOL hasForDevice;
@property (nonatomic) BOOL forDevice;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
