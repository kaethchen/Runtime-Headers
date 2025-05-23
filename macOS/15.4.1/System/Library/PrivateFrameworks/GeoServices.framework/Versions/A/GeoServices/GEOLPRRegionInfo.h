@class NSString, NSMutableArray, PBDataReader;

@interface GEOLPRRegionInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _routingRequiredFields;
    NSString *_licensePlateTemplate;
    NSMutableArray *_licensePlateValidationRules;
    NSMutableArray *_validPowerTypeKeys;
    NSMutableArray *_validVehicleTypeKeys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_routingRequiredFields : 1; unsigned char read_licensePlateTemplate : 1; unsigned char read_licensePlateValidationRules : 1; unsigned char read_validPowerTypeKeys : 1; unsigned char read_validVehicleTypeKeys : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long routingRequiredFieldsCount;
@property (readonly, nonatomic) int *routingRequiredFields;
@property (retain, nonatomic) NSMutableArray *validPowerTypeKeys;
@property (retain, nonatomic) NSMutableArray *validVehicleTypeKeys;
@property (readonly, nonatomic) BOOL hasLicensePlateTemplate;
@property (retain, nonatomic) NSString *licensePlateTemplate;
@property (retain, nonatomic) NSMutableArray *licensePlateValidationRules;

+ (Class)licensePlateValidationRulesType;
+ (BOOL)isValid:(id)a0;
+ (Class)validPowerTypeKeysType;
+ (Class)validVehicleTypeKeysType;

- (void)dealloc;
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
- (int)StringAsRoutingRequiredFields:(id)a0;
- (void)addLicensePlateValidationRules:(id)a0;
- (void)setRoutingRequiredFields:(int *)a0 count:(unsigned long long)a1;
- (void)addRoutingRequiredFields:(int)a0;
- (void)addValidPowerTypeKeys:(id)a0;
- (void)addValidVehicleTypeKeys:(id)a0;
- (void)clearLicensePlateValidationRules;
- (void)clearRoutingRequiredFields;
- (void)clearValidPowerTypeKeys;
- (void)clearValidVehicleTypeKeys;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)licensePlateValidationRulesAtIndex:(unsigned long long)a0;
- (unsigned long long)licensePlateValidationRulesCount;
- (void)readAll:(BOOL)a0;
- (id)routingRequiredFieldsAsString:(int)a0;
- (int)routingRequiredFieldsAtIndex:(unsigned long long)a0;
- (id)validPowerTypeKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)validPowerTypeKeysCount;
- (id)validVehicleTypeKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)validVehicleTypeKeysCount;

@end
