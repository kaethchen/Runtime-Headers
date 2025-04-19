@class NSString;

@interface HMDCoreDataContextTransactionAuthor : HMFObject

@property (readonly) unsigned long long type;
@property (readonly) NSString *clientIdentifier;
@property (readonly) long long qualityOfService;
@property (readonly, copy) NSString *string;

+ (id)contextAuthorWithString:(id)a0;
+ (id)contextAuthorWithType:(unsigned long long)a0;
+ (id)contextAuthorWithType:(unsigned long long)a0 clientIdentifier:(id)a1;
+ (id)contextAuthorWithType:(unsigned long long)a0 clientIdentifier:(id)a1 qualityOfService:(long long)a2;
+ (id)controllerForceUpdateContextAuthor;
+ (id)firstPartyContextAuthor;
+ (id)residentSyncContextAuthor;
+ (id)unitTestsContextAuthor;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 clientIdentifier:(id)a1 qualityOfService:(long long)a2;

@end
