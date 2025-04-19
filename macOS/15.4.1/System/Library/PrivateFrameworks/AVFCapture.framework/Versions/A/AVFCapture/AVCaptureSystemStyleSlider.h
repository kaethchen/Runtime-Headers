@class AVWeakReference;

@interface AVCaptureSystemStyleSlider : AVCaptureControl {
    AVWeakReference *_sessionReference;
    id /* block */ _action;
    long long _parameter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
    BOOL _observing;
    BOOL _changeSmartStyleInProcess;
    BOOL _smartStyleHasChanged;
}

+ (void)initialize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)actionQueue;
- (void)removeObservers;
- (id)initWithSession:(id)a0 parameter:(long long)a1;
- (id)initWithSession:(id)a0 parameter:(long long)a1 action:(id /* block */)a2;
- (void)installObservers;
- (void)overlayVisibilityDidChange:(BOOL)a0;

@end
