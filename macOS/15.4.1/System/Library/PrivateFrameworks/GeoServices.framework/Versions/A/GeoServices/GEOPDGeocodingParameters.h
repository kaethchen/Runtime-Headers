@class PBDataReader, GEOPDSPunchInHints, NSString, GEOPDAddressResultSubTypeFilter, GEOStructuredAddress, GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAddressResultSubTypeFilter *_addressResultSubTypeFilter;
    GEOPDSPunchInHints *_punchInHints;
    NSString *_queryString;
    GEOStructuredAddress *_structuredAddress;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxResults;
    BOOL _isStrictMapRegion;
    struct { unsigned char has_maxResults : 1; unsigned char has_isStrictMapRegion : 1; unsigned char read_unknownFields : 1; unsigned char read_addressResultSubTypeFilter : 1; unsigned char read_punchInHints : 1; unsigned char read_queryString : 1; unsigned char read_structuredAddress : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
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
- (id)initWithForwardGeocodeAddress:(id)a0 addressString:(id)a1 maxResults:(unsigned int)a2 traits:(id)a3;
- (id)initWithForwardGeocodeAddress:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)initWithForwardGeocodeAddressString:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)jsonRepresentation;

@end
