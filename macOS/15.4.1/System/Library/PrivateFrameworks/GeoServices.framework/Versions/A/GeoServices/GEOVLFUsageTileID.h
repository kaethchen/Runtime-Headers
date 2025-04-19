@class NSString, PBUnknownFields;

@interface GEOVLFUsageTileID : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_buildId;
    double _uncertainty;
    double _xCoordinate;
    double _yCoordinate;
    struct { unsigned char has_uncertainty : 1; unsigned char has_xCoordinate : 1; unsigned char has_yCoordinate : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBuildId;
@property (retain, nonatomic) NSString *buildId;
@property (nonatomic) BOOL hasXCoordinate;
@property (nonatomic) double xCoordinate;
@property (nonatomic) BOOL hasYCoordinate;
@property (nonatomic) double yCoordinate;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) double uncertainty;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
