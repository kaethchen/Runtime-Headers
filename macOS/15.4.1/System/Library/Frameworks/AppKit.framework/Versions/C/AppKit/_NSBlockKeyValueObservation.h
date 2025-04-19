@class NSString, NSObject;

@interface _NSBlockKeyValueObservation : NSObject {
    NSObject *_observed;
    NSString *_keyPath;
    id /* block */ _block;
    BOOL _isObserving;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;

@end
