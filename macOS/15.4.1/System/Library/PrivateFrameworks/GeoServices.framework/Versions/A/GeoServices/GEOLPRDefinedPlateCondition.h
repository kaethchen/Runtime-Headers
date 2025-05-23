@class NSMutableArray, PBDataReader;

@interface GEOLPRDefinedPlateCondition : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_plateMatchConditions;
    NSMutableArray *_powerTypeKeys;
    NSMutableArray *_vehicleTypeKeys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_plateMatchConditions : 1; unsigned char read_powerTypeKeys : 1; unsigned char read_vehicleTypeKeys : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *vehicleTypeKeys;
@property (retain, nonatomic) NSMutableArray *powerTypeKeys;
@property (retain, nonatomic) NSMutableArray *plateMatchConditions;

+ (BOOL)isValid:(id)a0;
+ (Class)plateMatchConditionType;
+ (Class)powerTypeKeyType;
+ (Class)vehicleTypeKeyType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPlateMatchCondition:(id)a0;
- (void)addPowerTypeKey:(id)a0;
- (void)addVehicleTypeKey:(id)a0;
- (void)clearPlateMatchConditions;
- (void)clearPowerTypeKeys;
- (void)clearVehicleTypeKeys;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)plateMatchConditionAtIndex:(unsigned long long)a0;
- (unsigned long long)plateMatchConditionsCount;
- (id)powerTypeKeyAtIndex:(unsigned long long)a0;
- (unsigned long long)powerTypeKeysCount;
- (void)readAll:(BOOL)a0;
- (id)vehicleTypeKeyAtIndex:(unsigned long long)a0;
- (unsigned long long)vehicleTypeKeysCount;

@end
