@class AMSBagValue, NSString, AMSBag;

@interface MMCommerceBagContract : NSObject <AMSDeviceOfferBagContract>

@property (readonly, nonatomic) AMSBag *bag;
@property (readonly) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
