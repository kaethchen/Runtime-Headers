@class PBUnknownFields;

@interface GEOPDSRawAttribute : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _beginIndex;
    unsigned int _endIndex;
    struct { unsigned char has_beginIndex : 1; unsigned char has_endIndex : 1; } _flags;
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
