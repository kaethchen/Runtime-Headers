@class NSArray;

@interface PXPhotosHighlightsOverlayController : NSObject <PXPhotosOverlayController> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rootLayout;
    void /* unknown type, empty encoding */ isSwitchingLens;
}

@property (nonatomic, readonly) id /* block */ overlayLayoutProvider;
@property (nonatomic, readonly) NSArray *availableLenses;
@property (nonatomic, retain) void /* unknown type, empty encoding */ currentLens;
@property (nonatomic, retain) void /* unknown type, empty encoding */ photosViewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)canHandleObjectReference:(id)a0;
- (void)handleTapWithHitTestResult:(id)a0;

@end
