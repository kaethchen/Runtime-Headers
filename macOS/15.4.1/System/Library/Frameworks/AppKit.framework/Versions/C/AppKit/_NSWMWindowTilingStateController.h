@class _WMWindowTilingState;

@interface _NSWMWindowTilingStateController : NSObject {
    void /* unknown type, empty encoding */ nsWindow;
    void /* unknown type, empty encoding */ wmWindow;
    void /* unknown type, empty encoding */ pendingTilingState;
    void /* unknown type, empty encoding */ tilingObservation;
}

@property (nonatomic, readonly) _WMWindowTilingState *tilingState;

+ (id)savedWindowFrameStringAdditionsForTilingState:(id)a0;
+ (id)tilingStateFromSavedWindowFrameStringAdditions:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0 wmWindow:(id)a1;
- (void)restoreTilingState:(id)a0;
- (void)windowCoordinatorDidRestoreWMTilingStateWithRequestID:(id)a0;

@end
