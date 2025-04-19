@class SOFullProfile, SOKerberosRealmSettings, NSOperationQueue, SOKerberosExtensionData, SONetworkIdentity, SOADSiteDiscovery, SOAuthorizationWrapper;

@interface SOKerberosAgentContext : NSObject

@property (retain) SOFullProfile *profile;
@property (retain) SOKerberosRealmSettings *settings;
@property (retain) SOKerberosExtensionData *extensionData;
@property (retain) SONetworkIdentity *identity;
@property (retain) SOADSiteDiscovery *siteDiscovery;
@property (retain) SOAuthorizationWrapper *authWrapper;
@property (retain) SOAuthorizationWrapper *receivedTGTAuthWrapper;
@property (retain) SOAuthorizationWrapper *passwordSyncAuthWrapper;
@property (retain) SOAuthorizationWrapper *passwordChangeAuthWrapper;
@property (readonly) NSOperationQueue *contextNetworkWorkQueue;
@property (readonly) NSOperationQueue *contextKerberosWorkQueue;
@property BOOL authRequestPending;
@property BOOL discoveryInProgress;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;

@end
