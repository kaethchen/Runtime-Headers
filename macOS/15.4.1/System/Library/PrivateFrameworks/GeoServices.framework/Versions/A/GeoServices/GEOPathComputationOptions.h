@class PBUnknownFields;

@interface GEOPathComputationOptions : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _pathComputationMethod;
    struct { unsigned char has_pathComputationMethod : 1; } _flags;
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
