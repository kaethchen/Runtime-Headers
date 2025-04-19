@class PBDataReader, GEOPDAddressResultSubTypeFilter, GEOPDPoiIconCategoryFilter, PBUnknownFields;

@interface GEOPDAutocompleteFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _placeTypeFilters;
    struct { int *list; unsigned long long count; unsigned long long size; } _requestedEntryTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _resultTypeFilters;
    GEOPDAddressResultSubTypeFilter *_addressResultSubTypeFilter;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isStrictMapRegion;
    struct { unsigned char has_isStrictMapRegion : 1; unsigned char read_unknownFields : 1; unsigned char read_placeTypeFilters : 1; unsigned char read_requestedEntryTypes : 1; unsigned char read_resultTypeFilters : 1; unsigned char read_addressResultSubTypeFilter : 1; unsigned char read_poiIconCategoryFilter : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long requestedEntryTypesCount;
@property (readonly, nonatomic) int *requestedEntryTypes;
@property (readonly, nonatomic) BOOL hasPoiIconCategoryFilter;
@property (retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
@property (readonly, nonatomic) unsigned long long placeTypeFiltersCount;
@property (readonly, nonatomic) int *placeTypeFilters;
@property (nonatomic) BOOL hasIsStrictMapRegion;
@property (nonatomic) BOOL isStrictMapRegion;
@property (readonly, nonatomic) unsigned long long resultTypeFiltersCount;
@property (readonly, nonatomic) int *resultTypeFilters;
@property (readonly, nonatomic) BOOL hasAddressResultSubTypeFilter;
@property (retain, nonatomic) GEOPDAddressResultSubTypeFilter *addressResultSubTypeFilter;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPlaceTypeFilters:(id)a0;
- (int)StringAsRequestedEntryTypes:(id)a0;
- (int)StringAsResultTypeFilters:(id)a0;
- (void)addPlaceTypeFilter:(int)a0;
- (void)addRequestedEntryType:(int)a0;
- (void)addResultTypeFilter:(int)a0;
- (void)clearPlaceTypeFilters;
- (void)clearRequestedEntryTypes;
- (void)clearResultTypeFilters;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (int)placeTypeFilterAtIndex:(unsigned long long)a0;
- (id)placeTypeFiltersAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (int)requestedEntryTypeAtIndex:(unsigned long long)a0;
- (id)requestedEntryTypesAsString:(int)a0;
- (int)resultTypeFilterAtIndex:(unsigned long long)a0;
- (id)resultTypeFiltersAsString:(int)a0;
- (void)setPlaceTypeFilters:(int *)a0 count:(unsigned long long)a1;
- (void)setRequestedEntryTypes:(int *)a0 count:(unsigned long long)a1;
- (void)setResultTypeFilters:(int *)a0 count:(unsigned long long)a1;

@end
