@class NSString, GEOMapRegion, PBUnknownFields;

@interface MSPQuerySearch : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (readonly, nonatomic) BOOL hasLocationDisplayString;
@property (retain, nonatomic) NSString *locationDisplayString;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
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
