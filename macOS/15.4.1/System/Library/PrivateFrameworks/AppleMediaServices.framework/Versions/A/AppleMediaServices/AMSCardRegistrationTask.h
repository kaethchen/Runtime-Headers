@class NSString;

@interface AMSCardRegistrationTask : AMSTask

@property (copy) NSString *countryCode;
@property (copy) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)_performCardRegistration;
- (id)initWithCountryCode:(id)a0 merchantIdentifier:(id)a1;
- (id)performCardRegistration;

@end
