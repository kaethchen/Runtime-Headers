@class ACAccount;

@interface AAAutoAccountVerifier : NSObject

@property (retain, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithAccount:(id)a0;
- (void)sendVerificationEmail;
- (void)verifyWithHandler:(id /* block */)a0;

@end
