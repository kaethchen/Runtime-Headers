@class ACAccount;

@interface AMSBiometricsDisableTask : AMSTask

@property (readonly) ACAccount *account;

- (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)a0;

@end
