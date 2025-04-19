@interface GDAnalytics : NSObject

+ (void)sendEventForProductionWithEventName:(id)a0 prefix:(id)a1 eventPayload:(id)a2;
+ (void)sendEventForProductionLazyWithEventName:(id)a0 eventPayloadBuilder:(id /* block */)a1;

- (id)init;

@end
