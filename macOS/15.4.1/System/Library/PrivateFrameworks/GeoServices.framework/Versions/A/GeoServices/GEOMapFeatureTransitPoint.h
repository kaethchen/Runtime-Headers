@class NSString, NSArray, GEOMapFeatureTransitStop, GEOMapFeatureTransitStation, GEOMapFeatureTransitHall;

@interface GEOMapFeatureTransitPoint : NSObject {
    void *_feature;
    struct shared_ptr<geo::codec::VectorTile> { struct VectorTile *__ptr_; struct __shared_weak_count *__cntrl_; } _retainedTile;
}

@property (readonly, nonatomic) struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned char x3 : 4; union { struct { unsigned short x0 : 10; unsigned short x1 : 10; unsigned short x2 : 12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEORoadSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x7; struct _GEOContourLinesKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 4; unsigned char x4 : 8; unsigned long x5 : 50; } x8; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned short x5 : 16; unsigned char x6 : 6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned long x4 : 39; } x10; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x11; struct _GEOS2TileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 3; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 37; } x12; struct _GEOLiveTileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned short x3 : 14; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 36; } x13; } x2; } tileKey;
@property (readonly, nonatomic) void *feature;
@property (readonly, nonatomic) GEOMapFeatureTransitStop *stop;
@property (readonly, nonatomic) GEOMapFeatureTransitHall *hall;
@property (readonly, nonatomic) GEOMapFeatureTransitStation *station;
@property (readonly, nonatomic) struct { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) unsigned long long transitID;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) NSArray *internalSystemNames;
@property (readonly, nonatomic) double boundingRadius;
@property (readonly, nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingRect;
@property (readonly, nonatomic) struct { double x0; double x1; } *polygonPoints;
@property (readonly, nonatomic) unsigned long long polygonPointsCount;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFeature:(void *)a0;
- (void)updateWithGeometryFeature:(void *)a0;

@end
