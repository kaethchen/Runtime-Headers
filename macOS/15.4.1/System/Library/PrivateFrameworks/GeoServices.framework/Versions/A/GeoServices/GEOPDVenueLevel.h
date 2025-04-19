@class GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueLevel : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDVenueLabel *_label;
    unsigned long long _levelId;
    int _ordinal;
    struct { unsigned char has_levelId : 1; unsigned char has_ordinal : 1; } _flags;
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
