@class NSString, NSArray, AMSBagKeySet, ACAccount, NSDictionary, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSMediaTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property BOOL URLKnownToBeTrusted;
@property (retain) ACAccount *account;
@property (retain) NSArray *additionalPlatforms;
@property (retain) NSDictionary *additionalQueryParams;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) NSArray *bundleIdentifiers;
@property BOOL charts;
@property (readonly) NSString *clientIdentifier;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSString *clientVersion;
@property (retain) NSDictionary *filters;
@property (retain) NSArray *includedResultKeys;
@property (retain) NSArray *itemIdentifiers;
@property (retain) NSString *logKey;
@property (retain) NSString *searchTerm;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithType:(long long)a0 clientIdentifier:(id)a1 clientVersion:(id)a2 bag:(id)a3;

@end
