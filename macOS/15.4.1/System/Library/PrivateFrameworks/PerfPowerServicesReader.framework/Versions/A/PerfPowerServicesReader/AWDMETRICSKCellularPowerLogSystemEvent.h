@interface AWDMETRICSKCellularPowerLogSystemEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char mode : 1; unsigned char prevMode : 1; unsigned char prevRat : 1; unsigned char prevStateDurationMs : 1; unsigned char rat : 1; unsigned char subsId : 1; unsigned char oosPlmnSearchTimerActive : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasOosPlmnSearchTimerActive;
@property (nonatomic) BOOL oosPlmnSearchTimerActive;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasPrevMode;
@property (nonatomic) int prevMode;
@property (nonatomic) BOOL hasPrevRat;
@property (nonatomic) int prevRat;
@property (nonatomic) BOOL hasPrevStateDurationMs;
@property (nonatomic) unsigned int prevStateDurationMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMode:(id)a0;
- (id)modeAsString:(int)a0;
- (int)StringAsPrevMode:(id)a0;
- (int)StringAsPrevRat:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)prevModeAsString:(int)a0;
- (id)prevRatAsString:(int)a0;
- (id)ratAsString:(int)a0;

@end
