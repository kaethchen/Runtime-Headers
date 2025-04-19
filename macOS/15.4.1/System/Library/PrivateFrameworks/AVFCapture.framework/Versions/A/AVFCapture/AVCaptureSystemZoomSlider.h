@class NSDictionary, AVCaptureDevice;

@interface AVCaptureSystemZoomSlider : AVCaptureControl {
    AVCaptureDevice *_device;
    id /* block */ _action;
    double _maxVideoZoomFactor;
    NSDictionary *_displayValuesByZoomFactorValue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
    BOOL _observingDeviceVideoZoomFactor;
    BOOL _changeZoomInProcess;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)a0;
- (id)device;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)actionQueue;
- (void)removeObservers;
- (id)_initWithDevice:(id)a0 action:(id /* block */)a1;
- (id)displayValuesByZoomFactorValue;
- (id)initWithDevice:(id)a0 action:(id /* block */)a1;
- (void)installObservers;
- (double)maxVideoZoomFactor;
- (void)setDisplayValuesByZoomFactorValue:(id)a0;
- (void)setMaxVideoZoomFactor:(double)a0;

@end
