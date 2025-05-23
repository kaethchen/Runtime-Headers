@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPDirectionsSearch : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char navigationInterrupted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRouteRequestStorage;
@property (retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic) BOOL hasNavigationInterrupted;
@property (nonatomic) BOOL navigationInterrupted;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
