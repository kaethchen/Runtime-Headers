@class NSString, NSDictionary, NSURL, ACAccount;

@interface AMSUIWebNetworkAction : AMSUIWebAction

@property (retain) ACAccount *account;
@property (retain) NSString *body;
@property (retain) NSString *gsTokenIdentifier;
@property (retain) NSDictionary *headers;
@property BOOL includeAuthKitTokens;
@property BOOL includeiCloudTokens;
@property (retain) NSString *method;
@property BOOL requiresCellularAccess;
@property (retain) NSString *signatureData;
@property (retain) NSURL *URL;
@property BOOL usePrimaryKeychain;

- (void).cxx_destruct;
- (id)_createSession;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
