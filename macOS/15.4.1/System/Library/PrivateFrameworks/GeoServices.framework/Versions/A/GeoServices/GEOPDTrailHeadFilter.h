@class PBUnknownFields;

@interface GEOPDTrailHeadFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _factCount;
    struct { unsigned char has_factCount : 1; } _flags;
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
