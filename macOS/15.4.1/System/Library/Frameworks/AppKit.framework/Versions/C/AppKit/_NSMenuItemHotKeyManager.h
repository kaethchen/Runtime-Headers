@class NSMutableDictionary;

@interface _NSMenuItemHotKeyManager : NSObject {
    NSMutableDictionary *_hotKeyItems;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)init;

@end
