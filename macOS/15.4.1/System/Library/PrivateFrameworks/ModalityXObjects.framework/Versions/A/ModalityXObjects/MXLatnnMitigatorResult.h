@class NSString;

@interface MXLatnnMitigatorResult : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char threshold : 1; unsigned char processed : 1; } _has;
}

@property (nonatomic) BOOL hasProcessed;
@property (nonatomic) BOOL processed;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL hasThreshold;
@property (nonatomic) double threshold;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;

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
