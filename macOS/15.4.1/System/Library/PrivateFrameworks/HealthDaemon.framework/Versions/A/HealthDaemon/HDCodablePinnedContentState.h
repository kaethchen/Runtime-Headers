@class NSData;

@interface HDCodablePinnedContentState : PBCodable <NSCopying> {
    struct { unsigned char epoch : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPinnedContentStateData;
@property (retain, nonatomic) NSData *pinnedContentStateData;
@property (nonatomic) BOOL hasEpoch;
@property (nonatomic) long long epoch;

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
