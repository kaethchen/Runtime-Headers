@class GEOPDPlaceSuggestionParameters, PBDataReader, GEOPDGuidesLocationsSuggestionParameters, GEOPDPublisherSuggestionParameters, GEOPDSearchBrowseCategorySuggestionParameters, PBUnknownFields, GEOPDSearchOriginationInfo, GEOPDCollectionSuggestionParameters;

@interface GEOPDMapsSearchHomeParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedSectionTypes;
    GEOPDCollectionSuggestionParameters *_collectionSuggestionParameters;
    GEOPDGuidesLocationsSuggestionParameters *_guidesLocationsSuggestionParameters;
    GEOPDPlaceSuggestionParameters *_placeSuggestionParameters;
    GEOPDPublisherSuggestionParameters *_publisherSuggestionParameters;
    GEOPDSearchBrowseCategorySuggestionParameters *_searchBrowseCategorySuggestionParameters;
    GEOPDSearchOriginationInfo *_searchOriginationInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_supportedSectionTypes : 1; unsigned char read_collectionSuggestionParameters : 1; unsigned char read_guidesLocationsSuggestionParameters : 1; unsigned char read_placeSuggestionParameters : 1; unsigned char read_publisherSuggestionParameters : 1; unsigned char read_searchBrowseCategorySuggestionParameters : 1; unsigned char read_searchOriginationInfo : 1; unsigned char wrote_anyField : 1; } _flags;
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
