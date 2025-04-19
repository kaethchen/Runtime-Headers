@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AESystemNotificationObservation : NSObject <AEObservation>

@property (readonly, copy, nonatomic) NSString *notificationName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ notificationHandler;

+ (id)observationWithNotificationName:(id)a0 queue:(id)a1 notificationHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)fire;
- (void)invalidate;
- (void)beginObserving;
- (id)initWithNotificationName:(id)a0 queue:(id)a1 notificationHandler:(id /* block */)a2;

@end
