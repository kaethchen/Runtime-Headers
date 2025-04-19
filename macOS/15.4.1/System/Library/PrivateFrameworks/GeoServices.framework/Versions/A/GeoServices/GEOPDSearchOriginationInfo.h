@class PBUnknownFields, GEOPDSearchOriginationRoutePlanningParameters, PBDataReader;

@interface GEOPDSearchOriginationInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _searchClientContexts;
    GEOPDSearchOriginationRoutePlanningParameters *_routePlanningParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _clientSoftwarePlatform;
    int _searchOriginationType;
    struct { unsigned char has_clientSoftwarePlatform : 1; unsigned char has_searchOriginationType : 1; unsigned char read_unknownFields : 1; unsigned char read_searchClientContexts : 1; unsigned char read_routePlanningParameters : 1; unsigned char wrote_anyField : 1; } _flags;
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
- (id)initWithTraits:(id)a0;
- (id)jsonRepresentation;

@end
