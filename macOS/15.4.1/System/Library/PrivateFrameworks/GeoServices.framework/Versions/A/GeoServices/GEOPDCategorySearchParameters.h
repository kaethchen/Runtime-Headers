@class GEOPDSSessionUserActionMetadata, GEOPDETAFilter, GEOPDViewportInfo, PBUnknownFields, GEOPDSSearchSessionData, GEOPDRecentRouteInfo, GEOPDResultRefinementQuery, NSMutableArray, GEOPDSearchOriginationInfo, GEOPDSSearchEvChargingParameters, GEOPDPaginationParameters, NSString, PBDataReader, NSData;

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _knownRefinementTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedPlaceSummaryFormatTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedRelatedEntitySectionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchSectionTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSearchTierTypes;
    NSString *_enrichmentCampaignNamespace;
    GEOPDETAFilter *_etaFilter;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    GEOPDPaginationParameters *_paginationParameters;
    GEOPDViewportInfo *_previousSearchViewport;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    GEOPDResultRefinementQuery *_resultRefinementQuery;
    NSMutableArray *_searchEnrichmentRevisionMetadatas;
    GEOPDSearchOriginationInfo *_searchOriginationInfo;
    GEOPDSSearchSessionData *_searchSessionData;
    GEOPDSSessionUserActionMetadata *_sessionUserActionMetadata;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _auxiliaryTierNumResults;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxResults;
    int _placeSummaryRevision;
    int _searchType;
    BOOL _supportCategorySearchResultSection;
    BOOL _supportSearchEnrichment;
    BOOL _supportStructuredRapAffordance;
    struct { unsigned char has_auxiliaryTierNumResults : 1; unsigned char has_blurredHourOfDay : 1; unsigned char has_dayOfWeek : 1; unsigned char has_maxResults : 1; unsigned char has_placeSummaryRevision : 1; unsigned char has_searchType : 1; unsigned char has_supportCategorySearchResultSection : 1; unsigned char has_supportSearchEnrichment : 1; unsigned char has_supportStructuredRapAffordance : 1; unsigned char read_unknownFields : 1; unsigned char read_knownRefinementTypes : 1; unsigned char read_supportedPlaceSummaryFormatTypes : 1; unsigned char read_supportedRelatedEntitySectionTypes : 1; unsigned char read_supportedSearchSectionTypes : 1; unsigned char read_supportedSearchTierTypes : 1; unsigned char read_enrichmentCampaignNamespace : 1; unsigned char read_etaFilter : 1; unsigned char read_evChargingParameters : 1; unsigned char read_paginationParameters : 1; unsigned char read_previousSearchViewport : 1; unsigned char read_recentRouteInfo : 1; unsigned char read_resultRefinementQuery : 1; unsigned char read_searchEnrichmentRevisionMetadatas : 1; unsigned char read_searchOriginationInfo : 1; unsigned char read_searchSessionData : 1; unsigned char read_sessionUserActionMetadata : 1; unsigned char read_suggestionEntryMetadata : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
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
