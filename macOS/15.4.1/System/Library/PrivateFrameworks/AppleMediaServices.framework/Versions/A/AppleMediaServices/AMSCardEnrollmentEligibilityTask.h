@class NSString;
@protocol AMSBagProtocol;

@interface AMSCardEnrollmentEligibilityTask : AMSTask

@property (retain) id<AMSBagProtocol> bag;
@property (readonly, copy) NSString *countryCode;

- (void).cxx_destruct;
- (unsigned long long)_cardTypeForPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (id)_checkForCombinediTunesAccount;
- (id)_checkThatSilentEnrollmentIsEnabled;
- (id)_createEligibilityRequestWithBag:(id)a0 iTunesAccount:(id)a1 iCloudAccount:(id)a2 cardType:(unsigned long long)a3;
- (id)_mediaType;
- (id)_performSilentEnrollmentCheckWithRequest:(id)a0;
- (void)canWriteBillingInfoWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (id)initWithBag:(id)a0;
- (id)initWithBag:(id)a0 countryCode:(id)a1;
- (id)initWithCountryCode:(id)a0;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;

@end
