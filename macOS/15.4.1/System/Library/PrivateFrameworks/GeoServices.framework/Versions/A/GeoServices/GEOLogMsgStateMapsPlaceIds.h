@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateMapsPlaceIds : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_placeIdDetails;
}

@property (retain, nonatomic) NSMutableArray *placeIdDetails;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)placeIdDetailsType;

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
- (void)addPlaceIdDetails:(id)a0;
- (void)clearPlaceIdDetails;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)placeIdDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)placeIdDetailsCount;
- (void)readAll:(BOOL)a0;

@end
