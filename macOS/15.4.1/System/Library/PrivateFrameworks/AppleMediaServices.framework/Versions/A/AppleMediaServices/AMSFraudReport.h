@class NSString, AMSBagKeySet;

@interface AMSFraudReport : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addDeviceIdentityCertificateAndSignatureToRequest:(id)a0 parameters:(id)a1 bag:(id)a2;
+ (id)createBagForSubProfile;
+ (id)handleResponse:(id)a0 account:(id)a1 bag:(id)a2;
+ (BOOL)isFeatureSupportedForBag:(id)a0;


@end
