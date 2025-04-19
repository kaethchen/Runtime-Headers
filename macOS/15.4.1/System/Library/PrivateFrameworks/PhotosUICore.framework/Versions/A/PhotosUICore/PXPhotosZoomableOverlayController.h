@class NSArray;

@interface PXPhotosZoomableOverlayController : NSObject <PXPhotosOverlayController> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ overlayLayoutProvider;
    void /* unknown type, empty encoding */ observation;
    void /* unknown type, empty encoding */ isSwitchingLens;
    void /* unknown type, empty encoding */ currentZoomStep;
}

@property (nonatomic, copy) id /* block */ overlayLayoutProvider;
@property (nonatomic, readonly) NSArray *availableLenses;
@property (nonatomic, retain) void /* unknown type, empty encoding */ photosViewModel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ currentLens;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)canHandleObjectReference:(id)a0;
- (void)handleTapWithHitTestResult:(id)a0;

@end
