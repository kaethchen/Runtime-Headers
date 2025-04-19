@class NSURL, NSString, NSError;

@interface SiriAnalytics.StagingPoolHost : NSObject <SiriAnalytics.ExtensionOrchestratorHostProtocol> {
    void /* unknown type, empty encoding */ stagingContainerURL;
}

- (id)init;
- (void).cxx_destruct;
- (void)dataPoolUrlWithCompletionHandler:(void (^)(NSURL *))a0;
- (void)vendStagingAccessWithAuditToken:(struct { unsigned int x0[8]; })a0 completionHandler:(void (^)(NSString *, NSError *))a1;

@end
