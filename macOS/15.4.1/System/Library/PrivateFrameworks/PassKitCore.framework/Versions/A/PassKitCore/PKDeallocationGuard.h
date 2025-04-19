@interface PKDeallocationGuard : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidated;
    id /* block */ _block;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)invalidate;
- (id)initWithBlock:(id /* block */)a0;

@end
