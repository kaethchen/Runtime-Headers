@class DAAccount;

@interface DAActivity : NSObject {
    DAAccount *_account;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end
