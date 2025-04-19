@class NSString, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUserNotificationSettingsTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) NSString *clientIdentifier;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_url;
- (id)updateSettings:(id)a0;
- (id)_countryCodeFromBag:(id)a0;
- (id)_generateParametersForItems:(id)a0;
- (id)_stringForKey:(id)a0 fromBag:(id)a1;
- (id)fetchAllSettings;
- (id)initWithIdentifier:(id)a0 clientIdentifier:(id)a1 account:(id)a2 bag:(id)a3;

@end
