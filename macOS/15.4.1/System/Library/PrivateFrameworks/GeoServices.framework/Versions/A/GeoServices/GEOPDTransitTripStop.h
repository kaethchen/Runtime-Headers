@class NSMutableArray, PBUnknownFields;

@interface GEOPDTransitTripStop : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_stopInfos;
}

+ (id)transitTripStopForPlaceData:(id)a0;

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
