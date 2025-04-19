@class PBDataReader, NSString, GEOLatLng, PBUnknownFields;

@interface GEOPDSPunchInResultHints : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    NSString *_formattedAddress;
    unsigned long long _muid;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeType;
    struct { unsigned char has_muid : 1; unsigned char has_placeType : 1; unsigned char read_unknownFields : 1; unsigned char read_center : 1; unsigned char read_formattedAddress : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
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
