@class AXVCGFullscreenZoomController, NSMutableDictionary, NSLock, AXFScreen;

@interface AXVFullscreenZoomController : NSObject

@property (retain, nonatomic) AXVCGFullscreenZoomController *_legacyCGFullscreenZoomController;
@property (nonatomic) struct CGPoint { double x; double y; } _realMouseLocation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _zoomRegionFrame;
@property (nonatomic) double zoomFactor;
@property (retain, nonatomic) AXFScreen *_activeScreen;
@property (retain) NSMutableDictionary *_screenToZoomFactorMap;
@property (retain, nonatomic) NSLock *_ScreenToZoomFactorLock;
@property (nonatomic) unsigned long long zoomPanningMode;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly, nonatomic) BOOL isAnyMonitorZoomed;
@property (readonly, nonatomic) BOOL isZoomed;
@property (readonly, nonatomic) BOOL isZoomDisplay;
@property (readonly, nonatomic) int zoomDisplayID;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } zoomRegionCenter;
@property (nonatomic) BOOL smoothImages;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomRegionFrameWithZoomOrigin:(struct CGPoint { double x0; double x1; })a0 zoomFactor:(double)a1 zoomDisplayID:(int)a2 displayStyle:(unsigned long long)a3;
+ (BOOL)automaticallyNotifiesObserversOfZoomFactor;
+ (id)keyPathsForValuesAffectingIsAnyMonitorZoomed;
+ (id)keyPathsForValuesAffectingIsZoomed;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isAnyMonitorZoomed;
- (void)_repositionZoomRegionFrameWithRealMouseLocation:(struct CGPoint { double x0; double x1; })a0 movementDelta:(struct CGPoint { double x0; double x1; })a1 warped:(BOOL)a2 animate:(BOOL)a3 completion:(id /* block */)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomRegionFrameForDisplay:(int)a0;
- (void)handleRealMouseLocationMovedBy:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 animate:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleRealMouseLocationWarpedTo:(struct CGPoint { double x0; double x1; })a0 animate:(BOOL)a1 completion:(id /* block */)a2;
- (void)setZoomFactor:(double)a0 animate:(BOOL)a1 completion:(id /* block */)a2;
- (void)setZoomFactor:(double)a0 forDisplay:(int)a1 animate:(BOOL)a2 completion:(id /* block */)a3;
- (void)setZoomRegionCenter:(struct CGPoint { double x0; double x1; })a0 forDisplay:(int)a1 warpMouse:(BOOL)a2 animate:(BOOL)a3 completion:(id /* block */)a4;
- (void)setZoomRegionCenter:(struct CGPoint { double x0; double x1; })a0 warpMouse:(BOOL)a1 animate:(BOOL)a2 completion:(id /* block */)a3;
- (double)zoomFactorForDisplay:(int)a0;
- (void)zoomOutAllDisplays;
- (struct CGPoint { double x0; double x1; })zoomRegionCenterForDisplay:(int)a0;

@end
