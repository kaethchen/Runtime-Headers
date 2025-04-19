@class NSDictionary, NSString;

@interface AMSSignInContext : NSObject <AMSHashable>

@property BOOL canMakeAccountActive;
@property (retain) NSDictionary *customHTTPHeaders;
@property (retain) NSString *debugReason;
@property BOOL ignoreAccountConversion;
@property BOOL skipAuthentication;
@property (readonly) NSString *hashedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
