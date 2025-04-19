@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ULDarwinNotificationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleDarwinNotificationCallback:(id)a0;
- (void)addObserverForNotificationName:(id)a0 handler:(id /* block */)a1;
- (void)removeObserverForNotificationName:(id)a0;
- (unsigned long long)stateForNotificationName:(id)a0;

@end
