@class NSMutableDictionary;

@interface TMSessionCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_regularExpressions;
}

- (id)init;
- (void).cxx_destruct;

@end
