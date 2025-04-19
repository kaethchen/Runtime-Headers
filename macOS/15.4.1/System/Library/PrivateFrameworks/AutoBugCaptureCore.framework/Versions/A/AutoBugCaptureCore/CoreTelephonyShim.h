@class NSString, NSMutableSet, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface CoreTelephonyShim : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate> {
    CoreTelephonyClient *_coreTelephonyClient;
    NSMutableSet *_delegates;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)subscriptionInfoDidChange;
- (void)carrierBundleChange:(id)a0;
- (id)copyCarrierBundleValue:(id)a0 key:(id)a1 bundleType:(id)a2 error:(id *)a3;
- (void)currentDataSimChanged:(id)a0;
- (id)getCurrentDataSubscriptionContextSync:(id *)a0;
- (id)getEnglishCarrierNameFor:(id)a0 error:(id *)a1;
- (id)copyMobileCountryCode:(id)a0 error:(id *)a1;
- (id)copyMobileNetworkCode:(id)a0 error:(id *)a1;

@end
