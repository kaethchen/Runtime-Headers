@class NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface MDSNotificationCenter : NSObject {
    NSNotificationCenter *_localCenter;
    NSObject<OS_dispatch_queue> *_postingQueue;
}

+ (void)initialize;
+ (void)postNotificationName:(id)a0 object:(id)a1;
+ (void)postNotification:(id)a0;
+ (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
+ (id)currentCenter;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)postNotification:(id)a0;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (id)initWithQueue:(id)a0;

@end
