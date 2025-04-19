@class NSObject;
@protocol OS_os_activity;

@interface NSRemoteViewSemaphore : NSCFRunLoopSemaphore {
    NSObject<OS_os_activity> *_activity;
}

+ (id)semaphoreWithActivity:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)wait:(double)a0;
- (id)initWithActivity:(id)a0;

@end
