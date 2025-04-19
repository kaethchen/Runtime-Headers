@class NSMutableDictionary;

@interface NSThreadSafeClassCache : NSObject {
    NSMutableDictionary *_dictionary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;

@end
