@interface AWDMETRICSKCellularPowerLogLteNrRxDiversityHistRxdBin : PBCodable <NSCopying> {
    struct { unsigned char caIndex : 1; unsigned char durationMs : 1; unsigned char mcgCcNum : 1; unsigned char rat : 1; unsigned char rxDivState : 1; unsigned char isEndc : 1; } _has;
}

@property (nonatomic) BOOL hasIsEndc;
@property (nonatomic) BOOL isEndc;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasMcgCcNum;
@property (nonatomic) unsigned int mcgCcNum;
@property (nonatomic) BOOL hasCaIndex;
@property (nonatomic) int caIndex;
@property (nonatomic) BOOL hasRxDivState;
@property (nonatomic) int rxDivState;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCaIndex:(id)a0;
- (int)StringAsRxDivState:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)caIndexAsString:(int)a0;
- (id)ratAsString:(int)a0;
- (id)rxDivStateAsString:(int)a0;

@end
