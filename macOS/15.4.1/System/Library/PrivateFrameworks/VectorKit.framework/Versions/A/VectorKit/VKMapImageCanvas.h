@class NSArray, NSString, VKManifestTileGroupObserverProxy;

@interface VKMapImageCanvas : VKImageCanvas <MDSnapshotMap> {
    void *_mapEngine;
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKManifestTileGroupObserverProxy *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _manifestTileGroupObserverProxy;
    struct shared_ptr<md::OverlayContainer> { struct OverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _overlayContainer;
}

@property (readonly, nonatomic) NSArray *overlays;
@property (nonatomic) BOOL forceRasterizationForGlobe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setMapType:(int)a0;
- (void)addOverlay:(id)a0;
- (void)updateOverlays;
- (void)cancelTileRequests;
- (void)clearScene;
- (id)initWithMapEngine:(void *)a0;
- (void)resetCameraController;
- (void)tileGroupDidChange;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;

@end
