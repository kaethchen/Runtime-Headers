@class AMSMetricsIdentifierStore, NSString, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifier : NSObject {
    AMSMetricsIdentifierStore *_store;
}

@property (retain) ACAccount *account;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *domain;
@property double duration;

+ (void)cleanupIdentifiers;
+ (id)clientIdKey;
+ (void)removeIdentifiersForAccount:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)generateEventFields;
- (id)generateIdentifier;

@end
