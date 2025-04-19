@interface AFSafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id /* block */ _block;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)invoke;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)invokeWithSignal:(long long)a0;

@end
