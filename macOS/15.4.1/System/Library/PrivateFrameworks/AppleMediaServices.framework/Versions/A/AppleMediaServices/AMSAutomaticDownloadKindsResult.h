@class NSArray, ACAccount;

@interface AMSAutomaticDownloadKindsResult : NSObject

@property (readonly) ACAccount *account;
@property (readonly) NSArray *enabledMediaKinds;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 andEnabledMediaKinds:(id)a1;

@end
