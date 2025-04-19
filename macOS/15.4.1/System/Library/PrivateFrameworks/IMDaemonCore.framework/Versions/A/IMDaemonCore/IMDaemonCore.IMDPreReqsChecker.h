@class NSError;

@interface IMDaemonCore.IMDPreReqsChecker : NSObject <IMDaemonCore.SyncPreReqsVerifying> {
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)verifyAllPreReqsWithRequireEnablement:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;

@end
