@class NSMutableArray, PBUnknownFields;

@interface GEOPDTransitIncident : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_transitIncidents;
}

+ (id)transitIncidentsForPlaceData:(id)a0 hasTransitIncidentComponent:(BOOL *)a1;
+ (id)transitIncidentsTTLExpirationDateForPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
