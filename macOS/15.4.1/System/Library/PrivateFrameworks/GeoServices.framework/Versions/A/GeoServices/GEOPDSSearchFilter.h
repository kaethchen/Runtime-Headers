@class PBDataReader, PBUnknownFields, GEOPDAddressResultSubTypeFilter, GEOPDPoiIconCategoryFilter, GEOPDSCategoryFilter, GEOPDSImplicitQueryCategoryFilter, GEOPDSBrandFilter, GEOPDSSearchVenueFilter;

@interface GEOPDSSearchFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _resultTypeFilters;
    GEOPDAddressResultSubTypeFilter *_addressResultSubTypeFilter;
    GEOPDSBrandFilter *_brandFilter;
    GEOPDSCategoryFilter *_categoryFilter;
    GEOPDSImplicitQueryCategoryFilter *_implictQueryCategoryFilter;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    GEOPDSSearchVenueFilter *_venueFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _searchIntentFilter;
    BOOL _isStrictMapRegion;
    struct { unsigned char has_searchIntentFilter : 1; unsigned char has_isStrictMapRegion : 1; unsigned char read_unknownFields : 1; unsigned char read_resultTypeFilters : 1; unsigned char read_addressResultSubTypeFilter : 1; unsigned char read_brandFilter : 1; unsigned char read_categoryFilter : 1; unsigned char read_implictQueryCategoryFilter : 1; unsigned char read_poiIconCategoryFilter : 1; unsigned char read_venueFilter : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)dealloc;
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
