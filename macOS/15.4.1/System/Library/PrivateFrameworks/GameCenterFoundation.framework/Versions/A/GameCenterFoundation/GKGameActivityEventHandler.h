@class NSString;

@interface GKGameActivityEventHandler : NSObject <GKGameActivityEventHandlerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)deliverEncodedGameActivityInstance:(id)a0;
- (void)receivedGKGameActivityNotification:(id)a0;

@end
