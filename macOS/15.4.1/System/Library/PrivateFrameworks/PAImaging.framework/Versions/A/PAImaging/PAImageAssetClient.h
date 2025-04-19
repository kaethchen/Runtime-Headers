@class NSString, PAImageAsset, PADisplay, PAMultiLevelImage, NSObject;
@protocol PAImageAssetClientDelegate, OS_dispatch_queue;

@interface PAImageAssetClient : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_imageQueue;
    PAMultiLevelImage *_image;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    double _currentScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentROI;
    BOOL _enableHDR;
    PADisplay *_display;
    struct { BOOL respondsToWillLoadMasterImage; BOOL respondsToFailedToLoadMasterImage; BOOL respondsToDidLoadMasterImage; BOOL respondsToDidLoadThumbnailImage; BOOL respondsToWillUpdateImage; BOOL respondsToDidUpdateImage; BOOL respondsToDidUpdateImageSize; BOOL respondsToDidUpdateMultiLevelImage; BOOL respondsToDidPrepareRenderForUpdate; BOOL respondsToFailedToLoadType; BOOL respondsToDidUpdateComposition; } _delegateFlags;
}

@property (retain) PAImageAsset *asset;
@property (nonatomic) BOOL usedStandInGeometry;
@property (retain) PADisplay *display;
@property (weak) id<PAImageAssetClientDelegate> delegate;
@property (readonly) NSString *name;
@property BOOL wantsBackFillImage;
@property BOOL wantsZoomImage;
@property BOOL shouldCoalesceUpdates;
@property BOOL enableHDR;
@property BOOL allowsPredictiveRendering;
@property BOOL allowTiling;
@property (readonly) BOOL isHeld;
@property (getter=isOffscreen) BOOL offscreen;
@property (getter=isHidden) BOOL hidden;
@property (getter=isAnimating) BOOL animating;
@property int priority;
@property double targetFrameRate;
@property (readonly) struct CGSize { double x0; double x1; } originalImageSize;
@property (readonly) long long imageOrientation;
@property (readonly) PAMultiLevelImage *image;
@property (readonly) BOOL isImageUpToDate;
@property (readonly) BOOL isImageValidInCurrentROI;
@property double currentScale;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentROI;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } frameRenderTime;

+ (id)assetClientWithName:(id)a0 assetType:(id)a1;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)isActive;
- (void)update:(BOOL)a0;
- (void)_setImage:(id)a0;
- (void)ready;
- (void)hold;
- (BOOL)_isActive;
- (void)_updateDisplay:(id)a0;
- (void)_notifyFailedToLoadMasterImage:(id)a0;
- (void)_notifyDidLoadMasterImage;
- (void)_notifyDidUpdateImage:(id)a0 type:(id)a1 region:(id)a2 updateNumber:(unsigned long long)a3 isCurrent:(BOOL)a4;
- (void)_notifyGeometryChanged:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 updateNumber:(unsigned long long)a2;
- (void)_notifyWillLoadMasterImage;
- (struct CGSize { double x0; double x1; })_originalImageSize;
- (void)_setCurrentScale:(double)a0;
- (void)_setEnableHDR:(BOOL)a0;
- (void)didChangeEnableHDR;
- (void)didLoadMasterImage;
- (void)didUpdateImage:(id)a0 type:(id)a1 region:(id)a2 updateNumber:(unsigned long long)a3 isCurrent:(BOOL)a4;
- (void)failedToLoad:(id)a0;
- (void)failedToLoadMasterImage:(id)a0;
- (void)geometryChanged:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 updateNumber:(unsigned long long)a2;
- (void)setCompositionOnAsset:(id)a0;
- (void)setCompositionReplacedFilter:(id /* block */)a0;
- (void)willLoadMasterImage;

@end
