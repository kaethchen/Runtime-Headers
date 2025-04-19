@interface AWDMETRICSKCellularPowerLogNrCaConfigActivateStatsMBin : PBCodable <NSCopying> {
    struct { unsigned char ccActivated : 1; unsigned char ccConfigured : 1; unsigned char direction : 1; unsigned char duration : 1; unsigned char freqRange : 1; unsigned char isEndc : 1; } _has;
}

@property (nonatomic) BOOL hasCcConfigured;
@property (nonatomic) int ccConfigured;
@property (nonatomic) BOOL hasCcActivated;
@property (nonatomic) int ccActivated;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasIsEndc;
@property (nonatomic) BOOL isEndc;
@property (nonatomic) BOOL hasFreqRange;
@property (nonatomic) int freqRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDirection:(id)a0;
- (id)directionAsString:(int)a0;
- (int)StringAsCcConfigured:(id)a0;
- (int)StringAsCcActivated:(id)a0;
- (int)StringAsFreqRange:(id)a0;
- (id)ccActivatedAsString:(int)a0;
- (id)ccConfiguredAsString:(int)a0;
- (id)freqRangeAsString:(int)a0;

@end
