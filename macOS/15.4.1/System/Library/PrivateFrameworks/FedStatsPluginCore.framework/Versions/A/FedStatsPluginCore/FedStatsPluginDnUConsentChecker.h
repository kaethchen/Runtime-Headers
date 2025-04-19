@class NSString;

@interface FedStatsPluginDnUConsentChecker : NSObject <FedStatsPluginConsentCheckerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)checkConsentForClientIdentifier:(id)a0 error:(id *)a1;

@end
