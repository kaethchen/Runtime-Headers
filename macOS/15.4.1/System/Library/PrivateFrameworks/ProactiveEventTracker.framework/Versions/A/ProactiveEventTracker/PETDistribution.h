@interface PETDistribution : PBCodable <NSCopying> {
    struct { unsigned char max : 1; unsigned char mean : 1; unsigned char min : 1; unsigned char variance : 1; } _has;
}

@property (nonatomic) BOOL hasMin;
@property (nonatomic) double min;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) double max;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) double mean;
@property (nonatomic) BOOL hasVariance;
@property (nonatomic) double variance;

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
