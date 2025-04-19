@interface PLCameraAppWatcher : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _isCameraRunningLock;
}

@property (readonly, nonatomic) id foregroundMonitorIdentifier;
@property (readonly, nonatomic) BOOL isCameraRunning;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cameraForegroundStateDidChangeTo:(BOOL)a0;

@end
