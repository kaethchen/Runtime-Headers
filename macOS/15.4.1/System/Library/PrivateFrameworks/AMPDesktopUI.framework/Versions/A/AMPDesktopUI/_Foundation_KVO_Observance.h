@class NSObject;
@protocol _Foundation_NSKeyValueProperty;

@interface _Foundation_KVO_Observance : NSObject {
    NSObject *_observer;
    id<_Foundation_NSKeyValueProperty> _property;
    void *_context;
    NSObject *_originalObservable;
    unsigned char _options : 7;
    unsigned char _cachedIsShareable : 1;
}

- (void).cxx_destruct;

@end
