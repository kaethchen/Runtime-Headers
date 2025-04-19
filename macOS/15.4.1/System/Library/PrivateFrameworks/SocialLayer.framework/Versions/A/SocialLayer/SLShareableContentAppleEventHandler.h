@interface SLShareableContentAppleEventHandler : NSObject

+ (void)load;
+ (id)sharedEventHandler;

- (void)handleAppleEvent:(id)a0 withReplyEvent:(id)a1;
- (void)_registerForAppleEvents;

@end
