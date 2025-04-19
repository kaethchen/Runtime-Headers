@class AVCaptureSession, NSString, AVWeakReference, AVCaptureControlsOverlay, NSObject, AVCaptureDevice;
@protocol OS_dispatch_queue;

@interface AVCaptureControl : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    AVWeakReference *_overlayReference;
    AVWeakReference *_sessionReference;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) AVCaptureControlsOverlay *overlay;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (weak, nonatomic) AVCaptureSession *session;
@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (void)removeObservers;
- (id)initSubclass;
- (void)installObservers;
- (void)overlayVisibilityDidChange:(BOOL)a0;

@end
