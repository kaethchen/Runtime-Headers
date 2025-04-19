@class EFObservable, NSObject;
@protocol OS_os_log;

@interface MCPowerSourceManager : NSObject {
    struct __CFRunLoopSource { } *_runLoopSource;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL powerSourceIsLimited;
@property (readonly, nonatomic) EFObservable *powerSourceIsLimitedObservable;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;

@end
