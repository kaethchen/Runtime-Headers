@interface AFOneArgumentSafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id /* block */ _block;
    id _defaultValue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0 defaultValue:(id)a1;
- (BOOL)invokeWithValue:(id)a0;

@end
