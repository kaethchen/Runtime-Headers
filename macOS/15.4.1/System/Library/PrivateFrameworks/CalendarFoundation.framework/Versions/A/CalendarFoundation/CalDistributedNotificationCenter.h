@class NSMutableDictionary;

@interface CalDistributedNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *handlers;

+ (void)removeObserver:(id)a0;
+ (id)defaultCenter;
+ (void)removeObserver:(id)a0 name:(id)a1;
+ (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2;
+ (void)_addHandler:(id)a0 toObserver:(id)a1;
+ (void)_clearHandlersForObserver:(id)a0;
+ (void)_handleNotification:(id)a0;
+ (void)_removeHandler:(id)a0 fromObserver:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
