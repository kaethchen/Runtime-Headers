@class PBDataReader, NSData, NSMutableArray, PBUnknownFields;

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_etaFilter;
    NSData *_evChargingMetadata;
    NSData *_originalWaypointRoute;
    NSData *_routeId;
    NSData *_sessionState;
    NSMutableArray *_zilchPointSegments;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _preferredTransportType;
    struct { unsigned char has_preferredTransportType : 1; unsigned char read_unknownFields : 1; unsigned char read_etaFilter : 1; unsigned char read_evChargingMetadata : 1; unsigned char read_originalWaypointRoute : 1; unsigned char read_routeId : 1; unsigned char read_sessionState : 1; unsigned char read_zilchPointSegments : 1; unsigned char read_zilchPoints : 1; unsigned char wrote_anyField : 1; } _flags;
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
