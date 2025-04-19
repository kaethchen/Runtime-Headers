@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RTNotifier : NSObject

@property (retain, nonatomic) NSMutableDictionary *observersMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)removeObserver:(id)a0;
- (void)postNotification:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2;
- (unsigned long long)getNumberOfObservers:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (BOOL)observer:(id)a0 observingNotificationName:(id)a1;
- (void)postNotification:(id)a0 toObserver:(id)a1;
- (void)removeAllObservers;
- (void)removeObserver:(id)a0 fromNotification:(id)a1;

@end
