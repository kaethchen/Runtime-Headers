@interface AWDMETRICSKCellularPowerLogPowerEstimatorComponentPowerStats : PBCodable <NSCopying> {
    struct { unsigned char activeDurationMs : 1; unsigned char avgActivePowerMw : 1; unsigned char avgPowerMw : 1; unsigned char component : 1; unsigned char cumulatedEnergyMj : 1; unsigned char peakPowerMw : 1; } _has;
}

@property (nonatomic) BOOL hasComponent;
@property (nonatomic) int component;
@property (nonatomic) BOOL hasAvgPowerMw;
@property (nonatomic) unsigned int avgPowerMw;
@property (nonatomic) BOOL hasAvgActivePowerMw;
@property (nonatomic) unsigned int avgActivePowerMw;
@property (nonatomic) BOOL hasPeakPowerMw;
@property (nonatomic) unsigned int peakPowerMw;
@property (nonatomic) BOOL hasCumulatedEnergyMj;
@property (nonatomic) unsigned int cumulatedEnergyMj;
@property (nonatomic) BOOL hasActiveDurationMs;
@property (nonatomic) unsigned int activeDurationMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsComponent:(id)a0;
- (id)componentAsString:(int)a0;

@end
