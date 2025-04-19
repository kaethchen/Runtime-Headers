@interface AWDMETRICSKCellularPowerLogNRCdrxConfigNrCdrxSecondaryConfigPerCellGroup : PBCodable <NSCopying> {
    struct { unsigned char inactivityTimerMs : 1; unsigned char onDurationTimerFraction : 1; unsigned char onDurationTimerMs : 1; } _has;
}

@property (nonatomic) BOOL hasOnDurationTimerMs;
@property (nonatomic) unsigned int onDurationTimerMs;
@property (nonatomic) BOOL hasOnDurationTimerFraction;
@property (nonatomic) unsigned int onDurationTimerFraction;
@property (nonatomic) BOOL hasInactivityTimerMs;
@property (nonatomic) unsigned int inactivityTimerMs;

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
