@class PBUnknownFields;

@interface GEOPDEvChargingPort : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _chargingConnectorType;
    int _chargingLevel;
    unsigned int _power;
    struct { unsigned char has_chargingConnectorType : 1; unsigned char has_chargingLevel : 1; unsigned char has_power : 1; } _flags;
}

@property (nonatomic) BOOL hasPower;
@property (nonatomic) unsigned int power;
@property (nonatomic) BOOL hasChargingConnectorType;
@property (nonatomic) int chargingConnectorType;
@property (nonatomic) BOOL hasChargingLevel;
@property (nonatomic) int chargingLevel;
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
- (int)StringAsChargingConnectorType:(id)a0;
- (int)StringAsChargingLevel:(id)a0;
- (id)chargingConnectorTypeAsString:(int)a0;
- (id)chargingLevelAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
