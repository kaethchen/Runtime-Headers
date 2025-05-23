@class GEOTileLoader, GEOApplicationAuditToken, geo_isolater, GEOVectorTile;

@interface GEOSPRMetroAvailabilityFetcher : NSObject {
    GEOApplicationAuditToken *_auditToken;
    GEOTileLoader *_tileLoader;
    BOOL _forceDisableMetros;
    geo_isolater *_isolation;
    struct _GEOTileKey { unsigned char provider : 7; unsigned char expires : 1; union { struct _GEOStandardTileKey { unsigned long reserved : 40; unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; } standard; struct _GEOGloriaQuadIDTileKey { unsigned char z : 6; unsigned long quadKey : 64; unsigned short type : 14; unsigned char padding : 4; union { struct { unsigned short mcc : 10; unsigned short mnc : 10; unsigned short padding : 12; } cellularInfo; unsigned int unused; } typeSpecificInfo; } gloriaQuad; struct _GEORegionalResourceKey { unsigned int index : 32; unsigned char scenarios : 8; unsigned char type : 6; unsigned char pixelSize : 8; unsigned char textScale : 8; unsigned char forceRefetch : 1; unsigned long padding : 57; } regional; struct _GEOSputnikMetadataKey { unsigned int part : 32; unsigned int region : 24; unsigned short type : 14; unsigned char pixelSize : 8; unsigned long padding : 42; } sputnikMetadata; struct _GEOFlyoverKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char h : 8; unsigned int region : 24; unsigned short type : 14; unsigned char pixelSize : 8; unsigned char textScale : 8; } flyover; struct _GEOTransitLineSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long muid : 64; } transitLineSelection; struct _GEOPolygonSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long polyId : 64; } polygonSelection; struct _GEORoadSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long roadId : 64; } roadSelection; struct _GEOContourLinesKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char pixelSize : 4; unsigned char units : 8; unsigned long padding : 50; } contourLines; struct _GEOTileOverlayKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char contentScale : 8; unsigned int providerId : 32; unsigned short keyframeIndex : 16; unsigned char padding : 6; } tileOverlay; struct _GEOIdentifiedResourceKey { unsigned long long identifier; unsigned char levelOfDetail; unsigned char type; unsigned char supportsASTC : 1; unsigned long padding : 39; } identifiedResource; struct _GEOMuninMeshKey { unsigned long pointId : 64; unsigned int buildId : 32; unsigned short bucketId : 16; unsigned char cameraId : 5; unsigned char lod : 3; } muninMesh; struct _GEOS2TileKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char f : 3; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; unsigned long padding : 37; } s2Tile; struct _GEOLiveTileKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; unsigned char domain : 4; unsigned long padding : 36; } liveTile; } ; } _lastLoadedKey;
    GEOVectorTile *_lastLoadedTile;
}

- (id)init;
- (void).cxx_destruct;
- (void)determineAvailabilityForCoordinate:(struct { double x0; double x1; })a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTileLoader:(id)a0 auditToken:(id)a1;
- (id)initWithTileLoader:(id)a0 auditToken:(id)a1 forceDisableMetros:(BOOL)a2;

@end
