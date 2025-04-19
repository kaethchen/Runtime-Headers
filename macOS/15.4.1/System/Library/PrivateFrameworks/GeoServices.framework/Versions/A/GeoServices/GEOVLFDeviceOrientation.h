@class PBUnknownFields;

@interface GEOVLFDeviceOrientation : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _orientation;
    unsigned int _relativeTimestampMs;
    struct { unsigned char has_orientation : 1; unsigned char has_relativeTimestampMs : 1; } _flags;
}

@property (nonatomic) BOOL hasRelativeTimestampMs;
@property (nonatomic) unsigned int relativeTimestampMs;
@property (nonatomic) BOOL hasOrientation;
@property (nonatomic) int orientation;
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
- (int)StringAsOrientation:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)orientationAsString:(int)a0;
- (void)readAll:(BOOL)a0;

@end
