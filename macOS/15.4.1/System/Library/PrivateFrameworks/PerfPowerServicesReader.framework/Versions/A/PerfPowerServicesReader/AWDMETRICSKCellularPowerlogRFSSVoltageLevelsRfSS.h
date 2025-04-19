@interface AWDMETRICSKCellularPowerlogRFSSVoltageLevelsRfSS : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char fr : 1; unsigned char sleepStateId : 1; unsigned char vddScenarioId : 1; } _has;
}

@property (nonatomic) BOOL hasVddScenarioId;
@property (nonatomic) int vddScenarioId;
@property (nonatomic) BOOL hasSleepStateId;
@property (nonatomic) int sleepStateId;
@property (nonatomic) BOOL hasFr;
@property (nonatomic) int fr;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFr:(id)a0;
- (int)StringAsSleepStateId:(id)a0;
- (int)StringAsVddScenarioId:(id)a0;
- (id)frAsString:(int)a0;
- (id)sleepStateIdAsString:(int)a0;
- (id)vddScenarioIdAsString:(int)a0;

@end
