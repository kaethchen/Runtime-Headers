@class MFEWSAccount;

@interface MFEWSPersistenceTaskHandler : MCTaskHandler

@property (readonly, weak) MFEWSAccount *account;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end
