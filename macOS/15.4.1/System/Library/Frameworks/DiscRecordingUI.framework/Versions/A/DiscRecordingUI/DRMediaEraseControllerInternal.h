@class DRDevice;

@interface DRMediaEraseControllerInternal : NSObject {
    DRDevice *_device;
    id _delegate;
    id _publicFace;
    BOOL _respondsToShouldHandleMediaReservations;
    BOOL _respondsToDeviceContainsSuitableMedia;
    BOOL _weOpenedTray;
    int _exclusivityState;
    struct CGSize { double width; double height; } _trayControlMinimumSize;
}

- (void)dealloc;
- (void)finalize;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)device;
- (void)acquireDevice:(id)a0;
- (void)closeTray:(id)a0;
- (BOOL)delegateUserStateForStatus:(id)a0;
- (void)ejectMedia:(id)a0;
- (id)initWithPublicFace:(id)a0;
- (BOOL)mediaTypeIsErasableInDevice:(id)a0;
- (void)openTray:(id)a0;
- (void)releaseDevice;
- (void)resetInternalState;
- (void)setTrayControlMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })trayControlMinimumSize;
- (void)updateExclusivity;

@end
