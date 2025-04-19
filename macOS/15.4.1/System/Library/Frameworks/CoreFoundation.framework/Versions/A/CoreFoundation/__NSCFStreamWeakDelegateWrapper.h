@protocol NSStreamDelegate;

@interface __NSCFStreamWeakDelegateWrapper : NSObject {
    id<NSStreamDelegate> _object;
    BOOL _useFallback;
}

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)retainedDelegate;

@end
