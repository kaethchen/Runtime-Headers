@class AMSBagValue, NSString;
@protocol AMSBagProtocol, AMSMescalBagContract, AMSMetricsBagContract;

@interface AMSDeprecatedBagContract : NSObject <AMSDeviceOfferBagContract, AMSMetricsBagContract, AMSMescalBagContract, AMSLookupBagContract>

@property (retain) id<AMSBagProtocol> bag;
@property (readonly) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) AMSBagValue *metricsURL;
@property (readonly) AMSBagValue *metricsDictionary;
@property (readonly) AMSBagValue *metricsUrl;
@property (readonly) AMSBagValue *apsEnabledPatterns;
@property (readonly) AMSBagValue *apsSamplingPercent;
@property (readonly) AMSBagValue *apsAllowedProductTypes;
@property (readonly) AMSBagValue *guidRegexes;
@property (readonly) AMSBagValue *guidSchemes;
@property (readonly) id<AMSMescalBagContract> mescalContract;
@property (readonly) AMSBagValue *storefrontSuffix;
@property (readonly) AMSBagValue *TLSSamplingPercentage;
@property (readonly) AMSBagValue *TLSSamplingSessionDuration;
@property (readonly) AMSBagValue *TFOSamplingPercentage;
@property (readonly) AMSBagValue *TFOSamplingSessionDuration;
@property (readonly) AMSBagValue *trustedDomains;
@property (readonly) id<AMSMetricsBagContract> metricsContract;
@property (readonly) AMSBagValue *mescalCertificateURL;
@property (readonly) AMSBagValue *mescalSetupURL;
@property (readonly) AMSBagValue *mescalPrimingURL;
@property (readonly) AMSBagValue *mescalSignedActions;
@property (readonly) AMSBagValue *mescalSignSapRequests;
@property (readonly) AMSBagValue *mescalSignSapResponses;
@property (readonly) AMSBagValue *personalizedLookupURL;
@property (readonly) AMSBagValue *unpersonalizedLookupURL;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;

@end
