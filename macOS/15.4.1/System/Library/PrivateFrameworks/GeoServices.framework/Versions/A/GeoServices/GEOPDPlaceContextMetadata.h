@class PBDataReader, GEOPDSearchPlaceContextMetadata, GEOPDAutocompletePlaceContextMetadata, PBUnknownFields;

@interface GEOPDPlaceContextMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompletePlaceContextMetadata *_autocompletePlaceContextMetadata;
    unsigned long long _muid;
    GEOPDSearchPlaceContextMetadata *_searchPlaceContextMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeContextMetadataType;
    struct { unsigned char has_muid : 1; unsigned char has_placeContextMetadataType : 1; unsigned char read_unknownFields : 1; unsigned char read_autocompletePlaceContextMetadata : 1; unsigned char read_searchPlaceContextMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
