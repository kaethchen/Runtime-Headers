@class PKProvisioningAnalyticsSession, PKPaymentProvisioningController, PKPeerPaymentWebService, PKProximitySetupLiaison, PKGroupsController, NSString, PKPaymentWebService;

@interface PKProvisioningContext : NSObject

@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) PKGroupsController *groupsController;
@property (weak, nonatomic) PKPaymentWebService *managingDeviceWebService;
@property (weak, nonatomic) PKPaymentWebService *destinationDeviceWebService;
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isFollowupProvisioning;
@property (nonatomic) BOOL isFollowupSetupAssistant;
@property (nonatomic) long long mode;
@property (retain, nonatomic) PKProximitySetupLiaison *proximitySetupLiaison;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *hostApplicationBundleIdentifier;
@property (retain, nonatomic) PKProvisioningAnalyticsSession *analyticsSession;

- (void).cxx_destruct;
- (id)initWithEnvironment:(long long)a0 provisioningController:(id)a1 groupsController:(id)a2;
- (id)initWithEnvironment:(long long)a0 provisioningController:(id)a1 groupsController:(id)a2 managingDeviceWebService:(id)a3 destinationDeviceWebService:(id)a4;

@end
