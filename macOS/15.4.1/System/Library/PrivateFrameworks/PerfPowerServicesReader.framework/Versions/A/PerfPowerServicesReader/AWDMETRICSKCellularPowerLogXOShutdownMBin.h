@interface AWDMETRICSKCellularPowerLogXOShutdownMBin : PBCodable <NSCopying> {
    struct { unsigned char binId : 1; unsigned char count : 1; unsigned char durationMs : 1; } _has;
}

@property (nonatomic) BOOL hasBinId;
@property (nonatomic) int binId;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsBinId:(id)a0;
- (id)binIdAsString:(int)a0;

@end
