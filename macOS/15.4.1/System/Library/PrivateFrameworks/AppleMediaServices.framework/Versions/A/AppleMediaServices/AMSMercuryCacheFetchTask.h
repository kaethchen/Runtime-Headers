@class NSString, NSSet, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSMercuryCacheFetchTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSSet *cacheTypeIDs;
@property (readonly) NSString *clientIdentifier;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSString *clientVersion;
@property (retain) NSString *logKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)requestEncoderWithSharedProperties:(id)a0 task:(id)a1;
+ (id)sharedPropertiesFromTask:(id)a0;

@end
