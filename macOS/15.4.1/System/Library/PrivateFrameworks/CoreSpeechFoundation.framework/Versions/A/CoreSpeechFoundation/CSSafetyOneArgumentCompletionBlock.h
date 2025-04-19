@interface CSSafetyOneArgumentCompletionBlock : NSObject {
    BOOL _isDirty;
    id _defaultValue;
    id /* block */ _block;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDefaultValue:(id)a0 completionBlock:(id /* block */)a1;
- (void)invokeWithValue:(id)a0;

@end
