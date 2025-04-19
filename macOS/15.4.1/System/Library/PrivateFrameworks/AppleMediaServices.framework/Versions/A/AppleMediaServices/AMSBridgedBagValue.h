@class AMSPromise;

@interface AMSBridgedBagValue : AMSFrozenBagValue

@property (retain) AMSPromise *valuePromise;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 valueType:(unsigned long long)a1 valuePromise:(id)a2;
- (void)valueWithCompletion:(id /* block */)a0;

@end
