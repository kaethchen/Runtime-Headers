@interface CLPOutdoorUpdate : PBCodable <NSCopying> {
    struct { unsigned char estimatedStateProbabilityOutdoor : 1; unsigned char mctTimestamp : 1; unsigned char timestamp : 1; unsigned char confidence : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasMctTimestamp;
@property (nonatomic) double mctTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL hasEstimatedStateProbabilityOutdoor;
@property (nonatomic) double estimatedStateProbabilityOutdoor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsConfidence:(id)a0;
- (id)confidenceAsString:(int)a0;

@end
