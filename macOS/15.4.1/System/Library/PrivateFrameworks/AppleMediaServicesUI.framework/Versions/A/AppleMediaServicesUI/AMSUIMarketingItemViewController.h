@class NSString, AMSBagKeySet, NSDictionary;

@interface AMSUIMarketingItemViewController : AMSUIDynamicViewController <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSString *offerHints;
@property (retain) NSString *seed;
@property (copy) NSDictionary *contextInfo;
@property (retain) NSString *placement;
@property (retain) NSString *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_setInternalClientOptionsValue:(id)a0 forKey:(id)a1;
- (id)initWithMarketingItem:(id)a0 bag:(id)a1;
- (id)initWithServiceType:(id)a0 placement:(id)a1 account:(id)a2 bag:(id)a3;
- (id)initWithServiceType:(id)a0 placement:(id)a1 bag:(id)a2;

@end
