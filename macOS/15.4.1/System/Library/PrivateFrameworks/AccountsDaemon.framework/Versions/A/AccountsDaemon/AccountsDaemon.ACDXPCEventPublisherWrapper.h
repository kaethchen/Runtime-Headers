@interface AccountsDaemon.ACDXPCEventPublisherWrapper : NSObject

+ (void)notifySubscribersOfAccountChange:(id)a0 type:(int)a1;
+ (void)registerSubscriberListener;

- (id)init;

@end
