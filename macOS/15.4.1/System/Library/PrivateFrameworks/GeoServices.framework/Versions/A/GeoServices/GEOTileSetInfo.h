@class PBUnknownFields;

@interface GEOTileSetInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _count;
    int _style;
    unsigned int _uncertainty;
    unsigned int _zoom;
    struct { unsigned char has_count : 1; unsigned char has_style : 1; unsigned char has_uncertainty : 1; unsigned char has_zoom : 1; } _flags;
}

@property (nonatomic) BOOL hasStyle;
@property (nonatomic) int style;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasZoom;
@property (nonatomic) unsigned int zoom;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) unsigned int uncertainty;
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
- (int)StringAsStyle:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)styleAsString:(int)a0;

@end
