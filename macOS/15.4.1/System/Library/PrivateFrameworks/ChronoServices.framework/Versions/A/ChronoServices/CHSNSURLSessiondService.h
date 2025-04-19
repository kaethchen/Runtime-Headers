@class CHSChronoServicesConnection;

@interface CHSNSURLSessiondService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;

@end
