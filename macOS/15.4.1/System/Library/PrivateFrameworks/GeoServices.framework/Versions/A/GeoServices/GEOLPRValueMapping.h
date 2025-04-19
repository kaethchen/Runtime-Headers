@class NSMutableArray, PBDataReader;

@interface GEOLPRValueMapping : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_mappedValues;
    NSMutableArray *_timeConditions;
    NSMutableArray *_values;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_mappedValues : 1; unsigned char read_timeConditions : 1; unsigned char read_values : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *values;
@property (retain, nonatomic) NSMutableArray *mappedValues;
@property (retain, nonatomic) NSMutableArray *timeConditions;

+ (Class)valueType;
+ (Class)mappedValueType;
+ (BOOL)isValid:(id)a0;
+ (Class)timeConditionsType;

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
- (void)addValue:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)clearValues;
- (unsigned long long)valuesCount;
- (void)addMappedValue:(id)a0;
- (void)addTimeConditions:(id)a0;
- (void)clearMappedValues;
- (void)clearTimeConditions;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mappedValueAtIndex:(unsigned long long)a0;
- (unsigned long long)mappedValuesCount;
- (void)readAll:(BOOL)a0;
- (id)timeConditionsAtIndex:(unsigned long long)a0;
- (unsigned long long)timeConditionsCount;

@end
