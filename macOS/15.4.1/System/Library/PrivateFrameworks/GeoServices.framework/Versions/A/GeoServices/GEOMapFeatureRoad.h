@class GEOMultiSectionFeature, NSString, GEOMapFeatureJunction, GEOVectorTile;

@interface GEOMapFeatureRoad : GEOMapFeatureLine <NSCopying> {
    GEOMultiSectionFeature *_feature;
    union { unsigned long long roadID; struct { unsigned char flipped : 1; unsigned short featureIndex : 14; unsigned short tileY : 16; unsigned short tileX : 16; unsigned int unused : 17; } ; } _roadKey;
    GEOMapFeatureJunction *_junctionA;
    GEOMapFeatureJunction *_junctionB;
    BOOL _checkedJunctionA;
    BOOL _checkedJunctionB;
    GEOVectorTile *_tile;
}

@property (readonly, nonatomic) struct { double x0; double x1; } firstCoordinate;
@property (readonly, nonatomic) struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned char x3 : 4; union { struct { unsigned short x0 : 10; unsigned short x1 : 10; unsigned short x2 : 12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEORoadSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x7; struct _GEOContourLinesKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 4; unsigned char x4 : 8; unsigned long x5 : 50; } x8; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned short x5 : 16; unsigned char x6 : 6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned long x4 : 39; } x10; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x11; struct _GEOS2TileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 3; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 37; } x12; struct _GEOLiveTileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned short x3 : 14; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 36; } x13; } x2; } tileKey;
@property (readonly, nonatomic) GEOMultiSectionFeature *feature;
@property (readonly, nonatomic) unsigned long long featureIndex;
@property (readonly, nonatomic) BOOL isFlipped;
@property (readonly, nonatomic) GEOMultiSectionFeature *startFeature;
@property (readonly, nonatomic) GEOMultiSectionFeature *endFeature;
@property (readonly, nonatomic) unsigned long long _diagnosticsOnly_forwardSpeedLimit;
@property (readonly, nonatomic) unsigned long long _diagnosticsOnly_reverseSpeedLimit;
@property (readonly, nonatomic) unsigned long long roadID;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) long long signedMuid;
@property (readonly, nonatomic) GEOMapFeatureJunction *startJunction;
@property (readonly, nonatomic) GEOMapFeatureJunction *endJunction;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) int formOfWay;
@property (readonly, nonatomic) int travelDirection;
@property (readonly, nonatomic) BOOL isValidTravelDirection;
@property (readonly, nonatomic) long long laneCount;
@property (readonly, nonatomic) double roadWidth;
@property (readonly, nonatomic) unsigned long long speedLimit;
@property (readonly, nonatomic) BOOL speedLimitIsMPH;
@property (readonly, nonatomic) BOOL isDrivable;
@property (readonly, nonatomic) BOOL isWalkable;
@property (readonly, nonatomic) BOOL isRoadPedestrianNavigable;
@property (readonly, nonatomic) int walkableSide;
@property (readonly, nonatomic) int sidewalkSide;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isRail;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) int bikeableSide;
@property (readonly, nonatomic) int bikeLaneSide;
@property (readonly, nonatomic) NSString *internalRoadName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)_attributes;
- (id)_containingTile;
- (float *)_elevationsForSection:(unsigned long long)a0 outCount:(out unsigned long long *)a1;
- (struct GeoCodecsVectorTilePoint { float x0; float x1; } *)_tilePointsForSection:(unsigned long long)a0 outCount:(out unsigned long long *)a1;
- (int)_flippedBikeLaneSideFor:(int)a0;
- (int)_flippedBikeableSideFor:(int)a0;
- (int)_flippedSidewalkSideFor:(int)a0;
- (int)_flippedWalkableSideFor:(int)a0;
- (id)_junctionA;
- (id)_junctionB;
- (void)flip;
- (id)flippedCopy;
- (id)initWithFeature:(id)a0;
- (id)localizedRoadName:(out id *)a0;
- (void)updateForDesiredRoadDirectionality:(unsigned long long)a0 isOutboundRoad:(BOOL)a1;

@end
