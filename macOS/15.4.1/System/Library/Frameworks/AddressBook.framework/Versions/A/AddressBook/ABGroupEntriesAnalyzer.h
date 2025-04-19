@class NSArray, NSMutableArray, ABAddressBook;
@protocol ABAccountHidingPolicy;

@interface ABGroupEntriesAnalyzer : NSObject {
    NSArray *_accounts;
    ABAddressBook *_addressBook;
    NSMutableArray *_directoryAccounts;
    NSMutableArray *_persistentAccounts;
    NSMutableArray *_smartGroups;
    NSMutableArray *_visibleAccounts;
    id<ABAccountHidingPolicy> _accountHidingPolicy;
}

- (void).cxx_destruct;
- (void)analyzeAccount:(id)a0;
- (id)persistentAccounts;
- (id)smartGroups;
- (void)analyzeAccounts;
- (id)directoryAccounts;
- (id)initWithAccounts:(id)a0 addressBook:(id)a1 hidingPolicy:(id)a2;
- (void)collectDirectoryAccounts;
- (void)collectPersistentAccounts;
- (void)collectSmartGroups;
- (void)collectVisibleAccounts;

@end
