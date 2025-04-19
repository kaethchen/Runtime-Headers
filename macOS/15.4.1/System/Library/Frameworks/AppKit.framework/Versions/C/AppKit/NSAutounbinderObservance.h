@class NSString, NSObject;

@interface NSAutounbinderObservance : NSObject {
    NSObject *_observer;
    NSString *_keyPath;
    void *_context;
}

- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObserver:(id)a0 keyPath:(id)a1 context:(void *)a2;

@end
