@class NSError;

@interface MessagesCloudSync.NoOpPreReqVerifier : _TtCs12_SwiftObject <MessagesCloudSync.SyncPreReqsVerifying>

- (void)verifyAllPreReqsWithRequireEnablement:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;

@end
