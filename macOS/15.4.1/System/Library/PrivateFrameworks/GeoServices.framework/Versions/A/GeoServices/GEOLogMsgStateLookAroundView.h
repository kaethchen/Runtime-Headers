@class GEOLocation, PBUnknownFields;

@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLocation *_location;
    double _zoomLevel;
    unsigned int _heading;
    unsigned int _numberPoisInView;
    BOOL _isLabelingShown;
    struct { unsigned char has_zoomLevel : 1; unsigned char has_heading : 1; unsigned char has_numberPoisInView : 1; unsigned char has_isLabelingShown : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL hasHeading;
@property (nonatomic) unsigned int heading;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) BOOL hasNumberPoisInView;
@property (nonatomic) unsigned int numberPoisInView;
@property (nonatomic) BOOL hasIsLabelingShown;
@property (nonatomic) BOOL isLabelingShown;
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
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
