@class GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueDirectoryGroup : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _directoryGroupingId;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    struct { unsigned char has_directoryGroupingId : 1; unsigned char has_muid : 1; } _flags;
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
