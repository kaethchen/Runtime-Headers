@class NSString, PBDataReader;

@interface GEORPCorrectedField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_correctedValue;
    NSString *_fieldName;
    NSString *_originalValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _field;
    BOOL _isMarkedIncorrect;
    struct { unsigned char has_field : 1; unsigned char has_isMarkedIncorrect : 1; unsigned char read_correctedValue : 1; unsigned char read_fieldName : 1; unsigned char read_originalValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasField;
@property (nonatomic) int field;
@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) BOOL hasOriginalValue;
@property (retain, nonatomic) NSString *originalValue;
@property (readonly, nonatomic) BOOL hasCorrectedValue;
@property (retain, nonatomic) NSString *correctedValue;
@property (nonatomic) BOOL hasIsMarkedIncorrect;
@property (nonatomic) BOOL isMarkedIncorrect;

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
- (int)StringAsField:(id)a0;
- (id)fieldAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
