@class PBUnknownFields;

@interface GEOPDSUserActionMetadataElement : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _uiAction;
    int _uiTarget;
    struct { unsigned char has_uiAction : 1; unsigned char has_uiTarget : 1; } _flags;
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
