@interface MSPMediaSyncHeader : PBCodable <NSCopying> {
    struct { unsigned char syncType : 1; unsigned char totalPackages : 1; } _has;
}

@property (nonatomic) BOOL hasTotalPackages;
@property (nonatomic) int totalPackages;
@property (nonatomic) BOOL hasSyncType;
@property (nonatomic) int syncType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSyncType:(id)a0;
- (id)syncTypeAsString:(int)a0;

@end
