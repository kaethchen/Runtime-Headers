@class NSArray, NSString, AMSUIWebClientContext, ACAccount;

@interface AMSUIWebMediaAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (readonly) ACAccount *account;
@property (retain) NSArray *bundleIdentifiers;
@property (retain) NSString *clientIdentifier;
@property (retain) NSString *clientVersion;
@property (retain) NSArray *itemIdentifiers;
@property (retain) NSArray *includedResultKeys;
@property long long type;
@property (retain) NSString *urlString;
@property (readonly) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
