@class NSString;

@interface CRKConcreteDistributedNotificationSubscription : NSObject <CRKCancelable>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (struct __CFNotificationCenter { } *)center;
- (id)initWithNotificationName:(id)a0 handler:(id /* block */)a1;
- (void)notificationDidFire:(id)a0;

@end
