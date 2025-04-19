@class NSString, ACAccount;

@interface AMSUIWebFetchMetricsIdentifierAction : AMSUIWebAction

@property (retain) ACAccount *account;
@property (retain) NSString *bagNamespace;
@property (retain) NSString *bagProfile;
@property (retain) NSString *bagProfileVersion;
@property BOOL crossDeviceSync;
@property BOOL generateEventFields;
@property (retain) NSString *identifierKey;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
