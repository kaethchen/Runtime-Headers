@class NSString, NSObject;

@interface _AMSKeyValueObservable : AMSObservable

@property (retain) NSObject *context;
@property (copy) NSString *keyPath;
@property (weak) NSObject *object;

- (void).cxx_destruct;
- (BOOL)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2;
- (BOOL)sendCompletion;

@end
