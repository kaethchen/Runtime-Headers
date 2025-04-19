@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>

@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL listening;
@property (readonly, nonatomic) NSString *notificationName;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (BOOL)_removeObserver;
- (BOOL)_addObserver;
- (void)_notificationWithNameReceived:(id)a0;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1 queue:(id)a2;

@end
