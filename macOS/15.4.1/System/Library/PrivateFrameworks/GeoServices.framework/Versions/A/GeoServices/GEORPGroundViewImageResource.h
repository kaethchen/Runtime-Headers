@class PBUnknownFields;

@interface GEORPGroundViewImageResource : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _cameraNumber;
    int _loadStatus;
    unsigned int _lod;
    struct { unsigned char has_cameraNumber : 1; unsigned char has_loadStatus : 1; unsigned char has_lod : 1; } _flags;
}

@property (nonatomic) BOOL hasCameraNumber;
@property (nonatomic) unsigned int cameraNumber;
@property (nonatomic) BOOL hasLod;
@property (nonatomic) unsigned int lod;
@property (nonatomic) BOOL hasLoadStatus;
@property (nonatomic) int loadStatus;
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
- (int)StringAsLoadStatus:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)loadStatusAsString:(int)a0;
- (void)readAll:(BOOL)a0;

@end
