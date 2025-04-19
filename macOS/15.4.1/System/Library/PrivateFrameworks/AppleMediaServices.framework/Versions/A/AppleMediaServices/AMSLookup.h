@class NSString, AMSBagKeySet, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSLookup : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSString *caller;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *imageProfile;
@property (retain) NSString *keyProfile;
@property (retain) NSString *platform;
@property long long signatureType;
@property long long version;
@property (retain) NSString *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_addJSSignatureToRequest:(id)a0;
- (id)_compileQueryParametersWithBundleIds:(id)a0 itemIds:(id)a1;
- (id)contract;
- (id)initWithBag:(id)a0 caller:(id)a1 keyProfile:(id)a2;
- (id)initWithBagContract:(id)a0;
- (id)initWithBagContract:(id)a0 caller:(id)a1 keyProfile:(id)a2;
- (id)performLookupWithBundleIdentifiers:(id)a0 itemIdentifiers:(id)a1;
- (void)setContract:(id)a0;

@end
