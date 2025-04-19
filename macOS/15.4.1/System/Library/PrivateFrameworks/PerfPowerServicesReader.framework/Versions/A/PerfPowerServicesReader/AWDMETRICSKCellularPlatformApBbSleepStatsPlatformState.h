@interface AWDMETRICSKCellularPlatformApBbSleepStatsPlatformState : PBCodable <NSCopying> {
    struct { unsigned char ap : 1; unsigned char bbChipset : 1; unsigned char durationMs : 1; unsigned char nonPsPrefSim : 1; unsigned char psPrefSim : 1; } _has;
}

@property (nonatomic) BOOL hasAp;
@property (nonatomic) int ap;
@property (nonatomic) BOOL hasPsPrefSim;
@property (nonatomic) int psPrefSim;
@property (nonatomic) BOOL hasNonPsPrefSim;
@property (nonatomic) int nonPsPrefSim;
@property (nonatomic) BOOL hasBbChipset;
@property (nonatomic) int bbChipset;
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
- (int)StringAsBbChipset:(id)a0;
- (int)StringAsNonPsPrefSim:(id)a0;
- (int)StringAsPsPrefSim:(id)a0;
- (int)StringAsAp:(id)a0;
- (id)apAsString:(int)a0;
- (id)bbChipsetAsString:(int)a0;
- (id)nonPsPrefSimAsString:(int)a0;
- (id)psPrefSimAsString:(int)a0;

@end
