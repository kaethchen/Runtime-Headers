@class NSString, GEOMapRegionE7, NSMutableArray, PBDataReader;

@interface GEOLPRRestrictionRegion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_convertRules;
    NSMutableArray *_definedPlateTypes;
    NSString *_identifier;
    GEOMapRegionE7 *_mapRegion;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_convertRules : 1; unsigned char read_definedPlateTypes : 1; unsigned char read_identifier : 1; unsigned char read_mapRegion : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegionE7 *mapRegion;
@property (retain, nonatomic) NSMutableArray *definedPlateTypes;
@property (retain, nonatomic) NSMutableArray *convertRules;

+ (Class)convertRuleType;
+ (Class)definedPlateTypesType;
+ (BOOL)isValid:(id)a0;

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
- (void)addConvertRule:(id)a0;
- (void)addDefinedPlateTypes:(id)a0;
- (void)clearConvertRules;
- (void)clearDefinedPlateTypes;
- (id)convertRuleAtIndex:(unsigned long long)a0;
- (unsigned long long)convertRulesCount;
- (id)definedPlateTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)definedPlateTypesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
