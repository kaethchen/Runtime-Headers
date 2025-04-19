@class NSDictionary, NSString;

@interface CPUI_AuthKitSilentReAuth : NSObject

@property (retain) NSDictionary *authResults;
@property BOOL requireZMAID;
@property (retain) NSString *personaID;

- (void).cxx_destruct;
- (void)_startReAuthWithCompletion:(id /* block */)a0;
- (void)startReAuthWithCompletion:(id /* block */)a0;

@end
