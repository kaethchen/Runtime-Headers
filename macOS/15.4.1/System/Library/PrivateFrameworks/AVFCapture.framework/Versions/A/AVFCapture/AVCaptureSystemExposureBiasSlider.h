@class AVCaptureDevice;

@interface AVCaptureSystemExposureBiasSlider : AVCaptureControl {
    AVCaptureDevice *_device;
    id /* block */ _action;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
    BOOL _observing;
    BOOL _changeExposureBiasInProcess;
}

- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)a0;
- (id)device;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)actionQueue;
- (void)removeObservers;
- (id)initWithDevice:(id)a0 action:(id /* block */)a1;
- (void)installObservers;

@end
