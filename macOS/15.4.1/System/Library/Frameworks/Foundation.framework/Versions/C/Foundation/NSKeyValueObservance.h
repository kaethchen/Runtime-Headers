@class NSKeyValueProperty, NSObject;

@interface NSKeyValueObservance : NSObject {
    NSObject *_observer;
    NSKeyValueProperty *_property;
    void *_context;
    union { NSObject *originalObservable; NSObject *unownedObserver; } _originalObservableOrUnownedObserver;
    unsigned char _options : 4;
    unsigned char _observerIsWeak : 1;
    unsigned char _isObservedByAnObservance : 1;
    unsigned char _cachedIsShareable : 1;
    unsigned char _isInternalObservationHelper : 1;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithObserver:(id)a0 property:(id)a1 options:(unsigned long long)a2 context:(void *)a3 originalObservable:(id)a4;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
