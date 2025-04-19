@class PBDataReader, NSString, GEOPDVectorPoiDisplayDV, NSMutableArray, PBUnknownFields;

@interface GEOPDIconMapping : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_cartoZoomIndoors;
    NSMutableArray *_cartoZooms;
    NSString *_countryCode3A;
    NSString *_countryCode;
    NSString *_state;
    GEOPDVectorPoiDisplayDV *_vectorPoiDisplayDv;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _cartoSignificance;
    unsigned int _poiType;
    BOOL _aoiZoom;
    BOOL _isIconSuppressed;
    struct { unsigned char has_cartoSignificance : 1; unsigned char has_aoiZoom : 1; unsigned char has_isIconSuppressed : 1; unsigned char read_unknownFields : 1; unsigned char read_cartoZoomIndoors : 1; unsigned char read_cartoZooms : 1; unsigned char read_countryCode3A : 1; unsigned char read_countryCode : 1; unsigned char read_state : 1; unsigned char read_vectorPoiDisplayDv : 1; unsigned char wrote_anyField : 1; } _flags;
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
