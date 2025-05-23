@protocol _MKKVOProxyDelegate;

@interface _MKKVOProxy : NSObject

@property (weak, nonatomic) id<_MKKVOProxyDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addObserverForObject:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserverForObject:(id)a0 forKeyPath:(id)a1;
- (void)removeObserverForObject:(id)a0 forKeyPath:(id)a1 context:(void *)a2;

@end
