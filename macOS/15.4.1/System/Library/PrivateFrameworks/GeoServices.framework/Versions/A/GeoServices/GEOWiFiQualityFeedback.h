@interface GEOWiFiQualityFeedback : PBCodable <NSCopying> {
    unsigned int _maxValue;
    int _type;
    unsigned int _value;
    struct { unsigned char has_maxValue : 1; unsigned char has_type : 1; unsigned char has_value : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int value;
@property (nonatomic) BOOL hasMaxValue;
@property (nonatomic) unsigned int maxValue;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
