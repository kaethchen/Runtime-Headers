@class GEOURLCamera, PBUnknownFields;

@interface GEOStorageCameraView : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOURLCamera *_camera;
    int _mapType;
    struct { unsigned char has_mapType : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCamera;
@property (retain, nonatomic) GEOURLCamera *camera;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) int mapType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsMapType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;

@end
