@class NSString, GEOTerritoryDataPolygon, PBDataReader;

@interface GEOTerritoryDataTerritoryInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _interestedPartys;
    struct { int *list; unsigned long long count; unsigned long long size; } _territoryTypes;
    unsigned long long _featureId;
    NSString *_interestedPartyCountryCode;
    NSString *_name;
    GEOTerritoryDataPolygon *_polygon;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _nameId;
    struct { unsigned char has_featureId : 1; unsigned char has_nameId : 1; unsigned char read_interestedPartys : 1; unsigned char read_territoryTypes : 1; unsigned char read_interestedPartyCountryCode : 1; unsigned char read_name : 1; unsigned char read_polygon : 1; unsigned char wrote_anyField : 1; } _flags;
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
