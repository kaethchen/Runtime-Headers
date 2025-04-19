@class NSMutableArray, PBDataReader;

@interface GEOLPRLPRConvertRule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_fillRules;
    NSMutableArray *_mapRules;
    NSMutableArray *_pickupRules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _validEndTime;
    unsigned int _validStartTime;
    struct { unsigned char has_validEndTime : 1; unsigned char has_validStartTime : 1; unsigned char read_fillRules : 1; unsigned char read_mapRules : 1; unsigned char read_pickupRules : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *pickupRules;
@property (retain, nonatomic) NSMutableArray *mapRules;
@property (retain, nonatomic) NSMutableArray *fillRules;
@property (nonatomic) BOOL hasValidStartTime;
@property (nonatomic) unsigned int validStartTime;
@property (nonatomic) BOOL hasValidEndTime;
@property (nonatomic) unsigned int validEndTime;

+ (Class)fillRuleType;
+ (BOOL)isValid:(id)a0;
+ (Class)mapRuleType;
+ (Class)pickupRuleType;

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
- (id)mapRuleAtIndex:(unsigned long long)a0;
- (void)addFillRule:(id)a0;
- (void)addMapRule:(id)a0;
- (void)addPickupRule:(id)a0;
- (void)clearFillRules;
- (void)clearMapRules;
- (void)clearPickupRules;
- (id)fillRuleAtIndex:(unsigned long long)a0;
- (unsigned long long)fillRulesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)mapRulesCount;
- (id)pickupRuleAtIndex:(unsigned long long)a0;
- (unsigned long long)pickupRulesCount;
- (void)readAll:(BOOL)a0;

@end
