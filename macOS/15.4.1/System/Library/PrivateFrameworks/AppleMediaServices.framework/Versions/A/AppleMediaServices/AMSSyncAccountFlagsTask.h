@class ACAccount;
@protocol AMSBagProtocol;

@interface AMSSyncAccountFlagsTask : AMSTask

@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)performSync;

@end
