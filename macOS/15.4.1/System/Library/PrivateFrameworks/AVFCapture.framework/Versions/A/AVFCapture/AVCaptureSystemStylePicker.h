@class NSArray, AVWeakReference, AVCaptureSmartStyle;

@interface AVCaptureSystemStylePicker : AVCaptureControl {
    AVWeakReference *_sessionReference;
    NSArray *_styles;
    id /* block */ _action;
    NSArray *_titles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _selectedStyleLock;
    AVCaptureSmartStyle *_selectedStyle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
    BOOL _observing;
    BOOL _changeSmartStyleInProcess;
    BOOL _smartStyleHasChanged;
}

+ (void)initialize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithSession:(id)a0;
- (id)actionQueue;
- (void)removeObservers;
- (id)_automaticStylesWithSystemSmartStyle:(id)a0;
- (id)initWithSession:(id)a0 action:(id /* block */)a1;
- (id)initWithSession:(id)a0 styles:(id)a1 action:(id /* block */)a2;
- (void)installObservers;
- (void)overlayVisibilityDidChange:(BOOL)a0;

@end
