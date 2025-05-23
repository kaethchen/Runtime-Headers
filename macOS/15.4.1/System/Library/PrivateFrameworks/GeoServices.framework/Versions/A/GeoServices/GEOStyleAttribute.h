@class PBUnknownFields;

@interface GEOStyleAttribute : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _key;
    unsigned int _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
}

@property (nonatomic) BOOL hasKey;
@property (nonatomic) unsigned int key;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int value;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
