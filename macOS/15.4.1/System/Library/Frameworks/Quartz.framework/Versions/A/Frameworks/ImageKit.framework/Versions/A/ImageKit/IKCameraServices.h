@class IKIrisListener, IKHardwareCapsChangeNotifier;

@interface IKCameraServices : NSObject {
    IKIrisListener *_irisListener;
    IKHardwareCapsChangeNotifier *_hardwareCapsChangeNotifier;
    int _observerCount;
}

+ (id)sharedCameraServices;

- (void)dealloc;
- (id)init;
- (void)addObserver;
- (void)removeObserver;
- (void)_logState;
- (BOOL)cameraAttached;
- (void)cameraIsGone:(id)a0;
- (void)hardwareCapsDidChange:(id)a0;
- (BOOL)irisClosed;
- (void)irisClosed:(id)a0;
- (void)irisOpened:(id)a0;
- (BOOL)mirrorMode;
- (void)setMirrorMode:(BOOL)a0;

@end
