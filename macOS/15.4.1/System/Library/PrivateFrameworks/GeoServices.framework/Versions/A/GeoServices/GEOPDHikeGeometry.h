@class NSData, PBUnknownFields;

@interface GEOPDHikeGeometry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSData *_routingPathLeg;
}

@property (readonly, nonatomic) BOOL hasRoutingPathLeg;
@property (retain, nonatomic) NSData *routingPathLeg;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)hikeGeometryWithPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
