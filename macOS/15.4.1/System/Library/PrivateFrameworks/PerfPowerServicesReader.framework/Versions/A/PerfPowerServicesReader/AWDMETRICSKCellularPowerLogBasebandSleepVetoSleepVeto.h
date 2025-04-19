@class NSString;

@interface AWDMETRICSKCellularPowerLogBasebandSleepVetoSleepVeto : PBCodable <NSCopying> {
    struct { unsigned char durationMs : 1; unsigned char state : 1; unsigned char subsystem : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBlockerName;
@property (retain, nonatomic) NSString *blockerName;
@property (nonatomic) BOOL hasSubsystem;
@property (nonatomic) int subsystem;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;

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
- (int)StringAsState:(id)a0;
- (id)stateAsString:(int)a0;
- (int)StringAsSubsystem:(id)a0;
- (id)subsystemAsString:(int)a0;

@end
