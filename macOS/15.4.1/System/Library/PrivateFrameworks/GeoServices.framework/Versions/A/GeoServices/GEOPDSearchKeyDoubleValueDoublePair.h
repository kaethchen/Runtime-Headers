@interface GEOPDSearchKeyDoubleValueDoublePair : PBCodable <NSCopying> {
    double _key;
    double _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
