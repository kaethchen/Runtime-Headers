@class NSString;

@interface GEOPDSearchKeyValueDoublePair : PBCodable <NSCopying> {
    NSString *_key;
    double _value;
    struct { unsigned char has_value : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
