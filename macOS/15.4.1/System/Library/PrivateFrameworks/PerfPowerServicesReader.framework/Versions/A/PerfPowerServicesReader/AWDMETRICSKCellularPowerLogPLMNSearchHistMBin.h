@interface AWDMETRICSKCellularPowerLogPLMNSearchHistMBin : PBCodable <NSCopying> {
    struct { unsigned char binId : 1; unsigned char duration : 1; unsigned char searchDurationBinIndex : 1; } _has;
}

@property (nonatomic) BOOL hasBinId;
@property (nonatomic) int binId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasSearchDurationBinIndex;
@property (nonatomic) unsigned int searchDurationBinIndex;

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
