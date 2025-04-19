@class NSString, NSObject, CTXPCServiceSubscriptionContext;
@protocol OS_dispatch_queue;

@interface WirelessTechnologyProfile : NSObject <CoreTelephonyShimDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    int _regulatoryDomainUpdateNotificationToken;
}

@property (retain) NSString *regulatoryDomainCountry;
@property (retain) NSString *homeCarrier;
@property (retain) CTXPCServiceSubscriptionContext *dataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)fetchFormattedHomeCarrierNameForContext:(id)a0;
+ (id)fetchMCCMNCHomeCarrierNameForContext:(id)a0;
+ (id)fetchRegulatoryDomainCountry;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)subscriptionInfoDidChange;
- (void)carrierBundleChange:(id)a0;
- (void)currentDataSimChanged:(id)a0;
- (id)fetchHomeCarrier;
- (void)updateHomeCarrier;

@end
