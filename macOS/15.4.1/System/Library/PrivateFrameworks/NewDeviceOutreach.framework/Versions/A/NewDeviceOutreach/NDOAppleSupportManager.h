@interface NDOAppleSupportManager : NSObject

- (void)appSupportAvailability:(id)a0 withReply:(id /* block */)a1;
- (id)checkAppIsPurchased:(id)a0;
- (void)checkIsAvailableInStore:(id)a0 withReply:(id /* block */)a1;

@end
