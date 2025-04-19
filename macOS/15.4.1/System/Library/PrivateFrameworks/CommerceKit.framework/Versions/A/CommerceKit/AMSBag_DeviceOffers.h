@class AMSBagValue, CKStoreClient, NSString;

@interface AMSBag_DeviceOffers : NSObject <AMSDeviceOfferBagContract>

@property (retain, nonatomic) CKStoreClient *storeClient;
@property (readonly) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStoreClient:(id)a0;

@end
