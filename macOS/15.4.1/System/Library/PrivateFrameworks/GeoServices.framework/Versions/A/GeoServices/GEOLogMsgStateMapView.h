@class GEOMapRegion, PBUnknownFields;

@interface GEOLogMsgStateMapView : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    double _pitch;
    double _styleZoomLevel;
    double _zoomLevel;
    int _mapType;
    int _viewMode;
    BOOL _isAdvancedMap;
    BOOL _isGlobeProjection;
    BOOL _watchProximityRadiusOn;
    struct { unsigned char has_pitch : 1; unsigned char has_styleZoomLevel : 1; unsigned char has_zoomLevel : 1; unsigned char has_mapType : 1; unsigned char has_viewMode : 1; unsigned char has_isAdvancedMap : 1; unsigned char has_isGlobeProjection : 1; unsigned char has_watchProximityRadiusOn : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) int mapType;
@property (nonatomic) BOOL hasStyleZoomLevel;
@property (nonatomic) double styleZoomLevel;
@property (nonatomic) BOOL hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) BOOL hasIsAdvancedMap;
@property (nonatomic) BOOL isAdvancedMap;
@property (nonatomic) BOOL hasIsGlobeProjection;
@property (nonatomic) BOOL isGlobeProjection;
@property (nonatomic) BOOL hasViewMode;
@property (nonatomic) int viewMode;
@property (nonatomic) BOOL hasWatchProximityRadiusOn;
@property (nonatomic) BOOL watchProximityRadiusOn;
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
- (int)StringAsViewMode:(id)a0;
- (int)StringAsMapType:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (id)viewModeAsString:(int)a0;

@end
