@class NSMutableArray;

@interface AWDMETRICSKCellularPlatformApBbSleepStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationMs : 1; unsigned char lastSdmState : 1; unsigned char isMsim : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) BOOL hasIsMsim;
@property (nonatomic) BOOL isMsim;
@property (retain, nonatomic) NSMutableArray *states;
@property (nonatomic) BOOL hasLastSdmState;
@property (nonatomic) int lastSdmState;

+ (Class)stateType;

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
- (void)addState:(id)a0;
- (id)stateAtIndex:(unsigned long long)a0;
- (void)clearStates;
- (unsigned long long)statesCount;
- (int)StringAsLastSdmState:(id)a0;
- (id)lastSdmStateAsString:(int)a0;

@end
