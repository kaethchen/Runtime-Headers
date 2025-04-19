@interface AEConcreteSystemNotificationPrimitives : NSObject <AESystemNotificationPrimitives>

- (void)postSystemNotificationWithName:(id)a0;
- (id)observeSystemNotificationWithName:(id)a0 onQueue:(id)a1 withHandler:(id /* block */)a2;

@end
