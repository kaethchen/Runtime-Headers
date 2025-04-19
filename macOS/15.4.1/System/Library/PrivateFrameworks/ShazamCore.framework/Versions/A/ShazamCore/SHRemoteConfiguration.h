@class AMSBagValue, SHAMPConfigurationRequester, AMSBag;

@interface SHRemoteConfiguration : NSObject

@property (retain) AMSBag *amsBag;
@property (retain) AMSBagValue *hapticsEndpointsBagValue;
@property (retain) AMSBagValue *endpointsBagValue;
@property (retain) AMSBagValue *internalHostBagValue;
@property (retain) AMSBagValue *externalHostBagValue;
@property (retain) AMSBagValue *campaignTokenBagValue;
@property (retain) AMSBagValue *defaultValuesBagValue;
@property (retain) AMSBagValue *languageTagBagValue;
@property (retain) AMSBagValue *featureFlagsBagValue;
@property (retain) AMSBagValue *shazamOfferAPIHostsBagValue;
@property (retain) AMSBagValue *shazamAMPConfigurationAPIEndpointsBagValue;
@property (retain) AMSBagValue *cacheValuesBagValue;
@property (retain) AMSBagValue *recorderConfigurationBagValue;
@property (retain) AMSBagValue *musicalFeaturesBagConfigurationValue;
@property (readonly) SHAMPConfigurationRequester *configurationRequester;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (void)cacheValuesWithCompletion:(id /* block */)a0;
- (void)campaignTokenWithCompletion:(id /* block */)a0;
- (void)defaultValuesWithCompletion:(id /* block */)a0;
- (void)endpointsWithCompletion:(id /* block */)a0;
- (void)featureFlagsWithCompletion:(id /* block */)a0;
- (void)hapticsWithCompletion:(id /* block */)a0;
- (void)hostForClientType:(long long)a0 completion:(id /* block */)a1;
- (void)musicalFeaturesBagConfigurationWithCompletion:(id /* block */)a0;
- (id)musicalFeaturesBagConfigurationWithPromise;
- (void)offerValuesWithCompletion:(id /* block */)a0;
- (void)populateRemoteConfiguration;
- (void)recorderConfigurationWithCompletion:(id /* block */)a0;
- (id)recorderConfigurationWithPromise;
- (void)shazamAMPConfigurationAPIHostWithCompletion:(id /* block */)a0;
- (void)shazamOfferAPIURLPathWithCompletion:(id /* block */)a0;
- (void)streamingProviderValuesWithCompletion:(id /* block */)a0;

@end
