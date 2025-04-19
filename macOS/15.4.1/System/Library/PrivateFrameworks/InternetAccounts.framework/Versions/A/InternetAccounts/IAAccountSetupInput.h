@class NSString, NSDictionary, NSMutableDictionary;

@interface IAAccountSetupInput : NSObject

@property (retain) NSString *password;
@property (retain) NSString *userName;
@property (retain) NSString *accountDescription;
@property (retain, nonatomic) NSDictionary *autoconfigDefaults;
@property BOOL createDeactivated;
@property (readonly) NSMutableDictionary *context;
@property BOOL continueThroughError;
@property BOOL continueWithoutSSL;
@property (retain) NSString *iaAListPluginID;
@property (retain) NSString *acAccountID;
@property (retain) NSString *acAccountTypeID;
@property (retain) NSString *configProfileIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
