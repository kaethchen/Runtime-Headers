@class NSDate;

@interface NSPersistentUICrashHistory : NSObject <NSCopying> {
    BOOL _loaded;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_lastCrashDate;
    NSDate *_lastForceQuitDate;
}

@property (readonly, copy) NSDate *lastCrashDate;
@property (readonly, copy) NSDate *lastForceQuitDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
