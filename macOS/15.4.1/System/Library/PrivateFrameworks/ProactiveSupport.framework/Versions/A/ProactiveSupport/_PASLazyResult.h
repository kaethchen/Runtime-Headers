@interface _PASLazyResult : NSObject {
    id _data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    id /* block */ _block;
}

@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) id resultIfAvailable;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithResult:(id)a0;
- (id)_initWithBlock:(id /* block */)a0;

@end
