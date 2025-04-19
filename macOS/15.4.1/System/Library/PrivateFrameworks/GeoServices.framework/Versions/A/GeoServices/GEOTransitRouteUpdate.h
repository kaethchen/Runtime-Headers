@class GEOTransitRouteDisplayStrings, PBUnknownFields, PBDataReader, NSMutableArray, GEOTransitRouteIdentifier;

@interface GEOTransitRouteUpdate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alerts;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitRouteIdentifier *_routeIdentifier;
    NSMutableArray *_stepUpdates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_alerts : 1; unsigned char read_displayStrings : 1; unsigned char read_routeIdentifier : 1; unsigned char read_stepUpdates : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRouteIdentifier;
@property (retain, nonatomic) GEOTransitRouteIdentifier *routeIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasDisplayStrings;
@property (retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property (retain, nonatomic) NSMutableArray *stepUpdates;
@property (retain, nonatomic) NSMutableArray *alerts;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alertType;
+ (BOOL)isValid:(id)a0;
+ (Class)stepUpdateType;

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
- (int)StringAsStatus:(id)a0;
- (id)statusAsString:(int)a0;
- (id)_logDescription;
- (void)addAlert:(id)a0;
- (void)addStepUpdate:(id)a0;
- (id)alertAtIndex:(unsigned long long)a0;
- (unsigned long long)alertsCount;
- (void)clearAlerts;
- (void)clearStepUpdates;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)stepUpdateAtIndex:(unsigned long long)a0;
- (unsigned long long)stepUpdatesCount;

@end
