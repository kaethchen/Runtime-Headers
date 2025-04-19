@class NUImageGeometry, NUSurfaceRenderRequest, PANUTiledImageBacking, NSTimer, PADisplay, NUComposition, NSObject;
@protocol OS_dispatch_queue, NUDevice;

@interface PARenderedImageAssetClient : PAImageAssetClient {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _waitingForUpdateFromGeometryChanged;
    id<NUDevice> _device;
    long long _compositionUpdateNumber;
    NUComposition *_composition;
    struct { long long renderOrientation; long long displayOrientation; } _orientation;
    long long _backfillUpdateNumber;
    PANUTiledImageBacking *_lastBackfillImage;
    NUImageGeometry *_lastBackfillGeometry;
    struct { long long renderOrientation; long long displayOrientation; } _lastBackfillOrientation;
    PADisplay *_lastBackfillDisplay;
    long long _zoomUpdateNumber;
    PANUTiledImageBacking *_lastZoomImage;
    NUImageGeometry *_lastZoomGeometry;
    struct { long long renderOrientation; long long displayOrientation; } _lastZoomOrientation;
    PADisplay *_lastZoomDisplay;
    NUImageGeometry *_geometry;
    struct { long long renderOrientation; long long displayOrientation; } _geometryOrientation;
    NUSurfaceRenderRequest *_backfillRenderRequest;
    NUSurfaceRenderRequest *_zoomRenderRequest;
    BOOL _hasRendered;
    BOOL _hasReceivedUpdate;
    NSTimer *_displayEDRMonitorTimer;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)imageType;
- (void)update:(BOOL)a0;
- (long long)imageOrientation;
- (struct CGSize { double x0; double x1; })originalImageSize;
- (void)ready;
- (id)_pixelFormat;
- (void)_render:(BOOL)a0;
- (void)_updateDisplay:(id)a0;
- (void)_ensureRequests;
- (BOOL)isImageUpToDate;
- (BOOL)_allowedToRender;
- (double)_currentDisplayHeadroom;
- (void)_ensureGeometry:(struct { long long x0; long long x1; })a0;
- (void)_imageReady:(id)a0 display:(id)a1 orientation:(struct { long long x0; long long x1; })a2 updateNumber:(long long)a3 isBackfill:(BOOL)a4 zoomImageIsFullExtent:(BOOL)a5;
- (void)_invalidateDisplayEDRHeadroomMonitor;
- (double)_maximumDisplayHeadroom;
- (void)_monitorDisplayEDRHeadroom:(id)a0;
- (void)_notifyCompositionChanged:(id)a0;
- (void)_notifyDidPrepareRenderForUpdate:(unsigned long long)a0 isCurrent:(BOOL)a1;
- (void)_notifyWillUpdateImage:(id)a0 region:(id)a1;
- (struct CGSize { double x0; double x1; })_originalImageSize;
- (void)_scheduleDisplayEDRHeadroomMonitor;
- (id)_tiledImageFromBacking:(id)a0 display:(id)a1 withGeometry:(id)a2 orientation:(struct { long long x0; long long x1; })a3;
- (void)compositionChanged:(id)a0 orientation:(struct { long long x0; long long x1; })a1 updateNumber:(long long)a2 isInteractive:(BOOL)a3;
- (void)didChangeEnableHDR;
- (void)didPrepareRenderForUpdate:(unsigned long long)a0 isCurrent:(BOOL)a1;
- (BOOL)isImageValidInCurrentROI;
- (void)willUpdateImage:(id)a0 region:(id)a1;

@end
