@class NSData, NSString, NSURL, GEODataURLSession, GEODataURLSessionTask, NSObject, GEODataRequest;
@protocol GEOSimpleTileRequesterOperationDelegate, OS_os_activity, OS_dispatch_queue;

@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataURLSessionTaskDelegate> {
    double _startTime;
    double _endTime;
    int _attempts;
    int _checksumMethod;
    _Atomic unsigned int _priority;
    BOOL _isRunning;
}

@property (readonly, nonatomic) GEODataRequest *request;
@property (nonatomic) unsigned long long signpostID;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) NSObject<OS_os_activity> *parentTileActivity;
@property (readonly, nonatomic) NSURL *URL;
@property unsigned int priority;
@property (nonatomic) BOOL shouldDownloadToDisk;
@property (retain, nonatomic) NSString *requestingBundleId;
@property (retain, nonatomic) NSString *requestingBundleVersion;
@property (nonatomic) double tileLoaderCreateTime;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *downloadedFileURL;
@property (retain, nonatomic) NSString *responseEtag;
@property (retain, nonatomic) GEODataURLSessionTask *task;
@property (readonly, nonatomic) BOOL responseIsCacheable;
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *baseTile;
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *localizationTile;
@property (retain, nonatomic) GEODataURLSession *dataSession;
@property (nonatomic) struct _GEOTileKey { unsigned char provider : 7; unsigned char expires : 1; union { struct _GEOStandardTileKey { unsigned long reserved : 40; unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; } standard; struct _GEOGloriaQuadIDTileKey { unsigned char z : 6; unsigned long quadKey : 64; unsigned short type : 14; unsigned char padding : 4; union { struct { unsigned short mcc : 10; unsigned short mnc : 10; unsigned short padding : 12; } cellularInfo; unsigned int unused; } typeSpecificInfo; } gloriaQuad; struct _GEORegionalResourceKey { unsigned int index : 32; unsigned char scenarios : 8; unsigned char type : 6; unsigned char pixelSize : 8; unsigned char textScale : 8; unsigned char forceRefetch : 1; unsigned long padding : 57; } regional; struct _GEOSputnikMetadataKey { unsigned int part : 32; unsigned int region : 24; unsigned short type : 14; unsigned char pixelSize : 8; unsigned long padding : 42; } sputnikMetadata; struct _GEOFlyoverKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char h : 8; unsigned int region : 24; unsigned short type : 14; unsigned char pixelSize : 8; unsigned char textScale : 8; } flyover; struct _GEOTransitLineSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long muid : 64; } transitLineSelection; struct _GEOPolygonSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long polyId : 64; } polygonSelection; struct _GEORoadSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long roadId : 64; } roadSelection; struct _GEOContourLinesKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char pixelSize : 4; unsigned char units : 8; unsigned long padding : 50; } contourLines; struct _GEOTileOverlayKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char contentScale : 8; unsigned int providerId : 32; unsigned short keyframeIndex : 16; unsigned char padding : 6; } tileOverlay; struct _GEOIdentifiedResourceKey { unsigned long long identifier; unsigned char levelOfDetail; unsigned char type; unsigned char supportsASTC : 1; unsigned long padding : 39; } identifiedResource; struct _GEOMuninMeshKey { unsigned long pointId : 64; unsigned int buildId : 32; unsigned short bucketId : 16; unsigned char cameraId : 5; unsigned char lod : 3; } muninMesh; struct _GEOS2TileKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char f : 3; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; unsigned long padding : 37; } s2Tile; struct _GEOLiveTileKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; unsigned char domain : 4; unsigned long padding : 36; } liveTile; } ; } key;
@property (readonly, nonatomic) unsigned long long contentLength;
@property (readonly, nonatomic) unsigned long long responseMaxAge;
@property (readonly, nonatomic) BOOL finished;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) int httpResponseStatusCode;
@property (readonly, nonatomic, getter=isExistingCachedDataCurrent) BOOL existingCachedDataCurrent;
@property (readonly, weak, nonatomic) id<GEOSimpleTileRequesterOperationDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (double)startTime;
- (void)cancel;
- (double)elapsed;
- (void)dataURLSession:(id)a0 didCompleteTask:(id)a1;
- (void)clearAllRelatedOperations;
- (void)dataURLSession:(id)a0 shouldConvertDataTask:(id)a1 toDownloadTaskForEstimatedResponseSize:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithRequest:(id)a0 delegateQueue:(id)a1 delegate:(id)a2;

@end
