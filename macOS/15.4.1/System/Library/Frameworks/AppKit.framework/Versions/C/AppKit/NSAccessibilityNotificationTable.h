@class NSMapTable;

@interface NSAccessibilityNotificationTable : NSObject {
    NSMapTable *_notificationTable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)init;

@end
