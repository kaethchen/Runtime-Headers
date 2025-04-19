@class ACAccountStore;

@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider>

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (void).cxx_destruct;
- (id)accountWithIdentifier:(id)a0;
- (id)accounts;
- (id)initWithAccountStore:(id)a0;

@end
