@class CCDonateRequestManager;

@interface CCDonateConnectionFactory : NSObject <CCDonateServiceProvider> {
    CCDonateRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)terminateConnection:(id)a0;
- (id)makeConnection:(id)a0;
- (id)initWithRequestManager:(id)a0;
- (id)makeXPCConnection:(id)a0;

@end
