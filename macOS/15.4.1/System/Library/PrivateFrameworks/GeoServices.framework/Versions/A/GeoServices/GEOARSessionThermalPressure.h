@class PBUnknownFields;

@interface GEOARSessionThermalPressure : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _timestamp;
    int _chargingState;
    int _collectionTrigger;
    unsigned int _thermalPressure;
    struct { unsigned char has_timestamp : 1; unsigned char has_chargingState : 1; unsigned char has_collectionTrigger : 1; unsigned char has_thermalPressure : 1; } _flags;
}

@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) unsigned int thermalPressure;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasChargingState;
@property (nonatomic) int chargingState;
@property (nonatomic) BOOL hasCollectionTrigger;
@property (nonatomic) int collectionTrigger;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsChargingState:(id)a0;
- (int)StringAsCollectionTrigger:(id)a0;
- (id)chargingStateAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)collectionTriggerAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
